#include "global.h"
 #include "battle.h"
 #include "battle_main.h"
 #include "data.h"
 #include "pokemon.h"
 #include "item.h"
 #include "constants/items.h"
 #include "constants/abilities.h"
 #include "constants/trainers.h"
 #include "constants/battle.h"
 #include "constants/moves.h"
 #include "trainer_control.h"
 
 void CreateTrainerMon(struct Pokemon *party, const struct Trainer *trainer, u32 partySlot, u32 personalityValue, u32 fixedOtId)
 {
     const struct TrainerMon *partyData = &trainer->party[partySlot];
     u32 otIdType, i;
     if (partyData->gender != 0)
     {
         u32 newPersonality = personalityValue & 0xFFFFFF00;
         u32 genderRatio = gSpeciesInfo[partyData->species].genderRatio;
         if (partyData->gender == TRAINER_PARTY_GENDER(MALE))
             newPersonality |= ((255 - genderRatio) / 2) + genderRatio;
         else
             newPersonality |= genderRatio / 2;
         personalityValue = newPersonality;
     }
     if (partyData->nature != 0)
     {
         u32 newNature = partyData->nature - 1;
         u32 nature = GetNatureFromPersonality(personalityValue);
         s32 diff = abs(nature - newNature);
         s32 sign = (nature > newNature) ? 1 : -1;
         if (diff > NUM_NATURES / 2)
         {
             diff = NUM_NATURES - diff;
             sign *= -1;
         }
         personalityValue -= (diff * sign);
     }
     otIdType = OT_ID_RANDOM_NO_SHINY;
     if (fixedOtId != 0)
         otIdType = OT_ID_PRESET;
     if (partyData->isShiny)
     {
         otIdType = OT_ID_PRESET;
         fixedOtId ^= GET_SHINY_VALUE(fixedOtId, personalityValue) << 16; // Make shiny by xoring SID.
     }
     CreateMon(party, partyData->species, partyData->lvl, 0, TRUE, personalityValue, otIdType, fixedOtId);
     if (partyData->heldItem != ITEM_NONE)
         SetMonData(party, MON_DATA_HELD_ITEM, &partyData->heldItem);
 
     
     if (partyData->moves[0] != MOVE_NONE)
     {
         u32 friendship = 0;
         for (i = 0; i < MAX_MON_MOVES; i++)
         {
             u32 move = partyData->moves[i];
             SetMonMoveSlot(party, move, i);
             if (move == MOVE_RETURN)
                 friendship = MAX_FRIENDSHIP;  // Return is more powerful the higher the pokemon's friendship is.
             if (move == MOVE_FRUSTRATION)
                 friendship = 0;  // Frustration is more powerful the lower the pokemon's friendship is.
         }
         SetMonData(party, MON_DATA_FRIENDSHIP, &friendship);
     }
        
     SetMonData(party, MON_DATA_IVS, &partyData->iv);
     if (partyData->ev != NULL)
     {
         for (i = 0; i < NUM_STATS; i++)
             SetMonData(party, MON_DATA_HP_EV + i, &partyData->ev[i]);
     }
     if (gSpeciesInfo[partyData->species].abilities[1])
     {
         u32 abilityNum = partyData->abilityNum;
         SetMonData(party, MON_DATA_ABILITY_NUM, &abilityNum);
     }
     if (partyData->pokeball != 0)
     {
         u32 pokeball = partyData->pokeball;
         SetMonData(party, MON_DATA_POKEBALL, &pokeball);
     }

     if (partyData->nickname != NULL)
     {
         SetMonData(party, MON_DATA_NICKNAME, partyData->nickname);
     }
 }

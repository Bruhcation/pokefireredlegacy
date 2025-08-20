#ifndef GUARD_TRAINER_CONTROL_H

 #define GUARD_TRAINER_CONTROL_H
 
 #define TRAINER_PARTY_IVS(hp, atk, def, speed, spatk, spdef) (hp | (atk << 5) | (def << 10) | (speed << 15) | (spatk << 20) | (spdef << 25))
 #define TRAINER_PARTY_EVS(hp, atk, def, speed, spatk, spdef) ((const u8[NUM_STATS]) {hp, atk, def, spatk, spdef, speed})
 #define TRAINER_PARTY_NATURE(nature) (nature+1)
 #define TRAINER_PARTY_GENDER(gender) (gender+1)
 
 #define TRAINER_TYPE(type, ...) { .type =  { __VA_ARGS__ } }

 // Macros used for specific trainer types
 #define TRAINER(...) TRAINER_TYPE(trainer, __VA_ARGS__)

 void CreateTrainerMon(struct Pokemon *party, const struct Trainer *trainer, u32 partySlot, u32 personalityValue, u32 fixedOtId);

 #endif // GUARD_TRAINER_CONTROL_H
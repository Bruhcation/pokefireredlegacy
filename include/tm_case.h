#ifndef GUARD_TM_CASE_H
#define GUARD_TM_CASE_H

// Values for 'type' argument to InitTMCase
enum {
    TMCASE_FIELD,
    TMCASE_GIVE_PARTY,
    TMCASE_SELL,
    TMCASE_GIVE_PC,
    TMCASE_POKEDUDE,
    TMCASE_REOPENING,
};

// Alternative value for 'allowSelectClose' argument to InitTMCase.
// Indicates that the previous value should be preserved
#define TMCASE_KEEP_PREV 0xFF
#define TAG_DISC 400

extern const struct CompressedSpriteSheet sSpriteSheet_Disc;
extern const struct SpriteTemplate sSpriteTemplate_Disc;
void SetDiscSpriteAnim(struct Sprite *sprite, u8 tmIdx);
extern const u16 sTMSpritePaletteOffsetByType[];

void InitTMCase(u8 type, void (* exitCallback)(void), bool8 allowSelectClose);
void ResetTMCaseCursorPos(void);
void Pokedude_InitTMCase(void);

#endif //GUARD_TM_CASE_H

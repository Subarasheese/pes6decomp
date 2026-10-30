/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_00151EA0(M2C_UNK, u8, u8, u8, u8, u8, u8, u8); /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00851E70(void *);                      /* extern */
M2C_UNK func_00853240(void *, s32);                 /* extern */
void *func_00853430(M2C_UNK, s32 *, M2C_UNK);       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E0C[];
extern char D_00591E4D[];
extern char D_00591E4F[];
extern char D_00591E51[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00591E79[];
extern char D_00591F10[];
extern char D_00591F40[];
extern char D_00592370[];
extern char D_005924B8[];
extern char D_005926D8[];
extern char D_00592701[];
extern char D_008B1454[];
extern char D_008B145C[];
extern char D_008B1464[];
extern char D_008B14F2[];
extern char D_008B14F4[];

s32 func_009B0C20(void) {
    s32 sp28;
    u8 sp2C;
    u8 sp2D;
    s32 var_a2;
    s32 var_a3;
    s32 var_a5;
    s32 var_a7;
    s32 var_a7_2;
    u8 *var_a4;
    u8 temp_a6;
    void *temp_s0;
    void *temp_t1;
    void *temp_t3;
    void *var_a1;

    sp28 = 0;
    temp_s0 = func_00853430(5, &sp28, 0x3C4);
    if (sp28 == 0) {
        func_001C48E8(temp_s0, 0, 0x3C4);
        M2C_FIELD(temp_s0, s16 *, 0) = 0x17;
        M2C_FIELD(temp_s0, s16 *, 2) = 5;
        func_00851E70(temp_s0);
        M2C_FIELD(temp_s0, u8 *, 0x31C) = (u8) (*(u8 *)D_00592701);
        M2C_FIELD(temp_s0, u8 *, 0x31D) = (u8) (*(u8 *)D_005924B8);
        M2C_FIELD(temp_s0, u8 *, 0x31E) = (u8) (*(u8 *)D_00591F10);
        M2C_FIELD(temp_s0, u8 *, 0x31F) = (u8) (*(u8 *)D_00592370);
        M2C_FIELD(temp_s0, u8 *, 0x320) = (u8) (*(u8 *)D_00591E4D);
        M2C_FIELD(temp_s0, u8 *, 0x321) = (u8) (*(u8 *)D_00591E79);
        M2C_FIELD(temp_s0, u8 *, 0x322) = (u8) (*(u8 *)D_00591F40);
        M2C_FIELD(temp_s0, s32 *, 0x330) = (s32) (*(s32 *)D_00591E0C);
        (*(s32 *)D_008B14F4) = M2C_FIELD(temp_s0, s32 *, 0x330);
        M2C_FIELD(temp_s0, u16 *, 0x338) = func_00151EA0(0xFFFF, (*(u8 *)D_00591F40), (*(u8 *)D_00591E79), (*(u8 *)D_00591E4D), (*(u8 *)D_00592370), (*(u8 *)D_00591F10), (*(u8 *)D_005924B8), (*(u8 *)D_00592701));
        var_a3 = 1;
        var_a5 = 0;
        var_a4 = &sp2C;
        var_a2 = 0;
        var_a1 = temp_s0;
        sp2C = (*(u8 *)D_00591E4F);
        sp2D = (*(u8 *)D_00591E51);
        do {
            temp_a6 = *var_a4;
            if (temp_a6 == 0xFF) {
                var_a7 = 1;
            } else {
                var_a7 = (s32) temp_a6 % 23;
            }
            temp_t3 = ((void *)Pes6MatchPlayers) + (var_a7 * 0x240);
            if (var_a3 != 0xFF) {
                var_a7_2 = (var_a2 % 23) + 1;
            } else {
                var_a7_2 = 1;
            }
            temp_t1 = temp_s0 + var_a5;
            var_a5 += 1;
            var_a4 += 1;
            var_a3 += 0xB;
            var_a2 += 0xB;
            M2C_FIELD(temp_t1, s8 *, 0x334) = (s8) M2C_FIELD(temp_t3, u16 *, 0x30);
            M2C_FIELD(temp_t1, s8 *, 0x336) = (s8) M2C_FIELD(temp_t3, s32 *, 0x98);
            M2C_FIELD(var_a1, u16 *, 0x33C) = (u16) M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a7_2 * 0x240)), u16 *, 0x38);
            var_a1 += 2;
        } while (var_a5 < 2);
        (*(s32 *)D_008B145C) = (s32) M2C_FIELD(temp_s0, u16 *, 0x338);
        M2C_FIELD(temp_s0, f32 *, 0x324) = (f32) (*(f32 *)D_00591E58);
        M2C_FIELD(temp_s0, f32 *, 0x328) = (f32) (*(f32 *)D_00591E5C);
        M2C_FIELD(temp_s0, f32 *, 0x328) = (f32) (*(f32 *)D_00591E60);
        (*(s16 *)D_008B1464) = 0;
        (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
        M2C_FIELD(temp_s0, s16 *, 0x33A) = (s16) (s32) (*(f32 *)D_005926D8);
        (*(s16 *)D_008B14F2) = (s16) (s32) (*(f32 *)D_005926D8);
    }
    func_00853240(temp_s0, ((temp_s0 + 0x31C) - temp_s0) + 0x24);
    return 0;
}

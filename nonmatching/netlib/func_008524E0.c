/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00844D40(M2C_UNK, M2C_UNK, void *, s32, s32, u8 *, s32, s32); /* extern */
M2C_UNK func_00851E70(void *);                      /* extern */
M2C_UNK func_00851FE0(void *, M2C_UNK, M2C_UNK *);  /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DCD[];
extern char D_00591E4F[];
extern char D_00591E51[];
extern char D_005926D8[];
extern char D_008B1454[];
extern char D_008B145C[];
extern char D_008B1464[];
extern char D_008B14D8[];
extern char D_008B14F2[];
extern char D_008B1618[];
extern M2C_UNK func_00851FA0;

s32 func_008524E0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, u8 *arg5, s32 arg6, s32 arg7) {
    u8 sp2C;
    u8 sp2D;
    s32 var_a3;
    s32 var_a4;
    s32 var_a6;
    s32 var_a7;
    s32 var_t0;
    s32 var_t0_2;
    u8 *var_a5;
    u8 temp_a7;
    void *temp_s0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t8;
    void *var_a2;

    var_a4 = arg4;
    var_a5 = arg5;
    var_a6 = arg6;
    var_a7 = arg7;
    temp_s0 = M2C_FIELD(((void *)D_008B1618), void **, 0x14);
    if (M2C_FIELD(((void *)D_008B1618), u8 *, 9) == 0) {
        func_001C48E8(temp_s0, 0, 0x3C4);
        M2C_FIELD(temp_s0, s16 *, 0) = 0x17;
        M2C_FIELD(temp_s0, s16 *, 2) = 6;
        func_00851E70(temp_s0);
        M2C_FIELD(temp_s0, u8 *, 0x320) = (u8) (*(u8 *)D_00591DCD);
        M2C_FIELD(temp_s0, u16 *, 0x332) = func_00151EA0(0x1FFF);
        (*(s32 *)D_008B145C) = (s32) M2C_FIELD(temp_s0, u16 *, 0x332);
        func_00851FE0(temp_s0 + 0x334, 1, &func_00851FA0);
        var_a4 = 1;
        var_a6 = 0;
        var_a5 = &sp2C;
        var_a3 = 0;
        var_a2 = temp_s0;
        M2C_FIELD(temp_s0, s16 *, 0x330) = (s16) (s32) (*(f32 *)D_005926D8);
        M2C_FIELD(temp_s0, s32 *, 0x324) = (s32) (*(s32 *)D_008B14D8);
        sp2D = (*(u8 *)D_00591E51);
        sp2C = (*(u8 *)D_00591E4F);
        (*(s16 *)D_008B14F2) = (s16) (s32) (*(f32 *)D_005926D8);
        do {
            temp_a7 = *var_a5;
            if (temp_a7 == 0xFF) {
                var_t0 = 1;
            } else {
                var_t0 = (s32) temp_a7 % 23;
            }
            temp_t8 = ((void *)Pes6MatchPlayers) + (var_t0 * 0x240);
            if (var_a4 != 0xFF) {
                var_t0_2 = (var_a3 % 23) + 1;
            } else {
                var_t0_2 = 1;
            }
            temp_t1 = temp_s0 + var_a6;
            var_a6 += 1;
            temp_t2 = ((void *)Pes6MatchPlayers) + (var_t0_2 * 0x240);
            var_a5 += 1;
            var_a7 = var_a6 < 2;
            var_a4 += 0xB;
            var_a3 += 0xB;
            M2C_FIELD(temp_t1, s8 *, 0x31C) = (s8) M2C_FIELD(temp_t8, u16 *, 0x30);
            M2C_FIELD(temp_t1, s8 *, 0x31E) = (s8) M2C_FIELD(temp_t8, s32 *, 0x98);
            M2C_FIELD(var_a2, s16 *, 0x328) = (s16) M2C_FIELD(temp_t2, s16 *, 0x1CE);
            M2C_FIELD(var_a2, s16 *, 0x32C) = (s16) M2C_FIELD(temp_t2, s16 *, 0x1D0);
            var_a2 += 2;
        } while (var_a7 != 0);
        (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
        (*(s16 *)D_008B1464) = 0;
    }
    func_00844D40(-9, 0xC0, temp_s0, ((temp_s0 + 0x31C) - temp_s0) + 0x38, var_a4, var_a5, var_a6, var_a7);
    return 0;
}

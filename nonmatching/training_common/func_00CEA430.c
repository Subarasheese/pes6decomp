/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00CEAD10(void);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern u32 func_00CDCD70(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00256440();                            /* extern */
M2C_UNK func_00256D50(s32, s32, s32);               /* extern */
s32 func_00CCFDF0(s32, u8, s32);                    /* extern */
s32 func_00CD01F0(M2C_UNK, s32, u8);                /* extern */
s32 func_00CDCC30();                                /* extern */
extern char Pes6MatchSquads[];

void func_00CEA430(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    u16 temp_s1;
    u16 var_v0;
    void *temp_v0;
    void *var_s2_2;
    void *var_s3;

    temp_s1 = func_00CEAD10();
    temp_v0 = func_00CDCD70();
    var_s3 = temp_v0;
    temp_s0 = func_00CD01F0(1, M2C_FIELD(temp_v0, s32 *, 0x1C), M2C_FIELD(temp_v0, u8 *, 0x20)) & 0xFF;
    var_s5 = 0;
    do {
        if (var_s5 != 0) {
            if ((var_s5 == 1) && (temp_s0 == 0)) {
                goto block_5;
            }
            var_s2 = 0;
            do {
                func_00256D50(var_s5, var_s2, func_00CCFDF0(M2C_FIELD(var_s3, s32 *, 0x1C), M2C_FIELD(var_s3, u8 *, 0x20), var_s2) & 0xFFFF);
                var_s2 += 1;
            } while (var_s2 < 0x20);
        } else {
block_5:
            var_s4 = 0;
            var_s2_2 = var_s3;
            do {
                if (M2C_FIELD(var_s3, s32 *, 0x3C) == 0) {
                    var_v0 = Pes6Team_GetPlayerId(temp_s1 & 0xFFFF, var_s4 & 0xFF, 0) & 0xFFFF;
                } else {
                    var_v0 = M2C_FIELD(var_s2_2, u16 *, 0x40);
                }
                func_00256D50(var_s5, var_s4, var_v0 & 0xFFFF);
                var_s4 += 1;
                var_s2_2 += 2;
            } while (var_s4 < 0x20);
        }
        var_s5 += 1;
    } while (var_s5 < 2);
    if (func_00CDCC30() == 0) {
        func_00256440();
    }
    var_a1 = 0;
    var_a0 = ((void *)Pes6MatchSquads);
    do {
        var_a1 += 8;
        M2C_FIELD(var_s3, u16 *, 0x40) = (u16) M2C_FIELD(var_a0, u16 *, 0x46);
        M2C_FIELD(var_s3, u16 *, 0x42) = (u16) M2C_FIELD(var_a0, u16 *, 0x38E);
        M2C_FIELD(var_s3, u16 *, 0x44) = (u16) M2C_FIELD(var_a0, u16 *, 0x6D6);
        M2C_FIELD(var_s3, u16 *, 0x46) = (u16) M2C_FIELD(var_a0, u16 *, 0xA1E);
        M2C_FIELD(var_s3, u16 *, 0x48) = (u16) M2C_FIELD(var_a0, u16 *, 0xD66);
        M2C_FIELD(var_s3, u16 *, 0x4A) = (u16) M2C_FIELD(var_a0, u16 *, 0x10AE);
        M2C_FIELD(var_s3, u16 *, 0x4C) = (u16) M2C_FIELD(var_a0, u16 *, 0x13F6);
        M2C_FIELD(var_s3, u16 *, 0x4E) = (u16) M2C_FIELD(var_a0, u16 *, 0x173E);
        var_a0 += 0x1A40;
        var_s3 += 0x10;
    } while (var_a1 < 0x20);
    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchSquads);
    do {
        M2C_FIELD(var_s0, s8 *, 0x69BC) = 0x64;
        M2C_FIELD(var_s0, s8 *, 0x6990) = 0x64;
        M2C_FIELD(var_s0, s8 *, 0x6910) = 0x64;
        func_001C48E8(var_s0 + 0x6A48, 0, 0x2E);
        func_001C48E8(var_s0 + 0x6B47, 0, 0x10);
        var_s1 += 1;
        var_s0 += 0x348;
    } while (var_s1 < 0x20);
}

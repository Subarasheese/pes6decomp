/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CEA040(void);
extern u16 func_00CEAD10(void);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001F94B0();                            /* extern */
u8 func_00221D10(s32, u8, M2C_UNK);                 /* extern */
M2C_UNK func_00256440();                            /* extern */
M2C_UNK func_00256D50(s32, s32, s32);               /* extern */
extern char Pes6MatchSquads[];
extern char D_00CFFBA0[];

void func_00CEA2A0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s2_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_s3;
    u16 temp_s0;
    u8 *var_s2;
    u8 *var_s3_2;

    temp_s0 = func_00CEAD10();
    func_00CEA040();
    var_s1 = 0;
    do {
        if (var_s1 == 0) {
            var_s3 = 0;
            var_s2 = ((void *)D_00CFFBA0);
            do {
                func_00256D50(var_s1, var_s3, Pes6Team_GetPlayerId(temp_s0 & 0xFFFF, (s32) *var_s2, 0) & 0xFFFF);
                var_s3 += 1;
                var_s2 += 4;
            } while (var_s3 < 0x20);
        } else {
            var_s2_2 = 0;
            do {
                func_00256D50(var_s1, var_s2_2, Pes6Team_GetPlayerId(temp_s0 & 0xFFFF, var_s2_2 & 0xFF, 0) & 0xFFFF);
                var_s2_2 += 1;
            } while (var_s2_2 < 0x20);
        }
        var_s1 += 1;
    } while (var_s1 < 2);
    func_00256440();
    func_001F94B0();
    var_s1_2 = 0;
    var_s3_2 = ((void *)D_00CFFBA0);
    var_s2_3 = ((void *)Pes6MatchSquads);
    do {
        M2C_FIELD(var_s2_3, u8 *, 0x10) = func_00221D10(temp_s0 & 0xFFFF, *var_s3_2, 0);
        var_s1_2 += 1;
        var_s3_2 += 4;
        M2C_FIELD(var_s2_3, u8 *, 0x90) = (u8) M2C_FIELD(var_s2_3, u8 *, 0x10);
        M2C_FIELD(var_s2_3, u8 *, 0x33) = (u8) M2C_FIELD(var_s2_3, u8 *, 0x10);
        M2C_FIELD(var_s2_3, u8 *, 0xBC) = (u8) M2C_FIELD(var_s2_3, u8 *, 0x10);
        var_s2_3 += 0x348;
    } while (var_s1_2 < 0x20);
    var_s1_3 = 0;
    var_s0 = ((void *)Pes6MatchSquads);
    do {
        M2C_FIELD(var_s0, s8 *, 0x69BC) = 0x64;
        M2C_FIELD(var_s0, s8 *, 0x6990) = 0x64;
        M2C_FIELD(var_s0, s8 *, 0x6910) = 0x64;
        func_001C48E8(var_s0 + 0x6A48, 0, 0x2E);
        func_001C48E8(var_s0 + 0x6B47, 0, 0x10);
        var_s1_3 += 1;
        var_s0 += 0x348;
    } while (var_s1_3 < 0x20);
}

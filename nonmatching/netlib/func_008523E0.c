/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00844D40(s64, s32, s16 *, M2C_UNK, void *, s16 *, M2C_UNK *, s32); /* extern */
extern char D_00591A90[];

s32 func_008523E0(s64 arg0, s32 arg1) {
    s16 sp30;
    s8 sp32;
    s8 sp33;
    M2C_UNK *var_a6;
    s16 *var_a5;
    s32 var_a7;
    s32 var_t0;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_a4;
    void *temp_v1;
    void *temp_v1_2;

    func_001C48E8(&sp30, 0, 0x1A);
    sp30 = 0x1E;
    var_t0 = 0;
    sp32 = 2;
    var_a6 = ((void *)D_00591A90);
    var_a5 = &sp30;
    do {
        var_a7 = 0;
loop_2:
        temp_v1 = var_a6 + var_a7;
        temp_a3 = M2C_FIELD(temp_v1, u8 *, 0x27);
        temp_a4 = var_a5 + var_a7;
        temp_a2 = M2C_FIELD(temp_v1, u8 *, 0x28);
        var_a7 += 5;
        M2C_FIELD(temp_a4, u8 *, 4) = temp_a3;
        M2C_FIELD(temp_a4, u8 *, 5) = temp_a2;
        M2C_FIELD(temp_a4, u8 *, 6) = (u8) M2C_FIELD(temp_v1, u8 *, 0x29);
        M2C_FIELD(temp_a4, u8 *, 7) = (u8) M2C_FIELD(temp_v1, u8 *, 0x2A);
        M2C_FIELD(temp_a4, u8 *, 8) = (u8) M2C_FIELD(temp_v1, u8 *, 0x2B);
        if (var_a7 < 6) {
            goto loop_2;
        }
        temp_v1_2 = var_a5 + var_a7;
        temp_a0 = M2C_FIELD((var_a6 + var_a7), u8 *, 0x27);
        var_t0 += 1;
        var_a6 += 0x8B;
        var_a5 += 0xB;
        M2C_FIELD(temp_v1_2, u8 *, 4) = temp_a0;
    } while (var_t0 < 2);
    if (arg1 & 1) {
        sp33 = 1;
    }
    func_00844D40((s64) (arg0 << 0x30) >> 0x30, arg1, &sp30, 0x1A, temp_a4, var_a5, var_a6, var_a7);
    return 0;
}

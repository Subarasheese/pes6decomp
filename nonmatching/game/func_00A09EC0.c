/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
extern char D_0058E7F0[];

s32 func_00A09EC0(void *arg0) {
    M2C_UNK *var_a5;
    s32 temp_s0;
    s32 var_a4;
    u64 temp_v0;
    u64 temp_v1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_s0 >= 0x240000) {
        return 0;
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x1001) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) < (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
        if (temp_s0 >= 0x90001) {
            return 0;
        }
        goto block_8;
    }
block_8:
    temp_v1 = (u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
    if ((temp_v1 != 0xB) && (temp_v1 != 2) && (temp_v1 != 1) && (temp_v1 != 0)) {
        return 0;
    }
    var_a4 = 0;
    var_a5 = ((void *)D_0058E7F0);
loop_14:
    if (arg0 != var_a5) {
        if (M2C_FIELD(var_a5, u8 *, 0x16) == 0xFB) {
            return 0;
        }
        temp_v0 = (u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(var_a5, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
        if ((temp_v0 != 0xB) && (temp_v0 != 2) && (temp_v0 != 1) && (temp_v0 != 0)) {
            goto block_29;
        }
        if ((u32) M2C_FIELD(var_a5, u32 *, 0x110) < (u32) M2C_FIELD(arg0, s32 *, 0x110)) {
            return 0;
        }
        goto block_29;
    }
block_29:
    var_a4 += 1;
    var_a5 += 0x240;
    if (var_a4 >= 0x16) {
        if (M2C_FIELD(arg0, u8 *, 0x16) != 0xFB) {
            M2C_FIELD(arg0, u8 *, 0x16) = 0xFBU;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
        }
        return 1;
    }
    goto loop_14;
}

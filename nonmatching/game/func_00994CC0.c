/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00991EB0(M2C_UNK);                         /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern void *D_003E7A08;

void func_00994CC0(void *arg0, s8 arg1, s32 arg2) {
    s8 var_v1;
    u16 temp_v1_2;
    u8 temp_v1;

    if ((arg1 == 2) && (M2C_FIELD(D_003E7A08, u8 *, 8) == M2C_FIELD(arg0, u8 *, 0)) && (func_00991EB0(7) >= 3)) {
        M2C_FIELD(D_003E7A08, s32 *, 0x284) = 0;
        M2C_FIELD(D_003E7A08, s8 *, 0x288) = 0;
        return;
    }
    M2C_FIELD(D_003E7A08, s32 *, 0x284) = 7;
    M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
    M2C_FIELD(D_003E7A08, s8 *, 0x2A4) = arg1;
    M2C_FIELD(D_003E7A08, s32 *, 0x2A8) = arg2;
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0x8C:
    case 0x90:
        var_v1 = 3;
        break;
    default:
        var_v1 = 1;
        break;
    case 0x8A:
    case 0x8F:
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_v1_2 != 0x3D0) && (temp_v1_2 != 0x3C6) && (temp_v1_2 != 0x3C4) && (temp_v1_2 != 0x3D1) && (temp_v1_2 != 0x3C7) && (temp_v1_2 != 0x3C8) && (temp_v1_2 != 0x273) && (temp_v1_2 != 0x26C) && (temp_v1_2 != 0x26D) && (temp_v1_2 != 0x3CF) && (temp_v1_2 != 0x3C5) && (temp_v1_2 != 0x3C3)) {
            var_v1 = 1;
        } else {
            var_v1 = 2;
        }
        break;
    }
    M2C_FIELD(D_003E7A08, s8 *, 0x2A5) = var_v1;
    if ((M2C_FIELD(D_003E7A08, s32 *, 4) == 3) && (M2C_FIELD(D_003E7A08, u8 *, 0x2A) == 2)) {
        M2C_FIELD(D_003E7A08, u8 *, 0x2AE) = (u8) ((M2C_FIELD(D_003E7A08, u8 *, 0x2AE) & ~1) | 1);
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x118)) & 0xFFFF) >= 0x5001) {
        M2C_FIELD(D_003E7A08, u8 *, 0x2AE) = (u8) ((M2C_FIELD(D_003E7A08, u8 *, 0x2AE) & ~2) | 2);
    }
}

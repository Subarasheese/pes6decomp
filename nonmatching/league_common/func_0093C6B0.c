/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710(u8, void *, M2C_UNK);             /* extern */
M2C_UNK func_00226760(M2C_UNK);                     /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0093BCA0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0094C710(M2C_UNK);                     /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern s8 *D_003E7B0C;

s32 func_0093C6B0(void) {
    s32 temp_v1_2;
    s32 var_s0;
    u32 temp_v1;
    u32 var_v0;
    u8 temp_a0;

    temp_v1 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
    if (!(temp_v1 & 0x4000)) {
        if (!(temp_v1 & 0x2000)) {
            var_s0 = 0;
        } else {
            var_s0 = 2;
        }
    } else {
        var_s0 = 1;
    }
    if (func_00236DC0() != 0) {
        if ((var_s0 & 0xFF) == 1) {
            func_0093BCA0(0, 0);
            *D_003E7B0C = 2;
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = 0x1200U;
            temp_a0 = M2C_FIELD(D_003E77B0, u8 *, 0xE);
            M2C_FIELD(D_003E77B0, u8 *, 0xE) = (u8) ((temp_a0 & ~1) | (0 & 1));
            temp_v1_2 = func_00226710(temp_a0, D_003E77B0, 2) & 0xFF;
            switch (temp_v1_2) {                    /* irregular */
            case 0x38:
                func_00226760(0x39);
                break;
            case 0x2C:
                func_00226760(0x2D);
                break;
            case 0x29:
                func_00226760(0x2C);
                break;
            case 0x10:
                func_00226760(0x11);
                break;
            case 0x1:
                func_00226760(0xA);
                break;
            case 0x0:
                func_00226760(9);
                break;
            case 0x7:
                func_00226760(8);
                break;
            case 0x28:
                func_00226760(0x29);
                break;
            case 0x33:
            case 0x32:
            case 0x2F:
                func_00226760(0x38);
                break;
            }
            if (((u64) ((s64) M2C_FIELD(D_003E77B0, u8 *, 0xE) << 0x3E) >> 0x3F) != 1) {
                var_v0 = M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~0x20;
            } else {
                var_v0 = M2C_FIELD(D_003E77B0, u32 *, 0x20) | 0x20;
            }
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = var_v0;
            M2C_FIELD(D_003E77B4, s8 *, 0x16F1) = 0;
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) | 1);
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) | 4);
            func_0094C710(8);
            return 1;
        }
        return 0;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002266C0(void);
u8 *func_009614F0();                                /* extern */
s32 func_00970200(u8, s32, M2C_UNK);                /* extern */
extern void *D_003E77B0;

s32 func_00936200(void) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0;
    u8 *temp_v0;
    u8 temp_s0;
    u8 temp_s2;
    u8 var_v1;

    temp_v0 = func_009614F0();
    if (temp_v0 != NULL) {
        var_s3 = 0;
        var_s2 = 0;
        temp_s0 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
        do {
            if (func_00970200(temp_s0, var_s3 & 0xFF, 1) == 1) {
                var_s2 += 1;
            }
            var_s3 += 1;
        } while (var_s3 < 0x20);
        func_002266C0();
        temp_s0_2 = var_s2 >= 7;
        var_s4 = 0;
        var_s3_2 = 0;
        temp_s2 = M2C_FIELD(D_003E77B0, u8 *, 0x2D);
        do {
            if (func_00970200(temp_s2, var_s4 & 0xFF, 1) == 1) {
                var_s3_2 += 1;
            }
            var_s4 += 1;
        } while (var_s4 < 0x20);
        func_002266C0();
        var_v0 = 1;
        temp_v1 = var_s3_2 >= 7;
        if ((temp_s0_2 == 1) && (temp_v1 == 1)) {
            temp_a2 = 0 & 3;
            *temp_v0 = (*temp_v0 & ~3) | temp_a2;
            var_v1 = (*temp_v0 & ~0xC) | (temp_a2 * 4);
        } else if ((temp_s0_2 == 0) && (temp_v1 == 1)) {
            var_v0 = 0;
            *temp_v0 = (*temp_v0 & ~3) | (1 & 3);
            var_v1 = (*temp_v0 & ~0xC) | ((0 & 3) * 4);
        } else if ((temp_s0_2 == 1) && (temp_v1 == 0)) {
            temp_a2_2 = 1 & 3;
            var_v0 = 0;
            *temp_v0 = (*temp_v0 & ~3) | temp_a2_2;
            var_v1 = (*temp_v0 & ~0xC) | (temp_a2_2 * 4);
        } else {
            var_v0 = 0;
            *temp_v0 = (*temp_v0 & ~3) | 1;
            var_v1 = (*temp_v0 & ~0xC) | 8;
        }
        *temp_v0 = var_v1;
        return var_v0;
    }
    return 1;
}

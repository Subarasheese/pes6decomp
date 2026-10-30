/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern f32 *D_003E74CC;

void func_00207BE0(void *arg0) {
    f32 var_f0;
    s32 var_v1;
    u8 temp_a1_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1;
    void *temp_a2;

    if (M2C_FIELD(arg0, s16 *, 0x34) != 0x7FFF) {
        if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
            if (M2C_FIELD(arg0, u8 *, 0x51) == 0) {
                if ((M2C_FIELD(arg0, f32 *, 0x38) < (M2C_FIELD(arg0, f32 *, 0x28) / *D_003E74CC)) && (M2C_FIELD(arg0, u8 *, 0x50) == 0)) {
                    goto block_5;
                }
                var_v1 = 0;
            } else {
                var_v1 = 0;
            }
        } else {
            var_v1 = 0;
        }
    } else {
block_5:
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 4);
        if (!(M2C_FIELD(temp_a1, u8 *, 0) & 1)) {
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 1);
            if (temp_v1 != 0) {
                var_f0 = (f32) (temp_v1 * 2);
                goto block_13;
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
        }
    } else {
        temp_a2 = M2C_FIELD(arg0, void **, 4);
        temp_a1_2 = M2C_FIELD(temp_a2, u8 *, 2);
        if (!(M2C_FIELD(arg0, f32 *, 0x38) < (f32) (temp_a1_2 * 2))) {
            temp_v1_2 = M2C_FIELD(temp_a2, u8 *, 1);
            if ((s32) temp_v1_2 < (s32) temp_a1_2) {
                var_f0 = (f32) (temp_v1_2 * 2);
block_13:
                M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
            }
        }
    }
}

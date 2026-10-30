/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
void **func_00B2A420(u8);                           /* extern */
s32 func_00BD8910(void *, void *, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

s32 func_00BD8510(void **arg0, f32 *arg1, f32 *arg2) {
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_v1;
    s32 temp_f0;
    s32 temp_f1;
    s32 var_s0;
    void **temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_a1 = *arg0;
    var_s0 = 0;
    if (M2C_FIELD(temp_a1, u8 *, 0x12) != M2C_FIELD(*temp_v0, u8 *, 0x12)) {
        temp_f1 = (s32) (*arg1 - (*(f32 *)D_00CBCAD8));
        temp_f0 = (s32) (*arg2 - (*(f32 *)D_00CBCADC));
        if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x400000) {
            if (M2C_FIELD(temp_a1, f32 *, 0xE8) <= 0.0f) {
                var_v1 = -4364.5f;
            } else {
                var_v1 = 4364.5f;
            }
            *arg2 = var_v1;
            var_s0 = 1;
        }
        temp_a1_2 = *temp_v0;
        temp_a0 = *arg0;
        if (func_00BD8910(temp_a0, temp_a1_2, M2C_FIELD(temp_a0, f32 *, 0xE0), M2C_FIELD(temp_a0, f32 *, 0xE8), *arg1, *arg2, M2C_FIELD(temp_a1_2, f32 *, 0xE0), M2C_FIELD(temp_a1_2, f32 *, 0xE8), (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC)) != 0) {
            var_s0 = 1;
            *arg2 = -*arg2;
        }
        temp_f1_2 = *arg1;
        if (!(temp_f1_2 <= 13465.0f)) {
            *arg1 = 13465.0f;
            goto block_16;
        }
        if (temp_f1_2 < -13465.0f) {
            *arg1 = -13465.0f;
block_16:
            var_s0 = 1;
        }
        temp_f1_3 = *arg2;
        if (!(temp_f1_3 <= 8729.0f)) {
            *arg2 = 8729.0f;
            goto block_22;
        }
        if (temp_f1_3 < -8729.0f) {
            *arg2 = -8729.0f;
block_22:
            var_s0 = 1;
        }
        return var_s0;
    }
    return 0;
}

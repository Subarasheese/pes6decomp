/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4380(s32);
void func_001DF510(void *arg0, f32 fparg0, f32 fparg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f20;
    f32 var_f21;
    f32 var_f2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void **temp_s1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;

    var_f21 = fparg0;
    var_f20 = fparg1;
    if ((arg0 != NULL) && (temp_s1 = M2C_FIELD(arg0, void ***, 0), (*temp_s1 != NULL))) {
        temp_v0 = func_001F4380(M2C_FIELD(arg0, s32 *, 0x14));
        if (temp_v0 != NULL) {
            temp_a1 = *temp_s1;
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 2);
            if ((s32) temp_v1 >= 0) {
                var_f1 = (f32) temp_v1;
            } else {
                var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
            }
            temp_v1_2 = M2C_FIELD(temp_a1, u8 *, 3);
            var_f2 = var_f1 * M2C_FIELD(temp_v0, f32 *, 8);
            if ((s32) temp_v1_2 >= 0) {
                var_f1_2 = (f32) temp_v1_2;
            } else {
                var_f1_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
            }
            var_f1_3 = var_f1_2 * M2C_FIELD(temp_v0, f32 *, 0xC);
        } else {
            temp_a1_2 = *temp_s1;
            temp_v1_3 = M2C_FIELD(temp_a1_2, u8 *, 2);
            if ((s32) temp_v1_3 >= 0) {
                var_f2 = (f32) temp_v1_3;
            } else {
                var_f2 = 2.0f * (f32) ((temp_v1_3 >> 1) | (temp_v1_3 & 1));
            }
            temp_v1_4 = M2C_FIELD(temp_a1_2, u8 *, 3);
            if ((s32) temp_v1_4 >= 0) {
                var_f1_3 = (f32) temp_v1_4;
            } else {
                var_f1_3 = 2.0f * (f32) ((temp_v1_4 >> 1) | (temp_v1_4 & 1));
            }
        }
        if (var_f21 < var_f2) {
            var_f0 = 3.4028235e38f;
            if (!(var_f21 <= 3.4028235e38f)) {

            } else {
                if (var_f21 < var_f2) {

                } else {
                    var_f2 = var_f21;
                }
                var_f0 = var_f2;
            }
            var_f21 = var_f0;
        }
        if (var_f20 < var_f1_3) {
            var_f0_2 = 3.4028235e38f;
            if (!(var_f20 <= 3.4028235e38f)) {

            } else {
                if (var_f20 < var_f1_3) {

                } else {
                    var_f1_3 = var_f20;
                }
                var_f0_2 = var_f1_3;
            }
            var_f20 = var_f0_2;
        }
        if (M2C_FIELD(arg0, f32 *, 0x24) != var_f21) {
            goto block_27;
        }
        if (M2C_FIELD(arg0, f32 *, 0x28) != var_f20) {
block_27:
            M2C_FIELD(arg0, f32 *, 0x24) = var_f21;
            M2C_FIELD(arg0, f32 *, 0x28) = var_f20;
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 1);
        }
    }
}

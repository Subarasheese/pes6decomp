/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DEC60(void *arg0, void *arg1) {
    f32 var_f1;
    f32 var_f1_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_a3 = *M2C_FIELD(arg0, void ***, 0);
        temp_v1 = M2C_FIELD(temp_a3, u8 *, 2);
        if ((s32) temp_v1 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1 = (f32) temp_v1;
        }
        M2C_FIELD(arg1, s16 *, 0) = (s16) (s32) (var_f1 * M2C_FIELD(arg0, f32 *, 0x34));
        temp_v1_2 = M2C_FIELD(temp_a3, u8 *, 3);
        if ((s32) temp_v1_2 < 0) {
            var_f1_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
        } else {
            var_f1_2 = (f32) temp_v1_2;
        }
        M2C_FIELD(arg1, s16 *, 2) = (s16) (s32) (var_f1_2 * M2C_FIELD(arg0, f32 *, 0x38));
    }
}

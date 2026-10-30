/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A9E40(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg1, void **, 8);
    temp_v0 = M2C_FIELD(arg1, void **, 0);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0);
    temp_f7 = M2C_FIELD(arg0, f32 *, 4);
    temp_f6 = M2C_FIELD(arg0, f32 *, 8);
    temp_f8 = temp_f9 - M2C_FIELD(temp_v1, f32 *, 4);
    temp_f2 = M2C_FIELD(temp_v0, f32 *, 0xC) - M2C_FIELD(temp_v1, f32 *, 0xC);
    temp_f3 = temp_f6 - M2C_FIELD(temp_v1, f32 *, 0xC);
    sp0 = temp_f8;
    sp4 = temp_f7 - M2C_FIELD(temp_v1, f32 *, 8);
    sp8 = temp_f3;
    if (temp_f2 != 0.0f) {
        if (!(temp_f8 < (((M2C_FIELD(temp_v0, f32 *, 4) - M2C_FIELD(temp_v1, f32 *, 4)) / temp_f2) * temp_f3))) {
            temp_v1_2 = M2C_FIELD(arg1, void **, 0xC);
            temp_v0_2 = M2C_FIELD(arg1, void **, 4);
            sp4 = temp_f7 - M2C_FIELD(temp_v1_2, f32 *, 8);
            temp_f3_2 = temp_f6 - M2C_FIELD(temp_v1_2, f32 *, 0xC);
            temp_f2_2 = M2C_FIELD(temp_v0_2, f32 *, 0xC) - M2C_FIELD(temp_v1_2, f32 *, 0xC);
            temp_f4 = temp_f9 - M2C_FIELD(temp_v1_2, f32 *, 4);
            sp0 = temp_f4;
            sp8 = temp_f3_2;
            if (temp_f2_2 != 0.0f) {
                var_v0 = 1;
                if (temp_f4 <= (((M2C_FIELD(temp_v0_2, f32 *, 4) - M2C_FIELD(temp_v1_2, f32 *, 4)) / temp_f2_2) * temp_f3_2)) {
                    var_v0 = 0;
                }
                return var_v0 ^ 1;
            }
        }
        goto block_7;
    }
block_7:
    return 0;
}

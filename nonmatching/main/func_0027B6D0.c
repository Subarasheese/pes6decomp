/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0027B6D0(void *arg0, s32 arg1) {
    f32 temp_f1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;

    temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
    if (M2C_FIELD(temp_a2, s32 *, 4) != 0) {
        M2C_FIELD(temp_a2, f32 *, 8) = (f32) (M2C_FIELD(temp_a2, f32 *, 8) + M2C_FIELD(temp_a2, f32 *, 0xC));
        temp_a2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
        if (M2C_FIELD(temp_a2_2, s8 *, 0x1F) == 0) {
            M2C_FIELD(temp_a2_2, s8 *, 0x1D) = 0;
        } else {
            M2C_FIELD(temp_a2_2, s8 *, 0x1D) = 0;
            temp_a2_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
            M2C_FIELD(temp_a2_3, s8 *, 0x1D) = (s8) (M2C_FIELD(temp_a2_3, s8 *, 0x1D) | 0x40);
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4), s8 *, 0x1C) = 0;
        if (arg1 == 1) {
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
            if (!(M2C_FIELD(temp_a0, f32 *, 8) < M2C_FIELD(temp_a0, f32 *, 0x10))) {
                M2C_FIELD(temp_a0, f32 *, 8) = 0.0f;
            }
        } else {
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4);
            temp_f1 = M2C_FIELD(temp_a0_2, f32 *, 0x10);
            if (!(M2C_FIELD(temp_a0_2, f32 *, 8) < temp_f1)) {
                M2C_FIELD(temp_a0_2, f32 *, 8) = temp_f1;
            }
        }
    }
}

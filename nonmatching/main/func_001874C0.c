/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern void *D_00520008;

s32 func_001874C0(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(D_00520008, void **, 0x10);
    if (M2C_FIELD(temp_v1, s16 *, 0) == 0) {
        return 0;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    if (!(temp_f1 < (f32) M2C_FIELD(temp_v1, s16 *, 2)) && (temp_f1 <= (f32) M2C_FIELD(temp_v1, s16 *, 6))) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 8);
        if (!(temp_f1_2 < (f32) M2C_FIELD(temp_v1, s16 *, 4)) && (temp_f1_2 <= (f32) M2C_FIELD(temp_v1, s16 *, 8))) {
            return 0;
        }
    }
    return 1;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;

void func_00A53E50(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = 2.0f * *D_003E74CC;
    if (!(M2C_FIELD(arg0, f32 *, 0xF4) <= temp_f1)) {
        M2C_FIELD(arg0, f32 *, 0xF4) = temp_f1;
    }
    temp_f1_2 = -2.0f * *D_003E74CC;
    if (M2C_FIELD(arg0, f32 *, 0xF4) < temp_f1_2) {
        M2C_FIELD(arg0, f32 *, 0xF4) = temp_f1_2;
    }
}

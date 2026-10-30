/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;

void func_009F4A40(void *arg0, s32 arg1) {
    f32 var_f3;
    f32 var_f4;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    var_f3 = M2C_FIELD(temp_v1, f32 *, 0x28);
    if (var_f3 == 0.0f) {
        var_f3 = *D_003E74CC;
    }
    var_f4 = M2C_FIELD(temp_v1, f32 *, 0x38);
loop_2:
    if (!(((f32) arg1 - var_f4) <= (var_f3 / 2.0f))) {
        var_f4 += var_f3;
        goto loop_2;
    }
}

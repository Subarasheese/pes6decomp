/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;
extern char D_00591DF0[];

s32 func_009F4AC0(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 var_f2;
    s32 var_v0;
    s32 var_v1;

    temp_f1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28);
    if (temp_f1 != *D_003E74CC) {
        var_v0 = 0;
        var_f2 = temp_f1 / 2.0f;
loop_2:
        var_f2 += temp_f1;
        var_v1 = 1;
        if (var_f2 <= (f32) arg1) {
            var_v1 = 0;
        }
        if ((var_v1 ^ 1) != 0) {
            var_v0 += 1;
            if (var_v0 >= 0xFF) {
                return var_v0;
            }
            goto loop_2;
        }
        return var_v0;
    }
    return (s32) ((f32) (arg1 * (*(u8 *)D_00591DF0)) / 60.0f);
}

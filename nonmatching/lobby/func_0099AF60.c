/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern void func_001D7F10(void *);
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0099AF60(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, u16 arg4, f32 *arg5, s32 arg6) {
    f32 *var_s3;
    s32 var_s1;
    void *temp_s0;

    var_s3 = arg5;
    temp_s0 = func_0081D850(arg2, 1, 0, 0);
    var_s1 = 0;
    if (arg6 > 0) {
        do {
            var_s1 += 1;
            *var_s3 = func_001D79A0(temp_s0, arg4);
            var_s3 += 4;
        } while (var_s1 < arg6);
    }
    func_001D7F10(temp_s0);
}

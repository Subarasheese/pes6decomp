/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 *func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009E0100(s32, s32, s32, s32);          /* extern */
extern s8 *D_00A7DEE0;

void func_009E0430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_v0;

    if (D_00A7DEE0 == NULL) {
        temp_v0 = func_0099C7E0(1);
        D_00A7DEE0 = temp_v0;
        *temp_v0 = 0;
        func_009E0100(arg0, arg1, arg2, arg3);
    }
}

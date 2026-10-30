/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009F06D0(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_009F0420(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 var_a4;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a3 > 0) {
        temp_a5 = M2C_FIELD(arg0, s32 *, 8);
        temp_a7 = *M2C_FIELD(arg0, s32 **, 0);
        temp_a6 = M2C_FIELD(arg0, s32 *, 4);
        if (arg1 < 0) {
            var_a4 = -1;
        } else {
            var_a4 = ((arg1 & 0xFF) << 8) + (arg2 & 0xFF);
        }
        func_009F06D0(temp_a6, temp_a7, temp_a5, temp_a3, var_a4, temp_a5, temp_a6, temp_a7);
    }
}

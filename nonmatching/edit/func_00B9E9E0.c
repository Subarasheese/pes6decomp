/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern void * func_001F01D0(s32);
M2C_UNK func_001F0590(s32);                         /* extern */
extern char D_00CB52F8[];
extern char D_00CE40E0[];

void func_00B9E9E0(void) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s3;
    s8 *var_s0;

    var_s3 = 0;
    var_s1 = ((void *)D_00CB52F8);
    var_s0 = ((void *)D_00CE40E0);
    do {
        temp_v0 = func_0021DF90(*var_s1);
        if (func_001F01D0(temp_v0) == NULL) {
            func_001F0590(temp_v0);
            *var_s0 = 1;
        } else {
            *var_s0 = 0;
        }
        var_s3 += 1;
        var_s1 += 4;
        var_s0 += 1;
    } while (var_s3 == 0);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
s32 func_00B8F8D0(M2C_UNK);                         /* extern */
M2C_UNK func_00B8F910(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90140(s32, s32);                    /* extern */
s32 func_00BF62A0(s32);                             /* extern */

void func_00B92A70(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00B8F8D0(0);
    temp_v0 = func_00BF62A0(arg1);
    if (func_001E6E10(temp_v0) != NULL) {
        func_00B90140(temp_s1, temp_v0);
        func_00B8F910(arg0, 1);
        return;
    }
    func_00B8F910(arg0, 0);
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001540C0(void);
extern void func_001540D0(void);
s32 func_0014AEE0(s32, s32);                        /* extern */
s32 func_001E6D00(s32);                             /* extern */
s32 func_001E6E10();                                /* extern */

s32 func_001E8FF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (func_001E6E10() != 0) {
        func_001540C0();
        func_001540D0();
        temp_v0 = func_0014AEE0(arg0, arg1);
        if (temp_v0 != 0) {
            var_s2 = func_001E6D00(temp_v0);
        }
        func_001540D0();
    }
    return var_s2;
}

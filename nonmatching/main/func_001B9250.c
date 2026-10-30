/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BB3E0(void *);
extern int func_001BB4D0(int);
s32 func_001B9250(s32 arg0, s32 (*arg1)(s32)) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if ((arg0 != 0) && (arg1 != NULL)) {
        var_s0 = func_001BB4D0(arg0);
        if (var_s0 != 0) {
            do {
                temp_a0 = var_s0;
                var_s0 = func_001BB3E0((void *) var_s0);
                if (arg1(temp_a0) != 0) {
                    var_s0 = 0;
                }
                var_s1 += 1;
            } while (var_s0 != 0);
        }
    }
    return var_s1;
}

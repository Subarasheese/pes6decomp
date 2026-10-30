/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
void func_009F02C0(void **arg0, s32 arg1) {
    s32 var_s1;
    void **var_s0;

    if (arg0 != NULL) {
        var_s1 = 0;
        if (arg1 > 0) {
            var_s0 = arg0;
            do {
                func_002E4570(*var_s0);
                var_s1 += 1;
                *var_s0 = NULL;
                var_s0 += 8;
            } while (var_s1 < arg1);
        }
    }
}

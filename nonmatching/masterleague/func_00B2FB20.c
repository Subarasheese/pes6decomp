/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2FBB0(void);
extern void func_001BC360(void);
extern void func_001BC2B0(void);
void func_00B2FB20(void) {
    s32 var_s1;

    if (func_00B2FBB0() != 0) {
        var_s1 = 0;
        do {
            func_001BC360();
            var_s1 += 1;
        } while (var_s1 < 2);
        func_001BC2B0();
    }
}

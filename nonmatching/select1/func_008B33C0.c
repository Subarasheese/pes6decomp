/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
extern void func_001D4F40(s32);
s32 func_008B33C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001D5A10(arg0);
    func_001D4F40(temp_v0);
    return temp_v0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
M2C_UNK func_001EEAC0(s32, void *);                 /* extern */

void func_00B90140(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        func_001EEAC0(arg0, func_001E6E10(arg1));
    }
}

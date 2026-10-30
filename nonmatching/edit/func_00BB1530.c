/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B91340(s32, u8);
void func_00BB1530(s32 arg0) {
    func_00B91340(arg0, arg0 & 0xFF);
}

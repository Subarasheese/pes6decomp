/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE080(s32, s32, s32, s32, s32, s32);
void func_00843D30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002DE080(arg0, arg2, arg3, arg3, arg1, 0x10);
}

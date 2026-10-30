/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C76570(s32, s32, s32);                   /* extern */
s32 func_00C766B0(s32, s32, s32);                   /* extern */

s32 func_00C76510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return func_00C766B0(arg1, arg2, arg3);
    case 1:
        return func_00C76570(arg1, arg2, arg3);
    default:
        return 0;
    }
}

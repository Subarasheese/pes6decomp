/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ABE20(s32, s32);                        /* extern */
s32 func_009ABFA0(s32, s32);                        /* extern */

s32 func_009ADF20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return func_009ABE20(arg1, arg2);
    case 1:
        return func_009ABFA0(arg1, arg2);
    default:
        return 0;
    }
}

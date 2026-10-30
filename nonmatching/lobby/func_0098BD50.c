/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B610();                                /* extern */
s32 func_0082B6B0();                                /* extern */
s32 func_0082B810();                                /* extern */
s32 func_00832280();                                /* extern */

s32 func_0098BD50(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return func_0082B810();
    case 1:
        return func_0082B610();
    case 2:
        if (func_00832280() == 1) {
            var_v0 = 0;
        } else {
            var_v0 = func_0082B6B0();
        }
        return var_v0;
    case 3:
        return func_0082B610();
    default:
        return 0;
    }
}

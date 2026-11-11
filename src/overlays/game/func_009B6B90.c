/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_009B2870();                                /* extern */
s32 func_00B985A0();                                /* extern */
s32 func_00BC2630();                                /* extern */
s32 func_00BC54E0();                                /* extern */

s32 func_009B6B90(void) {
    s32 r = 1;
    s32 t;
    if (func_00BC54E0() == 0) {
        if (func_00B985A0() == 0 && func_00BC2630() == 0) {
            t = func_009B2870() > 0;
            if (t == 0) r = 0;
        }
    }
    return r;
}

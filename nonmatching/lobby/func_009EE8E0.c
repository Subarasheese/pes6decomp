/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, s32, s32);               /* extern */
s32 func_009F9480(s32);                             /* extern */

s32 func_009EE8E0(s32 arg0, s32 arg1, s32 arg2) {
    sprintf(arg0, arg1, func_009F9480(arg2));
    return arg0;
}

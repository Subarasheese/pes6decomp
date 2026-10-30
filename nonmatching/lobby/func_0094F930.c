/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00954560(s32);                             /* extern */
extern char D_008A6490[];

s32 func_0094F930(void) {
    if (func_0082C2A0() == 0) {
        return 0;
    }
    return func_00954560((*(s32 *)D_008A6490));
}

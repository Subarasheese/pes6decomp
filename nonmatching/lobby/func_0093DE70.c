/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00952870(s32);                             /* extern */

s64 func_0093DE70(s32 arg0) {
    return (s64) (func_00952870(arg0 & 0xFFFF) << 0x30) >> 0x30;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s64 func_002928B0(s32);                             /* extern */

s64 func_0030DA70(s32 arg0) {
    return (s64) (func_002928B0(arg0 & 0xFF) << 0x30) >> 0x30;
}

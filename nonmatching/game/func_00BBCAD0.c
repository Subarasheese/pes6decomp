/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002A96B0(s32);
s32 func_00BBCAD0(s32 arg0) {
    return (M2C_FIELD(func_002A96B0(arg0), s32 *, 0xC) & 0x20) != 0;
}

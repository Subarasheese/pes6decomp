/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008D1F30(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD((arg1 + arg0), s8 *, 0xD) = arg2;
}

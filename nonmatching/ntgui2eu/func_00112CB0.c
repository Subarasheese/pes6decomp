/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00112CB0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 4) {
        M2C_FIELD((arg1 + arg0), s8 *, 0x80) = (s8) (arg2 & 0xFF);
    }
}

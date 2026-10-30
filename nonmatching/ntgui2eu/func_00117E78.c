/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00117E78(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xF8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    if (arg1 >= 0x10) {
        M2C_FIELD(arg0, s32 *, 0xF4) = 0xF;
    }
    if (M2C_FIELD(arg0, s32 *, 0xF8) >= 8) {
        M2C_FIELD(arg0, s32 *, 0xF8) = 7;
    }
}

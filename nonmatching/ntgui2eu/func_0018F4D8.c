/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

void func_0018F4D8(s32 arg0, s32 arg1, s32 arg2) {
    s64 *temp_a0;

    temp_a0 = M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), s64 **, 0xC);
    *temp_a0 = (*temp_a0 & 0xFFFF00DF) | (((arg2 & 1) << 5) | ((arg1 & 0xFF) << 8));
}

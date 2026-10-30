/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B1918[];

void func_00105998(s32 arg0) {
    s32 temp_a0;

    temp_a0 = (arg0 < 0) ? 0 : arg0;
    (*(s32 *)D_011B1918) = (temp_a0 >= 0x65) ? 0x64 : temp_a0;
}

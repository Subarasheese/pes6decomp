/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD8EC[];

void func_00C103D0(s32 arg0) {
    s16 *temp_a0;

    temp_a0 = ((void *)D_00CBD8EC) + ((arg0 & 0xFF) * 0x2F4);
    *temp_a0 += 1;
}

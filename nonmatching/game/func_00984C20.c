/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591EF2[];

void func_00984C20(s32 arg0, s32 arg1) {
    u8 *temp_a0;

    temp_a0 = ((void *)D_00591EF2) + (arg0 & 0xFF);
    *temp_a0 &= ((arg1 & 0xFF) ^ 0xFF) & 0xFF;
}

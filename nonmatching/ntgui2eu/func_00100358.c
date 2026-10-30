/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_00602004;
extern void *D_00602008;
extern char D_00602700[];

void func_00100358(void) {
    s32 temp_v1;

    temp_v1 = D_00602004 ^ 1;
    D_00602004 = temp_v1;
    D_00602008 = ((void *)D_00602700) + (temp_v1 * 0x300000);
}

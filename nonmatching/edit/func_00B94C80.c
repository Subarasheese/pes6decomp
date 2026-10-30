/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
extern char D_00CE35B0[];

void *func_00B94C80(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 < 0x1388) {
        return (*(s32 *)D_00CE35B0) + 0x7CF0 + (temp_a0 * 0x7C) + 0x34;
    }
    return Pes6Player_GetParams(0);
}

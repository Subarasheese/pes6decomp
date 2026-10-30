/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065DE40[];

s32 func_0064EDA0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_a2;

    temp_a2 = (arg2 * 4) + (((void *)D_0065DE40) + (arg0 * 0x10));
    *temp_a2 |= 1 << arg1;
    return 0;
}

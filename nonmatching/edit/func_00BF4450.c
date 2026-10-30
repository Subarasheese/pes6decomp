/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

void *func_00BF4450(s32 arg0) {
    void *temp_a0;

    temp_a0 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    return temp_a0 + (M2C_FIELD(temp_a0, s32 *, 0x1444) * 0x88);
}

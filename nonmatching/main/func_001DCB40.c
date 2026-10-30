/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052ABFC[];

void func_001DCB40(s32 arg0) {
    u8 *temp_a1;
    u8 temp_a0;

    temp_a1 = ((void *)D_0052ABFC) + (arg0 - 0x6784);
    temp_a0 = *temp_a1;
    if (temp_a0 & 1) {
        *temp_a1 = temp_a0 & 0xFE;
    }
}

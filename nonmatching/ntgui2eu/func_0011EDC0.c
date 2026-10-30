/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3700[];
extern char D_005B3704[];

void func_0011EDC0(s32 arg0) {
    (*(s32 *)D_005B3700) = 0;
    M2C_FIELD(((void *)D_005B3704), s32 *, 0) = 0;
    if (!(arg0 & 1)) {
        M2C_FIELD(((void *)D_005B3704), s32 *, 0) = 4;
    }
    if (arg0 & 0x10) {
        M2C_FIELD(((void *)D_005B3704), s32 *, 0x3704) = (s32) (M2C_FIELD(((void *)D_005B3704), s32 *, 0x3704) | 2);
    }
}

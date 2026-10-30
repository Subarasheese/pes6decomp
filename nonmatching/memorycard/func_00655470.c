/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EA44[];
extern char D_0065EE84[];

void func_00655470(s32 arg0) {
    M2C_FIELD(((void *)D_0065EA44), s32 *, 0x10) = 2;
    M2C_FIELD(((void *)D_0065EE84), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_0065EA44), s32 *, 0x18) = arg0;
    M2C_FIELD(((void *)D_0065EE84), s8 *, 0xB8) = 1;
    M2C_FIELD(((void *)D_0065EA44), s32 *, 0x1C) = 1;
    M2C_FIELD(((void *)D_0065EA44), s32 *, 0x14) = 0;
}

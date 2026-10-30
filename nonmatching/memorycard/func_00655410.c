/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EA44[];
extern char D_0065EE84[];

void func_00655410(s32 arg0, s32 arg1) {
    void *temp_a1;

    if ((arg1 >= 0) && (arg1 < 8)) {
        temp_a1 = (arg1 * 0x10) + ((void *)D_0065EA44);
        M2C_FIELD(((arg1 * 4) + ((void *)D_0065EE84)), s32 *, 0xC) = 0;
        M2C_FIELD(temp_a1, s32 *, 0x20) = 3;
        M2C_FIELD(temp_a1, s32 *, 0x24) = arg0;
        M2C_FIELD(temp_a1, s32 *, 0x28) = 0;
        M2C_FIELD(((void *)D_0065EE84), s8 *, 0xB8) = 1;
        M2C_FIELD(temp_a1, s32 *, 0x2C) = 1;
    }
}

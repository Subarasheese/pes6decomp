/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EC94[];
extern char D_0065EDC0[];

void func_00655D20(s32 arg0, s32 arg1) {
    void *temp_a1;

    if ((arg1 >= 0) && (arg1 < 0xA)) {
        temp_a1 = (arg1 * 0xC) + ((void *)D_0065EC94);
        M2C_FIELD(((arg1 * 4) + ((void *)D_0065EDC0)), s32 *, 0x2C) = 0;
        M2C_FIELD(temp_a1, s32 *, 0xA0) = 2;
        M2C_FIELD(temp_a1, s32 *, 0xA4) = 0;
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB8) = 1;
        M2C_FIELD(temp_a1, s32 *, 0xA8) = arg0;
    }
}

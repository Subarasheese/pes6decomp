/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1E80[];

void func_00855260(s64 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    temp_v1 = ((void *)D_008B1E80) + ((((s64) (arg0 << 0x30) >> 0x30) - 1) * 0x18);
    M2C_FIELD(temp_v1, s32 *, 0x44) = arg1;
    M2C_FIELD(temp_v1, s32 *, 0x4C) = arg2;
}

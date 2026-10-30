/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D2B0[];

void func_002600A0(s32 arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = ((void *)D_0058D2B0) + (arg0 * 0x10);
    M2C_FIELD(temp_v1, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_v1, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

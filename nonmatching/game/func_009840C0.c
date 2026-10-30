/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00907CC0(void *, s32);                     /* extern */
M2C_UNK func_00908140(void *, s32);                 /* extern */
M2C_UNK func_0096BF00(u8);                          /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */

void func_009840C0(void *arg0, f32 fparg0, f32 fparg1) {
    s32 temp_v0;
    u8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
    if (temp_a1 == 7) {
        M2C_FIELD(arg0, f32 *, 0x6C) = fparg0;
        M2C_FIELD(arg0, f32 *, 0x70) = fparg1;
        func_0096BF00(temp_a1);
        temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(arg0, f32 *, 0x6C), (s32) M2C_FIELD(arg0, f32 *, 0x70));
        func_00908140(arg0, temp_v0);
        if (func_00907CC0(arg0, temp_v0) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x800);
        }
    }
}

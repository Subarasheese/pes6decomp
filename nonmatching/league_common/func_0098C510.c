/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002332F0(void);
s32 func_00228F20(u8);                              /* extern */
s32 func_00236680(s32);                             /* extern */
s32 func_00236DC0();                                /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;

void func_0098C510(void) {
    s32 var_s0;
    s32 var_v1;

    if (func_00236DC0() != 0) {
        func_002332F0();
        var_s0 = 0;
        if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363) > 0) {
loop_2:
            if ((func_00228F20(M2C_FIELD((D_003E77B4 + (func_00236680(var_s0 & 0xFF) & 0xFF)), u8 *, 0x71)) & 0xFF) <= 0) {
                var_s0 += 1;
                if (var_s0 >= (s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363)) {
                    goto block_8;
                }
                goto loop_2;
            }
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x2000);
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000;
        } else {
block_8:
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x2000);
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8;
        }
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = var_v1;
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00230380(void);
extern void func_002332F0(void);
s32 func_00228F20(u8);                              /* extern */
s32 func_00230410();                                /* extern */
s32 func_00236680(s32);                             /* extern */
s32 func_00236DC0();                                /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;
extern char D_00591C09[];

void func_0098C5E0(void) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_v1;

    if ((func_00236DC0() != 0) && (func_00230410() != 1) && ((*(u8 *)D_00591C09) != 0xE) && (func_00230380() != 1)) {
        func_002332F0();
        var_s0 = 0;
        if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363) > 0) {
loop_5:
            temp_s1 = func_00236680(var_s0 & 0xFF) & 0xFF;
            if ((func_00228F20(M2C_FIELD((D_003E77B4 + temp_s1), u8 *, 0x71)) & 0xFF) <= 0) {
                if ((func_00228F20(M2C_FIELD((D_003E77B4 + temp_s1), u8 *, 0x72)) & 0xFF) <= 0) {
                    var_s0 += 1;
                    if (var_s0 >= (s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363)) {
                        goto block_12;
                    }
                    goto loop_5;
                }
                goto block_10;
            }
block_10:
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000;
        } else {
block_12:
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x2000);
            var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8;
        }
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = var_v1;
    }
}

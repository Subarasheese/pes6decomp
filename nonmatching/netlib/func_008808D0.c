/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE450(void);
extern u32 func_00309440(s32);
extern s32 func_001FC920(s32);
s32 func_00817B70(s32);                             /* extern */
s32 func_00818740();                                /* extern */
s32 func_00825610();                                /* extern */
s32 func_0099D7E0();                                /* extern */
extern char D_008B2450[];

s32 func_008808D0(void) {
    s32 temp_a0;
    void *temp_v0;

    if ((*(u8 *)D_008B2450) != 1) {
        if (func_00309440(0) != 3) {
            goto block_20;
        }
        if (func_00825610() == 6) {
            goto block_20;
        }
        if (func_001BE450() == 1) {
            temp_v0 = func_001FC920(9);
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 8);
            if (temp_a0 == 0x15) {
                if (M2C_FIELD(temp_v0, u8 *, 0xC) != 2) {
                    return 0;
                }
                if ((func_00817B70(temp_a0) != 1) && (func_00818740() != 1)) {
                    if (func_0099D7E0() != 1) {
                        return 1;
                    }
                    goto block_20;
                }
                goto block_20;
            }
            goto block_20;
        }
        goto block_20;
    }
block_20:
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00341CC0(s32, s32, s32);
extern s32 func_00341C90(u16, u16, u16);
s32 func_00340680(M2C_UNK, f32, M2C_UNK, f32);      /* extern */

s32 func_00312E70(void *arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    if (func_00340680(5, fabsf(fparg0), 0x45C0C800, fparg1) != 0) {
        if (M2C_FIELD(arg0, u8 *, 3) == 0) {
            if (!((M2C_FIELD(arg0, f32 *, 0x3C) - fparg1) <= 2560.0f) && (func_00341CC0(arg1, 0x2800, 0x5800) != 0)) {
                M2C_FIELD(arg0, s8 *, 7) = 1;
                return 1;
            }
            if (!((fparg1 - M2C_FIELD(arg0, f32 *, 0x44)) <= 2560.0f) && (func_00341CC0(arg1, 0xA800, 0xD800) != 0)) {
                M2C_FIELD(arg0, s8 *, 7) = 1;
                return 1;
            }
            if (func_00341C90((u16) arg1, 0x1800U, 0xE800U) != 0) {
                if ((fparg0 - M2C_FIELD(arg0, f32 *, 0x28)) < 2560.0f) {
                    if (!((fparg0 - M2C_FIELD(arg0, f32 *, 0x14)) < 2560.0f)) {
                        M2C_FIELD(arg0, s32 *, 0x48) = 1;
                        return 1;
                    }
                    goto block_21;
                }
                M2C_FIELD(arg0, s32 *, 0x48) = 2;
                return 1;
            }
            goto block_21;
        }
        return 1;
    }
block_21:
    return 0;
}

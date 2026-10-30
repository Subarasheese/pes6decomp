/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00989410(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00986EB0(u8, s32);                     /* extern */
M2C_UNK func_00987140(s32);                         /* extern */

s32 func_00988D80(void) {
    s32 temp_v0_2;
    s32 var_s1;
    u32 temp_v0;

    temp_v0 = func_00989410();
    if (temp_v0 == 0) {
        goto block_16;
    }
    if (func_0095ED20() != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x45E) == 0) {
            if (M2C_FIELD(temp_v0, s16 *, 0x460) == 0) {
                temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x488);
                var_s1 = 1;
                if (temp_v0_2 == 1) {
                    var_s1 = 0;
                    goto block_14;
                }
                if (temp_v0_2 == 0) {
block_14:
                    if ((s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x472) + ((var_s1 * 4) + temp_v0)), u8 *, 0x46A) > 0) {
                        M2C_FIELD(temp_v0, s32 *, 0x488) = var_s1;
                        func_00987140(var_s1 & 0xFF);
                        func_00986EB0(M2C_FIELD(temp_v0, u8 *, 0x472), var_s1);
                        func_0026E840(0x8400F803);
                    }
                }
                goto block_16;
            }
            return 0;
        }
        goto block_16;
    }
block_16:
    return 0;
}

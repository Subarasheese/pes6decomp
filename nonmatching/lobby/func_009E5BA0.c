/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E3B20(s32, M2C_UNK);                /* extern */
M2C_UNK func_009E3BA0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_009E5CD0(u8);                          /* extern */
extern void *D_00A7DF18;

u8 func_009E5BA0(s8 arg0) {
    M2C_UNK var_s4;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s5;
    s8 var_a0;

    var_a0 = arg0;
    if (D_00A7DF18 != NULL) {
        if ((var_a0 & 0xFF) >= 2) {
            var_a0 = 1;
        }
        M2C_FIELD(D_00A7DF18, s8 *, 0x135) = var_a0;
        var_s5 = 0;
        temp_v1 = var_a0 & 0xFF;
        temp_s3 = temp_v1 + 1;
        do {
            if ((var_s5 >= (temp_v1 * 0xA)) && (var_s5 < (temp_s3 * 0xA))) {
                var_s4 = 1;
            } else {
                var_s4 = 0;
            }
            temp_s0 = var_s5 * 4;
            func_009E3B20(M2C_FIELD((D_00A7DF18 + temp_s0), s32 *, 0x1C), var_s4);
            func_009E3B20(M2C_FIELD((D_00A7DF18 + temp_s0), s32 *, 0x50), var_s4);
            var_s5 += 1;
        } while (var_s5 < 0xD);
        func_009E3BA0(M2C_FIELD(D_00A7DF18, s32 *, 0x84), temp_s3, 2);
        func_009E5CD0(M2C_FIELD(D_00A7DF18, u8 *, 0x134));
        return M2C_FIELD(D_00A7DF18, u8 *, 0x134);
    }
    return 0U;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B278C0(u8);                          /* extern */
M2C_UNK func_00B27AC0(u8);                          /* extern */

s32 func_00B28460(void) {
    s32 var_a1;
    s32 var_a3;
    u32 temp_v0;
    u32 var_a2;
    u8 temp_a0;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        if ((M2C_FIELD(temp_v0, u8 *, 0x18C) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x214) == 1)) {
            var_a3 = 0;
            var_a2 = temp_v0;
            var_a1 = 0;
            do {
                var_a3 += 1;
                M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0) + var_a1), u8 *, 0x60) = (u8) M2C_FIELD(var_a2, u8 *, 0x19A);
                M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0) + var_a1), u8 *, 0x61) = (u8) M2C_FIELD(var_a2, u8 *, 0x19B);
                M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0) + var_a1), u8 *, 0x62) = (u8) M2C_FIELD(var_a2, u8 *, 0x19C);
                temp_a0 = M2C_FIELD(var_a2, u8 *, 0x19D);
                var_a2 += 4;
                M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0) + var_a1), u8 *, 0x63) = temp_a0;
                var_a1 += 4;
            } while (var_a3 < 0x1E);
            M2C_FIELD(temp_v0, s32 *, 0x214) = 3;
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x18C) = 0U;
            M2C_FIELD(temp_v0, s32 *, 0x214) = 1;
            func_00B27AC0(M2C_FIELD(temp_v0, u8 *, 0x18C));
            func_00B278C0(M2C_FIELD(temp_v0, u8 *, 0x18C));
        }
        func_0026E840(0x84008401);
    }
    return 0;
}

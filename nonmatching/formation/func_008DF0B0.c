/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D80(u8);                              /* extern */
s32 func_00292F00(u8);                              /* extern */
M2C_UNK func_008B3FD0(void *);                      /* extern */
s32 func_008BEBD0(s32, s32, s32 *);                 /* extern */
s32 func_008D4F10(void *);                          /* extern */
s32 func_008D4F40(void *);                          /* extern */
M2C_UNK func_008D4F50(void *, s32 *);               /* extern */
M2C_UNK func_008E6650(void *, void *);              /* extern */

s32 func_008DF0B0(void *arg0, s32 arg1) {
    s32 sp40;
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v1;

    if (arg1 <= 0) {
        goto block_21;
    }
    if (arg1 < 0xB) {
        var_a1 = arg0 + 0x208;
        var_a0 = &sp40;
        var_v1 = 0x241;
        do {
            var_v1 -= 1;
            *var_a0 = *var_a1;
            var_a1 += 4;
            var_a0 += 4;
        } while (var_v1 > 0);
        func_008D4F50(arg0 + 0x1EF4, &sp40);
        if (func_008BEBD0(func_00292D80(M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0x9F2)), arg1 & 0xFF, &sp40) != 0) {
            temp_s0 = func_008D4F40(arg0 + 0x1EF4);
            if (temp_s0 == (func_00292F00(M2C_FIELD((arg1 + ((M2C_FIELD(arg0, u8 *, 0x946) * 0x52) + arg0)), u8 *, 0x9F2)) & 0xFF)) {
                func_008D4F50(arg0 + 0x1EF4, arg0 + 0x208);
                func_008E6650(arg0 + 0x129C, arg0 + 0x208);
                func_008B3FD0(arg0);
                goto block_21;
            }
            if (func_008D4F10(arg0 + 0x1EF4) == 0) {
                var_v0 = 0;
            } else {
                var_v0 = 2;
            }
            return var_v0;
        }
        return 2;
    }
block_21:
    return 1;
}

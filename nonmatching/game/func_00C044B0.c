/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00297DF0(u8 *);                        /* extern */
s32 func_00B2A420(u8);                              /* extern */
M2C_UNK func_00B2ACF0(s32);                         /* extern */
extern char D_00C9EFC0[];

void func_00C044B0(void) {
    M2C_UNK (*temp_v1)(M2C_UNK *);
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00C9EFC0);
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 8);
        switch (temp_a0) {                          /* irregular */
        case -1:
            break;
        case 0:
            func_00B2ACF0(func_00B2A420(*M2C_FIELD(var_s0, u8 **, 0xC)));
        default:
block_8:
            temp_v1 = M2C_FIELD(var_s0, M2C_UNK (**)(M2C_UNK *), 0x24);
            if (temp_v1 != NULL) {
                temp_v1(var_s0);
            }
            break;
        case 1:
            func_00297DF0(M2C_FIELD(var_s0, u8 **, 0xC));
            goto block_8;
        }
        var_s1 += 1;
        var_s0 += 0x28;
    } while (var_s1 < 5);
}

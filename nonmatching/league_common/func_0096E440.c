/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00221340(s32, M2C_UNK, M2C_UNK);           /* extern */
extern void *D_003E77BC;
extern char D_00591C09[];
extern char D_009C0190[];

u8 func_0096E440(s32 arg0) {
    s32 temp_s0;
    u16 *var_s1;

    if ((*(u8 *)D_00591C09) != 4) {
        goto block_17;
    }
    temp_s0 = arg0 & 0xFFFF;
    if (temp_s0 == 0) {
        goto block_17;
    }
    if ((*(u16 *)D_009C0190) != 0) {
        var_s1 = ((void *)D_009C0190);
loop_6:
        if ((temp_s0 == *var_s1) && ((func_00221340(arg0, 3, 1) & 0xFFFF) == 0xFFFF)) {
            return 0U;
        }
        var_s1 += 6;
        if (*var_s1 == 0) {
            goto block_10;
        }
        goto loop_6;
    }
block_10:
    if (M2C_FIELD(D_003E77BC, u8 *, 0x33F41) != 0) {
        if ((temp_s0 >= 0xFA0) && (temp_s0 < 0x113E)) {
            return M2C_FIELD((temp_s0 + D_003E77BC), u8 *, 0x32FA2);
        }
        goto block_17;
    }
block_17:
    return 1U;
}

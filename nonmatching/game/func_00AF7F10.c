/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0027A600(u8 *, s32);                   /* extern */
extern char D_0058E7F0[];
extern char D_00591F24[];

void func_00AF7F10(s32 arg0, s32 arg1) {
    s32 var_s1;
    u8 *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        if (arg0 != var_s0) {
            if ((*(u8 *)D_00591F24) != 2) {
                if ((u32) M2C_FIELD((arg0 + (*var_s0 * 4)), u32 *, 0x158) < 0x02400001U) {
                    goto block_5;
                }
            } else {
block_5:
                func_0027A600(var_s0, arg1 & 0xFF);
            }
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
}

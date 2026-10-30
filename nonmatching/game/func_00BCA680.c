/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_00CBD4F0[];

void func_00BCA680(s32 arg0, s8 arg1) {
    M2C_UNK *var_a4;
    s32 var_a3;
    s32 var_a5;
    u8 *temp_a2;
    u8 *var_a4_2;

    var_a5 = 0;
    var_a4 = ((void *)D_0058E7F0);
loop_1:
    if (M2C_FIELD(var_a4, u8 *, 0x12) == (arg0 & 0xFF)) {
        if (M2C_FIELD(var_a4, u8 *, 0x11) != (arg1 & 0xFF)) {
            goto block_4;
        }
    } else {
block_4:
        var_a5 += 1;
        var_a4 += 0x240;
        if (var_a5 >= 0x16) {
            var_a3 = 0;
            temp_a2 = ((void *)D_00CBD4F0) + ((arg0 & 0xFF) * 0x12);
            var_a4_2 = temp_a2;
loop_6:
            if (*var_a4_2 != 0xFF) {
                var_a3 += 1;
                var_a4_2 += 1;
                if (var_a3 >= 0x12) {
                    return;
                }
                goto loop_6;
            }
            *(temp_a2 + var_a3) = arg1;
            return;
        }
        goto loop_1;
    }
}

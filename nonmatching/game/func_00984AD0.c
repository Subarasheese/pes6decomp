/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];
extern char D_00CB52A0[];

void func_00984AD0(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s32 var_a1;
    s32 var_a4;
    s32 var_a5;
    u8 temp_a1;
    void *temp_a5;

    var_a4 = 0;
    var_a3 = ((void *)D_00CB52A0);
    var_a2 = ((void *)D_00591E00);
    do {
        var_a5 = 0;
loop_2:
        if (M2C_FIELD((var_a3 + var_a5), u8 *, 0x1F) == 9) {
            temp_a1 = M2C_FIELD(var_a2, u8 *, 0xF0);
            if (temp_a1 != 0) {
                M2C_FIELD(var_a2, u8 *, 0xF0) = (u8) (temp_a1 - 1);
            }
        }
        var_a5 += 1;
        if (var_a5 < 4) {
            goto loop_2;
        }
        if (M2C_FIELD(var_a2, u8 *, 0xF0) != 0) {
            if (M2C_FIELD(var_a2, u8 *, 0x67) == 0) {
                goto block_10;
            }
        } else {
block_10:
            temp_a5 = ((void *)D_00591E00) + (var_a4 & 0xFF);
            var_a1 = 0;
            do {
                if (M2C_FIELD((var_a3 + var_a1), u8 *, 0x1F) == 9) {
                    switch (var_a1) {               /* irregular */
                    case 0:
                        M2C_FIELD(temp_a5, u8 *, 0xF2) = (u8) (M2C_FIELD(temp_a5, u8 *, 0xF2) & 0xFE);
                        break;
                    case 1:
                        M2C_FIELD(temp_a5, u8 *, 0xF2) = (u8) (M2C_FIELD(temp_a5, u8 *, 0xF2) & 0xFD);
                        break;
                    case 2:
                        M2C_FIELD(temp_a5, u8 *, 0xF2) = (u8) (M2C_FIELD(temp_a5, u8 *, 0xF2) & 0xFB);
                        break;
                    case 3:
                        M2C_FIELD(temp_a5, u8 *, 0xF2) = (u8) (M2C_FIELD(temp_a5, u8 *, 0xF2) & 0xF7);
                        break;
                    }
                }
                var_a1 += 1;
            } while (var_a1 < 4);
        }
        var_a4 += 1;
        var_a3 += 4;
        var_a2 += 1;
    } while (var_a4 < 2);
}

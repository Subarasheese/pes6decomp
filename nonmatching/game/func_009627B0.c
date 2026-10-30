/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BDB8B0(M2C_UNK *);                       /* extern */
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_005A2020[];

u8 func_009627B0(s32 arg0, s32 arg1) {
    M2C_UNK *var_s2;
    s32 var_a2;
    s32 var_s1;
    void *temp_a0;
    void *var_a1;

    if (!(arg0 & 0xFF)) {
        var_s2 = ((void *)D_0058E7F0);
    } else {
        var_s2 = ((void *)D_005900B0);
    }
    var_s1 = 0;
loop_4:
    if (func_00BDB8B0(var_s2) != 0) {
        var_a2 = 0;
        temp_a0 = ((void *)D_005A2020) + (M2C_FIELD(var_s2, u8 *, 0x12) * 0x168);
        var_a1 = temp_a0;
loop_6:
        if (M2C_FIELD(var_s2, u8 *, 0x11) == M2C_FIELD(var_a1, u16 *, 0x154)) {
            if ((arg1 & 0xFF) == M2C_FIELD((temp_a0 + var_a2), u8 *, 0x15A)) {
                return M2C_FIELD(var_s2, u8 *, 0);
            }
            goto block_10;
        }
block_10:
        var_a2 += 1;
        var_a1 += 2;
        if (var_a2 >= 3) {
            goto block_12;
        }
        goto loop_6;
    }
block_12:
    var_s1 += 1;
    var_s2 += 0x240;
    if (var_s1 >= 0xB) {
        return 0U;
    }
    goto loop_4;
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E3BA1[];
extern char D_005E3BA8[];

s64 func_002CBBE0(u32 arg0) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s32 temp_a1;
    s64 var_a4;
    s64 var_v0;
    u32 temp_v1;

    var_v0 = -1;
    var_a4 = 1;
    var_a3 = ((void *)D_005E3BA8);
    var_a2 = ((void *)D_005E3BA1);
loop_1:
    temp_a1 = M2C_FIELD(var_a3, s32 *, 4);
    if (temp_a1 != 0) {
        temp_v1 = M2C_FIELD(var_a3, u32 *, 0);
        if ((arg0 >= temp_v1) && (arg0 < (u32) (temp_v1 + temp_a1))) {
            if (M2C_FIELD(var_a2, s8 *, 0xE0) != 0) {
                return (s64) (var_a4 << 0x38) >> 0x38;
            }
            var_v0 = (s64) (var_a4 << 0x38) >> 0x38;
            goto block_8;
        }
    }
block_8:
    var_a4 += 1;
    var_a3 += 8;
    var_a2 += 1;
    if (var_a4 >= 0x1C) {
        return var_v0;
    }
    goto loop_1;
}

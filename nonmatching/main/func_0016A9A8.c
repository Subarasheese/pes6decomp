/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
s32 func_001C80F0();                                /* extern */
s32 func_001C83D8(s32, M2C_UNK *, s32);             /* extern */
extern char D_003C9358[];
extern char D_0050E584[];

void func_0016A9A8(s32 arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_s1;
    s32 temp_s3;
    s32 temp_s4;
    u32 var_s0;

    if (arg0 == 0) {
        func_0016A550((s32) ((void *)D_003C9358));
        return;
    }
    var_s0 = 0;
    temp_s4 = func_001C80F0();
    var_s1 = ((void *)D_0050E584);
    var_a1 = ((void *)D_0050E584);
loop_5:
    var_s1 += 0x10;
    temp_s3 = var_s0 * 0x10;
    var_s0 += 1;
    if (func_001C83D8(arg0, var_a1, temp_s4) != 0) {
        var_a1 = var_s1;
        if (var_s0 >= 0x20U) {
            return;
        }
        goto loop_5;
    }
    M2C_FIELD((temp_s3 + (((void *)D_0050E584) - 4)), s8 *, 4) = 0;
}

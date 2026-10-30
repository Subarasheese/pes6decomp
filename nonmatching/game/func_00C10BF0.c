/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK *D_003EA7B8;
extern char D_00CBD8E0[];

void func_00C10BF0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    s32 var_s3;

    D_003EA7B8 = ((void *)D_00CBD8E0);
    func_001C48E8(((void *)D_00CBD8E0), 0, 0x5E8);
    var_s3 = 0;
    var_s1 = ((void *)D_00CBD8E0);
    do {
        var_s2 = 0;
        var_s0 = var_s1;
loop_2:
        var_s2 += 1;
        M2C_FIELD(var_s0, f32 *, 0x48) = (f32) (0x80 - (func_00151EA0(0x100) & 0xFFFF));
        var_s0 += 0x28;
        if (var_s2 < 0x12) {
            goto loop_2;
        }
        var_s3 += 1;
        var_s1 += 0x2F4;
    } while (var_s3 < 2);
}

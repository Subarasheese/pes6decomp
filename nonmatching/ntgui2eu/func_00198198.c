/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_011FEE58;
extern char D_011FEF00[];

s32 func_00198198(void) {
    M2C_UNK *var_v0;
    s32 var_a1;
    u8 *temp_a0;

    var_a1 = 0;
    M2C_FIELD(D_011FEE58, s32 *, 0) = (s32) M2C_FIELD(((void *)D_011FEF00), u8 *, 0);
    M2C_FIELD(D_011FEE58, s32 *, 4) = (s32) M2C_FIELD(((void *)D_011FEF00), u8 *, 1);
    if (M2C_FIELD(((void *)D_011FEF00), u8 *, 0) != 0) {
        var_v0 = ((void *)D_011FEF00);
        do {
            temp_a0 = D_011FEE58 + 8 + var_a1;
            var_a1 += 1;
            *temp_a0 = M2C_FIELD(var_v0, u8 *, 2);
            var_v0 = var_a1 + ((void *)D_011FEF00);
        } while (var_a1 < M2C_FIELD(D_011FEE58, s32 *, 0));
    }
    return 0;
}

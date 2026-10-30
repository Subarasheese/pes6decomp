/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_009B3480(M2C_UNK *, f32, f32);             /* extern */
extern void *Pes6Ball_Current;
extern char D_0058E7F0[];

void func_00A969A0(void) {
    M2C_UNK *var_s1;
    s32 var_s0;

    var_s1 = ((void *)D_0058E7F0);
    var_s0 = 0;
    do {
        var_s0 += 1;
        M2C_FIELD(var_s1, s16 *, 0x10C) = func_009B3480(var_s1, M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
        var_s1 += 0x240;
    } while (var_s0 < 0x16);
}

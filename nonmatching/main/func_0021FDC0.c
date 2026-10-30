/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F8A0(s32);
extern char D_003D7A20[];
extern char D_005394A0[];

s32 func_0021FDC0(void) {
    s32 *var_s1;
    s32 var_s2;
    s32 var_v0;
    void *temp_v1;

    var_s2 = 0;
    var_s1 = ((void *)D_003D7A20);
loop_1:
    temp_v1 = ((void *)D_005394A0) + var_s2;
    var_v0 = 1;
    if (M2C_FIELD(temp_v1, u8 *, 0x84) == 1) {
        var_v0 = func_0017F8A0(*var_s1);
    }
    if (var_v0 != 0) {
        var_s2 += 1;
        M2C_FIELD(temp_v1, u8 *, 0x84) = 0U;
        var_s1 += 4;
        if (var_s2 >= 6) {
            return 1;
        }
        goto loop_1;
    }
    return 0;
}

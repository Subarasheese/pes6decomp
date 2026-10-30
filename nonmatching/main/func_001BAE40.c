/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern s32 D_003E9914;
extern s32 D_003E9918;
extern char D_005247D0[];
extern char D_00524A50[];

void func_001BAE40(s16 arg0) {
    s16 *temp_a0;
    void *temp_s2;
    void *var_s0;

    var_s0 = NULL;
    if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
        temp_s2 = ((void *)D_00524A50) + ((arg0 - 1) << 5);
        if (func_001BB430((s32) (temp_s2 + 0x10)) != D_003E9918) {
            var_s0 = temp_s2;
        }
    }
    if (var_s0 != NULL) {
        M2C_FIELD(var_s0, u8 *, 3) = (u8) (M2C_FIELD(var_s0, u8 *, 3) + 1);
        temp_a0 = ((void *)D_005247D0) + (D_003E9914 * 2);
        D_003E9914 += 1;
        *temp_a0 = arg0;
    }
}

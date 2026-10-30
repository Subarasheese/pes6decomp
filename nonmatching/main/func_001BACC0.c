/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern s32 D_003E9918;
extern char D_00524A50[];

s32 func_001BACC0(s32 arg0) {
    s32 var_s1;
    void *temp_s2;
    void *var_s0;

    var_s1 = 0;
    var_s0 = NULL;
    if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
        temp_s2 = ((void *)D_00524A50) + ((arg0 - 1) << 5);
        if (func_001BB430((s32) (temp_s2 + 0x10)) != D_003E9918) {
            var_s0 = temp_s2;
        }
    }
    if ((var_s0 != NULL) && ((M2C_FIELD(var_s0, u8 *, 2) - M2C_FIELD(var_s0, u8 *, 3)) <= 0)) {
        var_s1 = 1;
    }
    return var_s1;
}

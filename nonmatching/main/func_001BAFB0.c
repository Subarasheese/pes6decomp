/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern s32 D_003E9918;
extern char D_00524A50[];

s32 func_001BAFB0(s32 arg0) {
    s32 (*temp_v0)(s16, s32, s16);
    s32 var_s1;
    void *temp_s2;
    void *var_s0;

    var_s1 = 0;
    if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
        var_s0 = NULL;
        if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
            temp_s2 = ((void *)D_00524A50) + ((arg0 - 1) << 5);
            if (func_001BB430((s32) (temp_s2 + 0x10)) != D_003E9918) {
                var_s0 = temp_s2;
            }
        }
        if (M2C_FIELD(var_s0, u8 *, 2) == 0) {
            temp_v0 = M2C_FIELD(var_s0, s32 (**)(s16, s32, s16), 0xC);
            if (temp_v0 != NULL) {
                var_s1 = temp_v0(M2C_FIELD(var_s0, s16 *, 4), M2C_FIELD(var_s0, s32 *, 8), M2C_FIELD(var_s0, s16 *, 0));
            }
        }
    }
    return var_s1;
}

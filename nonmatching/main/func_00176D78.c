/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
extern char D_003CC170[];
extern char D_003CC1A0[];
extern char D_003CC280[];
extern char D_003CC290[];

s32 func_00176D78(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK);
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 var_s0;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC280);
        var_a1 = ((void *)D_003CC170);
        goto block_5;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        var_a0 = ((void *)D_003CC290);
        var_a1 = ((void *)D_003CC1A0);
block_5:
        func_00176460(var_a0, (s32) var_a1);
        return 0;
    }
    var_s0 = 0;
    if (arg1 != 0) {
        if (arg1 != 1) {
            temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
            var_s0 = 0;
            if (temp_v0 != NULL) {
                temp_v0(M2C_FIELD(arg0, s32 *, 0x20), -3);
            }
        } else {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
            var_s0 = arg2;
            if (temp_a0 < arg2) {
                var_s0 = temp_a0;
            }
        }
    }
    *arg3 = var_s0;
    return var_s0 == arg2;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
extern char D_003CC170[];
extern char D_003CC1A0[];
extern char D_003CC1C0[];
extern char D_003CC1D0[];

s32 func_001767A8(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC1C0);
        var_a1 = ((void *)D_003CC170);
        goto block_6;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    var_a0 = ((void *)D_003CC1D0);
    var_a1 = ((void *)D_003CC1A0);
block_6:
    func_00176460(var_a0, (s32) var_a1);
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
extern char D_003CC428[];
extern char D_003CC458[];
extern char D_003CC478[];
extern char D_003CC488[];

s32 func_00177DF8(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC478);
        var_a1 = ((void *)D_003CC428);
        goto block_6;
    }
    if (M2C_FIELD(arg0, s8 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    var_a0 = ((void *)D_003CC488);
    var_a1 = ((void *)D_003CC458);
block_6:
    func_00177A80(var_a0, (s32) var_a1);
    return 0;
}

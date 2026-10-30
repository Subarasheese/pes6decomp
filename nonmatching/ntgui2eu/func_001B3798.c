/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B016C(s32, M2C_UNK *);                  /* extern */
extern char D_00601A90[];
extern char D_00601AA0[];

void *func_001B3798(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_s3;
    void *var_v0;

    if (arg2 != 0) {
        var_s3 = ((void *)D_00601AA0);
        if ((func_001B016C(arg2, ((void *)D_00601AA0)) == 0) || (var_v0 = NULL, (func_001B016C(arg2, ((void *)D_00601A90)) == 0))) {
            M2C_FIELD(arg0, s32 *, 0x34) = arg2;
            M2C_FIELD(arg0, s32 *, 0x30) = arg1;
            goto block_6;
        }
    } else {
        var_s3 = (M2C_UNK *)0x600000;
block_6:
        var_v0 = var_s3 + 0x1AA0;
    }
    return var_v0;
}

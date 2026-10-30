/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00291370(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00291A50();                            /* extern */
extern char D_005A2330[];
extern char D_005A2336[];

void func_00291770(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s8 arg4, s32 arg5) {
    M2C_UNK *var_a0_2;
    s8 var_v1;
    u8 var_a0;

    func_00291A50();
    if ((((void *)D_005A2330) != NULL) && ((*(u8 *)D_005A2330) = 2, func_00291370(0, 0, 0), func_00291370(0, 0, 2), func_00291370(1, 0, 0), func_00291370(1, 0, 2), (arg0 != 0))) {
        if (((void *)D_005A2330) == NULL) {
            var_a0 = 0;
        } else {
            var_a0 = (*(u8 *)D_005A2330);
        }
        if (var_a0 == 2) {
            var_a0_2 = ((void *)D_005A2336);
        } else {
            var_a0_2 = NULL;
        }
        M2C_FIELD(var_a0_2, s8 *, 0) = 1;
        M2C_FIELD(var_a0_2, s8 *, 6) = arg4;
        if (arg1 == 0) {
            return;
        }
        M2C_FIELD(var_a0_2, s8 *, 1) = 1;
        M2C_FIELD(var_a0_2, s16 *, 2) = arg3;
        var_v1 = arg4 != 0;
        M2C_FIELD(var_a0_2, s16 *, 4) = arg2;
        if (var_v1 != 0) {
            var_v1 = arg5 != 0;
        }
        M2C_FIELD(var_a0_2, s8 *, 7) = var_v1;
    }
}

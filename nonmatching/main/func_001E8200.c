/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001E6E10(s32);                             /* extern */
s32 func_001EA820(s32, s32, void *, void *);        /* extern */
s32 func_001EAB10(s32, s32, s32, void *, void *);   /* extern */

s32 func_001E8200(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, void *arg5, void *arg6) {
    s32 var_s6;
    s32 var_v0;

    var_s6 = 0;
    if (arg1 != 0) {
        if (((u32) (arg0 - 1) < 2U) && (arg3 == 0)) {
            goto block_22;
        }
        if ((arg5 != NULL) && (arg6 != NULL)) {
            if ((func_001E6E10(arg4) == 0) && (M2C_FIELD(arg5, s16 *, 0) >= M2C_FIELD(arg6, s16 *, 0)) && (M2C_FIELD(arg5, s16 *, 2) >= M2C_FIELD(arg6, s16 *, 2))) {
                switch (arg0) {                     /* irregular */
                case 3:
                    var_v0 = func_001EA820(arg1, arg4, arg5, arg6);
block_18:
                    var_s6 = var_v0;
                    break;
                case 2:
                    var_v0 = func_001EAB10(arg1, arg3, arg4, arg5, arg6);
                    goto block_18;
                }
                return var_s6;
            }
            goto block_22;
        }
        goto block_22;
    }
block_22:
    return 0;
}

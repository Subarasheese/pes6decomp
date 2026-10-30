/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00126BA0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32 *, s32, s64, s64); /* extern */
extern char D_003C5C30[];
extern char D_003C5C60[];

s32 func_00126A80(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp8C;
    s32 var_s1;
    s64 temp_v0;

    sp8C = 0;
    temp_v0 = M2C_FIELD(arg4, s64 (**)(s32, M2C_UNK, M2C_UNK), 0x28)(M2C_FIELD(arg4, s32 *, 0x30), 0x13, 4);
    if (temp_v0 != 0) {
        var_s1 = func_00126BA0(arg0, 0x13, 0x13, 0, 0, arg2, arg1, arg3, (s64) &sp8C, temp_v0);
        if (var_s1 != -3) {
            if ((var_s1 == -5) || (*arg1 == 0)) {
                var_s1 = -3;
                M2C_FIELD(arg4, M2C_UNK **, 0x20) = ((void *)D_003C5C60);
            }
        } else {
            M2C_FIELD(arg4, M2C_UNK **, 0x20) = ((void *)D_003C5C30);
        }
        M2C_FIELD(arg4, M2C_UNK (**)(s32, s64), 0x2C)(M2C_FIELD(arg4, s32 *, 0x30), temp_v0);
        return var_s1;
    }
    return -4;
}

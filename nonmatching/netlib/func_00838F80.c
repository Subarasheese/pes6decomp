/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083A3B0(s32, M2C_UNK, s32, s32, s32, s32, s32, s32, s64); /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];
extern char D_008A5F70[];
extern char D_008A5F72[];

s32 func_00838F80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s64 arg7) {
    M2C_UNK *var_a0;
    s16 temp_s0;
    s32 temp_v1;
    s32 var_v1;
    s64 var_v0;

    temp_s0 = (*(s16 *)D_008A5F70);
    if (func_00D0BAF0() != 0) {
        switch (temp_s0) {                          /* irregular */
        case 37:
        case 36:
        case 32:
        case 31:
        case 28:
            if (func_00D0BAF0() == 0) {
                var_v0 = 0;
            } else {
                if (func_00D0BAF0() == 0) {
                    var_a0 = NULL;
                } else {
                    var_a0 = ((void *)D_008A5CB0);
                }
                if (var_a0 != NULL) {
                    temp_v1 = M2C_FIELD(var_a0, s32 *, 0x230);
                    if (temp_v1 < 0) {
                        var_v1 = 0;
                    } else if (temp_v1 < 4) {
                        if (temp_v1 != M2C_FIELD(var_a0, s32 *, 0x22C)) {
                            var_v1 = 0;
                        } else {
                            var_v1 = 1;
                        }
                    } else {
                        var_v1 = 0;
                    }
                } else {
                    var_v1 = 0;
                }
                if (var_v1 != 1) {
                    var_v0 = 0;
                } else {
                    var_v0 = (s64) (1 << 0x38) >> 0x38;
                }
            }
            if (((s64) (var_v0 << 0x38) >> 0x38) != 1) {
                return 4;
            }
            return 4;
        case 39:
        case 38:
            if (((*(s16 *)D_008A5F72) != 9) && ((*(s16 *)D_008A5F72) != 8)) {
                return 2;
            }
            return func_0083A3B0(arg0, 5, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        default:
            return 2;
        }
    } else {
        return 2;
    }
}

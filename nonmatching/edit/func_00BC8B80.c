/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCBAB0(s32, s32);                        /* extern */
s32 func_00BCBB20(s32, s32);                        /* extern */
s32 func_00BCBCF0(s32, s32);                        /* extern */
s32 func_00BCBE70(s32, s32, s32, s32);              /* extern */
s32 func_00BCC160(u8);                              /* extern */
extern char D_00CE5184[];

s32 func_00BC8B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;

    var_s0 = 0;
    if ((arg0 == 0) || (arg1 == 0)) {
        return 0;
    }
    if (func_00BCC160((*(u8 *)D_00CE5184)) == 0) {
        if (func_00BCBE70(arg0, arg1, arg2, arg3) != 0) {
            var_s0 = 2;
        }
        if (func_00BCBCF0(arg0, arg1) != 0) {
            var_s0 |= 1;
        }
        if (func_00BCBB20(arg0, arg1) == 0) {
            if (func_00BCBAB0(arg0, arg1) != 0) {
                var_s0 |= 4;
            }
            return var_s0;
        }
        return -1;
    }
    return -1;
}

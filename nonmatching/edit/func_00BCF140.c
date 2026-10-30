/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCDAC0(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00B90520(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90540(s32, s16);                    /* extern */
M2C_UNK func_00B90560(s32, void *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_00B90640(s32, void *, s32);            /* extern */

void func_00BCF140(s32 arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK var_s1;
    s16 var_s0;
    s32 var_s2;

    var_s2 = arg5;
    var_s1 = 2;
    var_s0 = 0;
    switch (arg6) {                                 /* irregular */
    case 1:
        if (func_00BCDAC0() == 0) {
            var_s0 = 1;
        } else {
            var_s2 = 0;
        }
        func_001D7D80(arg1, var_s0);
        func_001D7D80(arg2, var_s0);
        var_s1 = 0;
        /* fallthrough */
    case 2:
        var_s0 = 1;
        break;
    }
    func_00B90640(arg0, arg1, arg3);
    func_00B90560(arg0, arg2, arg4, 0, var_s2);
    func_00B90520(arg0, var_s1);
    func_00B90540(arg0, var_s0);
}

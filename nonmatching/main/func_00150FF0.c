/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145380(s32);                         /* extern */
s32 func_00145440(s32);                             /* extern */
s32 func_00145480(s32);                             /* extern */
s32 func_00145490(s32);                             /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */

void func_00150FF0(s32 arg0, s32 arg1) {
    M2C_UNK var_s0;
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_00145440(arg1);
    temp_v0 = func_00145490(arg0);
    switch (temp_v0) {                              /* irregular */
    case 19:
        var_s0 = 0x400;
        break;
    case 20:
        var_s0 = 0x40;
        break;
    default:
        var_s0 = 0;
        break;
    }
    func_001C4730(func_00145440(arg0), temp_s1, var_s0);
    func_00145380(func_00145480(arg0));
}

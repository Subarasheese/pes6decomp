/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
M2C_UNK func_009F4450(s32, s8 *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_009F4FE0;

void func_009F4F70(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4) {
    s8 sp20;
    s8 sp21;
    s8 sp22;
    s32 sp24;
    s32 sp28;
    s32 sp2C;

    sp20 = arg1;
    sp21 = arg2;
    sp24 = arg3;
    sp28 = 0x64;
    if (arg4 == 0) {
        sp2C = func_00828160();
        sp22 = 0;
    } else {
        sp2C = arg4;
        sp22 = 1;
    }
    func_009F4450(arg0, &sp20, &func_009F4FE0, 0);
}

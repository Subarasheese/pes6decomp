/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
M2C_UNK func_009F4450(s32, s32 *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_009F4C60;

void func_009F4BF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4) {
    s32 sp20;
    s32 sp24;
    s16 sp28;
    s8 sp2A;
    s32 sp2C;

    sp20 = arg1;
    sp24 = arg2;
    sp28 = arg4;
    if (arg3 == 0) {
        sp2C = func_00828160();
        sp2A = 0;
    } else {
        sp2C = arg3;
        sp2A = 1;
    }
    func_009F4450(arg0, &sp20, &func_009F4C60, 1);
}

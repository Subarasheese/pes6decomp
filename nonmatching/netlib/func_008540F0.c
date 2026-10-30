/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00854E80(s32, s16 *, s16 *, s32);      /* extern */
extern s32 D_003EA324;
extern s32 D_003EA328;

s32 func_008540F0(s32 arg0, s32 arg1) {
    s16 sp30;
    s16 sp70;
    s16 sp72;
    s32 sp74;

    func_001C48E8(&sp30, 0, 0x34);
    func_001C48E8(&sp70, 0, 0x10);
    sp70 = 0;
    sp74 = D_003EA328;
    sp72 = (s16) D_003EA324;
    func_00854E80(arg0, &sp70, &sp30, arg1);
    return 0;
}

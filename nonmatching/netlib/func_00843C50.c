/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE6E0(s32, s32, s32);
extern s32 func_002DDDD0(s32, s32, void *);
extern u16 func_002DCE70(u16);
extern s32 func_002DE2D0(s32);
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_002DE190(s32, s16 *, M2C_UNK);             /* extern */

s32 func_00843C50(u16 arg0) {
    s16 sp30;
    u16 sp32;
    s32 sp34;
    s32 sp4C;
    s32 temp_v0;

    temp_v0 = func_002DE6E0(0, 1, 0);
    if (temp_v0 == -1) {
        return -1;
    }
    func_001C48E8(&sp30, 0, 0x10);
    sp30 = 0;
    sp34 = 0;
    sp32 = func_002DCE70(arg0);
    if (func_002DE190(temp_v0, &sp30, 0x10) != -1) {
        sp4C = 1;
        func_002DDDD0(temp_v0, 1, &sp4C);
        return temp_v0;
    }
    func_002DE2D0(temp_v0);
    return -1;
}

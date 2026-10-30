/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E15C8[];
extern s8 D_003E9F14;
extern s8 D_003E9F15;
extern s8 D_003E9F18;
extern M2C_UNK func_003208E0;
extern M2C_UNK func_00320B60;

s32 func_00320CB0(s32 arg0) {
    D_003E9F18 = 0;
    D_003E9F14 = 0;
    D_003E9F15 = 0;
    func_00338AA0(func_00338AD0(0x15, &func_00320B60, 3, ((void *)D_003E15C8)), arg0);
    func_00338AA0(func_00338AD0(0x14, &func_003208E0, 3, ((void *)D_003E15C8)), arg0);
    return 1;
}

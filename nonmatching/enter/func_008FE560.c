/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0032E8D0(u32);
extern s32 func_00338AA0(s32, s32);
M2C_UNK func_00325A40(s32);                         /* extern */
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern s8 D_003EA500;
extern s8 D_003EA504;
extern s8 D_003EA508;
extern s8 D_003EA514;
extern char D_0092ACA8[];
extern M2C_UNK func_008FAB40;
extern M2C_UNK func_008FE260;
extern M2C_UNK func_008FE2B0;

s32 func_008FE560(s32 *arg0) {
    func_00325A40(*arg0);
    D_003EA514 = 0;
    D_003EA508 = 0;
    D_003EA504 = 0;
    D_003EA500 = func_0032E8D0(0x1EU);
    func_00338AA0(func_00338AD0(0x80000044, &func_008FE2B0, 3, ((void *)D_0092ACA8)), (s32) arg0);
    func_00338AA0(func_00338AD0(0x2F, &func_008FAB40, 3, ((void *)D_0092ACA8)), (s32) arg0);
    func_00338AD0(0x36, &func_008FE260, 3, ((void *)D_0092ACA8));
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
extern s32 func_00338750(void *, s32);
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E6408[];
extern M2C_UNK func_00350A70;

s32 func_00351BA0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00338AD0(0x27, &func_00350A70, 3, ((void *)D_003E6408));
    func_00338AA0(temp_v0, arg0);
    func_00338750((void *) temp_v0, 5);
    return 1;
}

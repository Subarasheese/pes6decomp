/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E6228[];
extern M2C_UNK func_00349C70;
extern M2C_UNK func_0034A710;

s32 func_0034A8D0(s32 arg0) {
    func_00338AA0(func_00338AD0(0x1D, &func_0034A710, 5, ((void *)D_003E6228)), arg0);
    func_00338AA0(func_00338AD0(0x1E, &func_00349C70, 5, ((void *)D_003E6228)), arg0);
    return 1;
}

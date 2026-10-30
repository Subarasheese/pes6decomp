/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003D18D0[];
extern char D_00529A80[];
extern M2C_UNK func_001BD160;
extern M2C_UNK func_001BD320;
extern M2C_UNK func_001BD4B0;

s32 func_001BD0E0(void) {
    if ((*(s32 *)D_00529A80) == 0) {
        (*(s32 *)D_00529A80) = func_001BBEC0(&func_001BD4B0, &func_001BD320, &func_001BD160, 0x1C, 0, ((void *)D_003D18D0));
    }
    if ((*(s32 *)D_00529A80) == 0) {
        return 0;
    }
    func_001BBC60((*(s32 *)D_00529A80));
    return 1;
}

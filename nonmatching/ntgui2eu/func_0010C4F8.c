/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern void *D_0044AA48;
extern char D_00550700[];
extern char D_011B5CA8[];

s32 func_0010C4F8(void *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        D_0044AA48 = arg0;
        func_001AE7D8(((void *)D_011B5CA8), 0, 0x88);
        var_v0 = M2C_FIELD(D_0044AA48, s32 (**)(void *, M2C_UNK *), 0x110)(((void *)D_011B5CA8) + 0x40, ((void *)D_00550700)) != 0;
    }
    return var_v0;
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0021CE30(M2C_UNK *, M2C_UNK *, s64, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003A9620[];
extern char D_003D4548[];
extern char D_00537C00[];
extern char D_00538250[];
extern M2C_UNK func_00216510;

s32 func_00216520(M2C_UNK *arg0, s64 arg1, void *arg2, s32 arg3) {
    M2C_UNK *var_a4;

    var_a4 = arg0;
    if (var_a4 == NULL) {
        var_a4 = ((void *)D_003D4548);
    }
    if (M2C_FIELD(((void *)D_00538250), s32 *, 0) == 0) {
        if (arg2 != NULL) {
            M2C_FIELD(arg2, s32 *, 0) = 0;
            M2C_FIELD(arg2, s32 *, 8) = 0;
            M2C_FIELD(arg2, s32 *, 0xC) = 0;
        }
        func_0021CE30(((void *)D_00538250), &func_00216510, (s64) (arg1 << 0x20) >> 0x20, var_a4, arg3, ((void *)D_003A9620));
        M2C_FIELD(((void *)D_00538250), s32 *, 0xC4) = 0x18;
        M2C_FIELD(((void *)D_00538250), M2C_UNK **, 0xC0) = ((void *)D_00537C00);
        return 1;
    }
    return 0;
}

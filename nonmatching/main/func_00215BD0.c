/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0021CE30(M2C_UNK *, M2C_UNK *, s64, s32, s32, M2C_UNK *); /* extern */
extern char D_003A96B0[];
extern char D_00537C00[];
extern char D_00538250[];
extern M2C_UNK func_00215BC0;

s32 func_00215BD0(s32 arg0, s64 arg1, void *arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(((void *)D_00538250), s32 *, 0) == 0) {
        if (arg2 != NULL) {
            M2C_FIELD(arg2, s32 *, 0) = 0;
            M2C_FIELD(arg2, s32 *, 8) = 0;
            M2C_FIELD(arg2, s32 *, 0xC) = 0;
        }
        func_0021CE30(((void *)D_00538250), &func_00215BC0, (s64) (arg1 << 0x20) >> 0x20, arg0, arg3, ((void *)D_003A96B0));
        M2C_FIELD(((void *)D_00538250), s32 *, 0xC0) = 0x18;
        M2C_FIELD(((void *)D_00538250), M2C_UNK **, 0xBC) = ((void *)D_00537C00);
        var_v0 = 1;
    }
    return var_v0;
}

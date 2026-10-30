/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
M2C_UNK func_001C7F58(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0021CE30(M2C_UNK *, M2C_UNK *, s64, s32, s32, M2C_UNK *); /* extern */
extern char D_003A91E0[];
extern char D_003D4538[];
extern s32 D_003E9A04;
extern char D_00537C00[];
extern char D_00538250[];
extern M2C_UNK func_0021C320;

s32 func_0021C330(s32 arg0, s64 arg1, void *arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(((void *)D_00538250), s32 *, 0) == 0) {
        if (arg2 != NULL) {
            M2C_FIELD(arg2, s32 *, 0) = 0;
            M2C_FIELD(arg2, s32 *, 8) = 0;
            M2C_FIELD(arg2, s32 *, 0xC) = 0;
        }
        func_0021CE30(((void *)D_00538250), &func_0021C320, (s64) (arg1 << 0x20) >> 0x20, arg0, arg3, ((void *)D_003A91E0));
        M2C_FIELD(((void *)D_00538250), M2C_UNK **, 0xCC) = ((void *)D_00537C00);
        M2C_FIELD(((void *)D_00538250), s32 *, 0xD0) = 0;
        M2C_FIELD(((void *)D_00538250), s32 *, 0xB8) = 0;
        D_003E9A04 = 0;
        func_001C7F58(((void *)D_00538250) + 0x38, ((void *)D_003D4538));
        func_00121430(((void *)D_00538250) + 0x38);
        var_v0 = 1;
    }
    return var_v0;
}

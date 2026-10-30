/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
M2C_UNK func_001C7F58(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0021CE30(M2C_UNK *, M2C_UNK *, void *, s64, M2C_UNK, s32, M2C_UNK *); /* extern */
extern char D_003A9460[];
extern char D_003D4538[];
extern char D_00538250[];
extern M2C_UNK func_00218640;

s32 func_00218650(s32 arg0, M2C_UNK *arg1, s32 arg2, s64 arg3, void *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    s32 var_s2;
    s32 var_v0;

    var_v0 = 0;
    var_s2 = arg5;
    if (M2C_FIELD(((void *)D_00538250), s32 *, 0) == 0) {
        if (arg4 != NULL) {
            M2C_FIELD(arg4, s32 *, 0) = 0;
            M2C_FIELD(arg4, s32 *, 8) = 0;
            M2C_FIELD(arg4, s32 *, 0xC) = 0;
        }
        func_0021CE30(((void *)D_00538250), &func_00218640, arg4, (s64) (arg3 << 0x20) >> 0x20, 0, arg_sp8, ((void *)D_003A9460));
        if (arg2 == 0) {
            func_001C7F58(((void *)D_00538250) + 0x58, arg1);
            var_s2 = 1;
        }
        func_001C7F58(((void *)D_00538250) + 0x38, ((void *)D_003D4538));
        func_00121430(((void *)D_00538250) + 0x38);
        var_v0 = 1;
        M2C_FIELD(((void *)D_00538250), s32 *, 0x78) = arg6;
        M2C_FIELD(((void *)D_00538250), s32 *, 0x7C) = arg7;
        M2C_FIELD(((void *)D_00538250), s32 *, 0xB8) = var_s2;
        M2C_FIELD(((void *)D_00538250), s32 *, 0xC8) = arg2;
        M2C_FIELD(((void *)D_00538250), s32 *, 0x80) = arg_sp0;
    }
    return var_v0;
}

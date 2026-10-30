/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00170400(void *, void *);
extern void func_00171B18(void);
M2C_UNK func_00161038(M2C_UNK *, s32);              /* extern */
s32 func_00171468(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
s32 func_00171608(s32, M2C_UNK *);                  /* extern */
s32 func_00171768(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_00171920();                            /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, u32);     /* extern */
extern char D_00387800[];
extern char D_003CAD98[];
extern char D_003CADC8[];
extern char D_003CADF8[];
extern char D_003CAE20[];
extern char D_0050FAC0[];

s32 func_00171B90(s32 arg0, M2C_UNK *arg1, u32 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    s32 var_v0;
    u32 temp_lo;

    func_001C48E8(((void *)D_0050FAC0), 0, 0x1000U);
    if ((*(s32 *)D_00387800) == 0) {
        func_00171B18();
    }
    func_00171920();
    var_v0 = 0;
    if (arg0 != 0) {
        if (arg1 == NULL) {
            var_a0 = ((void *)D_003CAD98);
            goto block_7;
        }
        if (arg2 == 0) {
            var_a0 = ((void *)D_003CADC8);
block_7:
            func_00161038(var_a0, 0);
            return 0;
        }
        func_001C48E8(arg1, 0, arg2);
        if (func_00171608(arg0, ((void *)D_0050FAC0)) != 0) {
            temp_lo = arg2 / (u32) (arg3 + 9);
            var_v0 = (temp_lo * 8) + (func_00171768(arg1, func_00171468(arg1, ((void *)D_0050FAC0), temp_lo, arg3)) * (arg3 + 1));
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return var_v0;
        }
        func_00161038(((void *)D_003CADF8), arg0);
        func_00170400(NULL, ((void *)D_003CAE20));
        return 0;
    }
    return var_v0;
}

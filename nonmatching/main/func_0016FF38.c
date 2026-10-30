/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016E9E0(void *, void *);
extern void func_0016FD30(void);
M2C_UNK func_00161038(M2C_UNK *, s32);              /* extern */
s32 func_0016F7B8(M2C_UNK *, void *, M2C_UNK, u32, s32); /* extern */
s32 func_0016F950(s32, void *);                     /* extern */
s32 func_0016FAD8(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, u32);     /* extern */
extern char D_00387240[];
extern char D_003CA880[];
extern char D_003CA8B0[];
extern char D_003CA8E0[];
extern char D_003CA908[];
extern char D_0050EAC0[];

s32 func_0016FF38(s32 arg0, M2C_UNK *arg1, u32 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    s32 var_v0;
    u32 temp_lo;
    void *temp_s4;

    func_001C48E8(((void *)D_0050EAC0), 0, 0x1000U);
    if ((*(s32 *)D_00387240) != 0) {
        func_0016FD30();
    }
    if ((arg0 == 0) || (arg1 == NULL) || (arg2 == 0)) {
        func_0016FD30();
    }
    var_v0 = 0;
    if (arg0 != 0) {
        if (arg1 == NULL) {
            var_a0 = ((void *)D_003CA880);
            goto block_12;
        }
        if (arg2 == 0) {
            var_a0 = ((void *)D_003CA8B0);
block_12:
            func_00161038(var_a0, 0);
            return 0;
        }
        temp_s4 = ((void *)D_0050EAC0) - 0x1540;
        func_001C48E8(arg1, 0, arg2);
        if (func_0016F950(arg0, temp_s4) != 0) {
            temp_lo = arg2 / (u32) (arg3 + 9);
            var_v0 = (temp_lo * 8) + (func_0016FAD8(arg1, func_0016F7B8(arg1, temp_s4, 0x1000, temp_lo, arg3)) * (arg3 + 1));
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
        func_00161038(((void *)D_003CA8E0), arg0);
        func_0016E9E0(NULL, ((void *)D_003CA908));
        return 0;
    }
    return var_v0;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016FD30(void);
M2C_UNK func_00161038(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0016F7B8(s32, s32, s32, u32, s32);         /* extern */
s32 func_0016FAD8(s32, s32);                        /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00387240[];
extern char D_003CA880[];
extern char D_0050EAC0[];

s32 func_001700B8(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_a0;
    s32 var_v0;
    u32 temp_lo;

    func_001C48E8(((void *)D_0050EAC0), 0, 0x1000);
    if ((*(s32 *)D_00387240) != 0) {
        func_0016FD30();
    }
    if ((arg0 == 0) || (arg2 == 0) || (arg1 == 0) || (arg3 == 0)) {
        func_0016FD30();
    }
    var_v0 = 0;
    if (arg0 != 0) {
        if (arg2 == 0) {
            var_a0 = ((void *)D_003CA880);
            goto block_15;
        }
        if (arg1 != 0) {
            if (arg3 == 0) {
                goto block_14;
            }
            temp_lo = arg3 / (u32) (arg4 + 9);
            var_v0 = (temp_lo * 8) + (func_0016FAD8(arg2, func_0016F7B8(arg2, arg0, arg1, temp_lo, arg4)) * (arg4 + 1));
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_v0;
        }
block_14:
        var_a0 = (M2C_UNK *)0x3CA8B0;
block_15:
        func_00161038(var_a0, 0);
        return 0;
    }
    return var_v0;
}

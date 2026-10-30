/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, u8 *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern char D_005CAA90[];
extern char D_005FF410[];
extern char D_011FEDC0[];
extern char D_011FEE60[];
extern char D_011FEEC0[];
extern char D_011FEF00[];
extern M2C_UNK func_00198120;

s32 func_00197C00(u8 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = -1;
    if ((*(s32 *)D_005CAA90) != -1) {
        if (arg0 >= (u32) M2C_FIELD(((void *)D_011FEDC0), u32 *, 0)) {
            return -0xB;
        }
        (*(u8 *)D_011FEEC0) = arg0;
        func_0019B160((*(s32 *)D_005CAA90));
        temp_v0 = func_0019EE30(((void *)D_011FEE60), 2, 1, ((void *)D_011FEEC0), 0x10, ((void *)D_011FEF00), 0x50, &func_00198120, 0);
        if (temp_v0 != 0) {
            func_0019DBD0(((void *)D_005FF410), temp_v0);
            return -2;
        }
        M2C_FIELD(((void *)D_011FEDC0), s32 *, 0x98) = arg1;
        M2C_FIELD(((void *)D_011FEDC0), s32 *, 0x90) = 2;
        M2C_FIELD(((void *)D_011FEDC0), s32 *, 0x94) = (s32) arg0;
        var_v0 = 0;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

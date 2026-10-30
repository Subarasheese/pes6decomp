/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
s32 func_0019B170(s32);                             /* extern */
M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_001B08E8(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
extern char D_005CAA30[];
extern char D_005CAA34[];
extern char D_011FD7C0[];
extern char D_011FD820[];
extern char D_011FED80[];
extern M2C_UNK func_00195BF0;

s32 func_00196E70(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 var_v0;

    if (M2C_FIELD(((void *)D_011FD7C0), s32 *, 0x24) == 0) {
        return -0x64;
    }
    var_v0 = -0xC8;
    if (func_0019B170(M2C_FIELD(((void *)D_005CAA34), s32 *, 0)) >= 0) {
        if ((arg2 == NULL) || (*arg2 == 0) || (arg3 == NULL)) {
            func_0019B140(M2C_FIELD(((void *)D_005CAA34), s32 *, -0x55CC));
            return -0xD2;
        }
        M2C_FIELD((void *)0x011FD870, s32 *, 0) = arg0;
        M2C_FIELD((void *)0x011FD870, s32 *, 4) = arg1;
        M2C_FIELD((void *)0x011FD870, s32 *, 8) = 0x10;
        func_001B08E8((void *)0x011FD870 + 0x14, arg2, 0x3FF);
        M2C_FIELD((void *)0x011FD870, s8 *, 0x413) = 0;
        func_001B08E8(((void *)D_011FD820), arg3, 0x20);
        M2C_FIELD((void *)0x011FD870, void **, 0x10) = (void *) (((void *)D_011FD820) - 0x20);
        func_0019B3A0(0);
        if (func_0019EE30(((void *)D_011FD7C0), 0xE, 1, 0x011FD870, 0x414, ((void *)D_011FED80), 4, &func_00195BF0, 0) != 0) {
            func_0019B140(M2C_FIELD(((void *)D_005CAA34), s32 *, -0x55CC));
            return -0x5B;
        }
        (*(s32 *)D_005CAA30) = 0x13;
        var_v0 = 0;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

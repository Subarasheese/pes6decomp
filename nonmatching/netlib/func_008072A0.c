/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00805EB0(M2C_UNK *, s32);              /* extern */
s32 func_00814B70(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_0083BFA0(M2C_UNK);                     /* extern */
extern char D_00887FB0[];
extern char D_0088ADB0[];
extern char D_0088AE20[];

s32 func_008072A0(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (((void *)D_0088ADB0) == NULL) {
        return 0;
    }
    if (((void *)D_0088ADB0) != NULL) {
        var_v0 = M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C);
    } else {
        var_v0 = 0x11;
    }
    if (var_v0 != 0) {
        var_v0_2 = 0;
    } else if (func_00814B70(2, ((void *)D_00887FB0)) != 1) {
        var_v0_2 = 0;
    } else {
        if (((void *)D_0088ADB0) != NULL) {
            M2C_FIELD(((void *)D_0088ADB0), s8 *, 0) = 0;
            M2C_FIELD(((void *)D_0088ADB0), s32 *, 4) = 0;
            func_001C48E8(((void *)D_0088AE20), 0, 0x200);
            if (((void *)D_0088ADB0) != NULL) {
                M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 1;
            }
        }
        func_00805EB0(((void *)D_0088ADB0), arg0);
        var_v0_2 = 1;
    }
    if (var_v0_2 == 0) {
        func_00805EB0(((void *)D_0088ADB0), 0);
        func_0083BFA0(2);
    }
    return 1;
}

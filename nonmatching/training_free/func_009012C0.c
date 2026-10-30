/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002623C0(void);
extern void func_0026B580(void *, s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00C99E60(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern void *D_003AE9D0;
extern char D_00591BCE[];
extern char D_00591C09[];
extern char D_00CA9640[];
extern M2C_UNK func_00901190;
extern M2C_UNK func_00901200;
extern M2C_UNK func_00901260;

s32 func_009012C0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 var_v0;

    func_0026E840(0x84008401);
    if ((*(u8 *)D_00591C09) == 5) {
        var_v0 = func_002623C0();
    } else {
        var_v0 = (*(u8 *)D_00591BCE);
    }
    if (var_v0 == M2C_FIELD(D_003AE9D0, s32 *, 0x18)) {
        func_0026B580(D_003AE9D0, 6, arg3);
        M2C_FIELD(D_003AE9D0, s8 *, 0x45) = -1;
        return 2;
    }
    M2C_FIELD(D_003AE9D0, s32 *, 0x4C) = func_00C99E60(0x6C0084, ((void *)D_00CA9640), &func_00901260, &func_00901200, &func_00901190);
    return 0;
}

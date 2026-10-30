/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
extern void func_00C87790(void);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C89FE0();                            /* extern */
M2C_UNK func_00C8AC90(M2C_UNK);                     /* extern */
extern char D_00CB4F30[];
extern char D_00CCCE30[];
extern char D_00CCD07C[];
extern char D_00CCD084[];
extern M2C_UNK func_00C8AFD0;

void func_00C8A3D0(void) {
    s32 var_s0;

    func_001C48E8(((void *)D_00CCCE30), 0, 0x67C);
    func_00C87790();
    func_00C89FE0();
    (*(s16 *)D_00CCD07C) = 0;
    func_00C8AC90(1);
    var_s0 = (*(s32 *)D_00CCD084);
    if (var_s0 == 0) {
        var_s0 = func_001BBEC0(0, &func_00C8AFD0, 0, 0, 0, ((void *)D_00CB4F30));
        func_001BBC60(var_s0);
    }
    (*(s32 *)D_00CCD084) = var_s0;
}

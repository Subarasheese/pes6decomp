/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Process_Start(s32);
extern void func_00C87790(void);
s32 Pes6Process_Create(M2C_UNK, char *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C89FE0();                            /* extern */
M2C_UNK func_00C8AC90(M2C_UNK);                     /* extern */
extern char D_00CB4F30[];
extern char D_00CCCE30[];
extern char D_00CCD07C[];
extern char D_00CCD084[];
extern char func_00C8AFD0[];

void func_00C8A3D0(void) {
    s32 var_s0;

    func_001C48E8(((void *)D_00CCCE30), 0, 0x67C);
    func_00C87790();
    func_00C89FE0();
    (*(s16 *)D_00CCD07C) = 0;
    func_00C8AC90(1);
    var_s0 = (*(s32 *)D_00CCD084);
    if (var_s0 == 0) {
        var_s0 = Pes6Process_Create(0, func_00C8AFD0, 0, 0, 0, ((void *)D_00CB4F30));
        Pes6Process_Start(var_s0);
    }
    (*(s32 *)D_00CCD084) = var_s0;
}

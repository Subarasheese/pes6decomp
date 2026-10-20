/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00155A00();                            /* extern */
M2C_UNK func_00155A10();                            /* extern */
s32 func_00164EB0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern s32 D_003E9B34;
extern M2C_UNK *D_003E9B38;
extern M2C_UNK *D_003E9B3C;
extern char D_0053CF40[];
extern char D_00560140[];
extern char D_00583330[];
extern char D_00583334[];
extern char D_00583338[];
extern char D_0058333C[];

s32 func_0024F440(void) {
    func_00155A10();
    (*(s32 *)D_00583330) = func_00164EB0(1, D_003E9B3C, 0xE124);
    (*(s32 *)D_00583338) = func_00164EB0(1, D_003E9B38, 0xE124);
    (*(s32 *)D_00583334) = func_00164EB0(2, ((void *)D_00560140), 0x231E4);
    (*(s32 *)D_0058333C) = func_00164EB0(2, ((void *)D_0053CF40), 0x231E4);
    func_00155A00();
    D_003E9B34 = 1;
    return 0;
}

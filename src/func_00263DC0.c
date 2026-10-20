/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0023DA40();                            /* extern */
M2C_UNK func_0023DF20(M2C_UNK, M2C_UNK);            /* extern */
s8 func_002623C0();                                 /* extern */
s8 func_00262410();                                 /* extern */
u8 func_00262430();                                 /* extern */
u8 func_00262450();                                 /* extern */
u8 func_00262470();                                 /* extern */
u8 func_00262490();                                 /* extern */
u8 func_002624B0();                                 /* extern */
s32 func_002624E0();                                /* extern */
M2C_UNK func_003710E0(s32);                         /* extern */
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BB8[];
extern char D_00591BCA[];
extern char D_00591BCB[];
extern char D_00591BCE[];

void func_00263DC0(void) {
    func_003710E0(func_002624E0() & 0xFF);
    (*(u8 *)D_00591BB4) = func_002624B0();
    (*(u8 *)D_00591BB6) = func_00262490();
    (*(u8 *)D_00591BB8) = func_00262470();
    (*(u8 *)D_00591BB7) = func_00262450();
    (*(u8 *)D_00591BCA) = func_00262430();
    (*(s8 *)D_00591BCB) = func_00262410();
    (*(s8 *)D_00591BCE) = func_002623C0();
    func_0023DF20(0, 0);
    func_0023DF20(1, 0);
    func_0023DF20(2, 0);
    func_0023DF20(3, 0);
    func_0023DF20(7, 0);
    if ((*(u8 *)D_00591BB4) == 0xFF) {
        func_0023DF20(0, 1);
    }
    if ((*(u8 *)D_00591BB6) == 2) {
        func_0023DF20(1, 1);
    }
    if ((*(u8 *)D_00591BB8) == 2) {
        func_0023DF20(2, 1);
    }
    if ((*(u8 *)D_00591BB7) == 3) {
        func_0023DF20(3, 1);
    }
    if ((*(u8 *)D_00591BCA) == 0x12) {
        func_0023DF20(7, 1);
    }
    func_0023DA40();
}

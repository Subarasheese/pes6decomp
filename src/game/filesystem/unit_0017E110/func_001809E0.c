/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00154070(s32);                             /* extern */
M2C_UNK func_001C7F58(s32, s32);                    /* extern */
s32 func_001C80F0(s32);                             /* extern */
extern char D_0051FE90[];
extern char D_0051FE94[];
extern char D_0051FE98[];
extern char D_0051FE9C[];
extern char D_0051FEA0[];
extern char D_0051FEA4[];
extern char D_0051FEAC[];

void func_001809E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    (*(s32 *)D_0051FE90) = 0;
    (*(s32 *)D_0051FE94) = 4;
    (*(s32 *)D_0051FE98) = arg0;
    (*(s32 *)D_0051FE9C) = arg1;
    temp_v0 = func_00154070(func_001C80F0(arg2) + 1);
    (*(s32 *)D_0051FEA0) = temp_v0;
    func_001C7F58(temp_v0, arg2);
    (*(s32 *)D_0051FEA4) = 4;
    (*(s8 *)D_0051FEAC) = 1;
}

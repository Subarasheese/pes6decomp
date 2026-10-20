/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BC060(s32);                             /* extern */
M2C_UNK func_001BC730(s32, s32, s32, s32);          /* extern */
extern char D_00529A74[];

void func_001BC180(s32 arg0, s32 arg1, s32 arg2) {
    func_001BC730(func_001BC060((*(s32 *)D_00529A74)), arg0, arg1, arg2);
}

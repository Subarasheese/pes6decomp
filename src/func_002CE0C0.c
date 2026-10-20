/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK WaitSema(s32);                         /* extern */
extern char D_005E5CFD[];

void func_002CE0C0(s32 arg0) {
loop_1:
    WaitSema(arg0);
    (*(s8 *)D_005E5CFD) = 1;
    goto loop_1;
}

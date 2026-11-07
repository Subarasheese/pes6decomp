/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
s32 func_001094A8(M2C_UNK *);                       /* extern */
extern s32 D_003E9798;
extern char D_003FB6A0[];

s32 func_0012E460(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        WaitSema(D_003E9798);
        func_00105380(D_003E9798);
        return 0;
    case 1:
        return func_001094A8(((void *)D_003FB6A0));
    default:
        return -1;
    }
}

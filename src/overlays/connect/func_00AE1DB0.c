/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK printf(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_00AE1E30(s32, s32);                    /* extern */
extern char D_00B00040[];

s32 func_00AE1DB0(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {
    case 6:
        func_00AE1E30(arg1, arg2);
        break;
    case 7:
        func_00AE1E30(arg1, arg2);
        break;
    default:
        printf(((void *)D_00B00040), arg0, arg1);
        return 0;
    }
    return 1;
}

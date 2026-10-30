/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, s8 *);        /* extern */
M2C_UNK func_00826010(M2C_UNK *, s32);              /* extern */
extern char D_008A4FD0[];

s32 func_00825870(s32 arg0, s8 *arg1, s32 arg2) {
    if (arg1 == NULL) {
        return 0;
    }
    if (*arg1 == 0) {
        return 0;
    }
    if (func_001F08B0(arg0) == 0) {
        return 0;
    }
    func_001C48E8(((void *)D_008A4FD0), 0, 0x400);
    sprintf(((void *)D_008A4FD0), func_001F08B0(arg0), arg1);
    func_00826010(((void *)D_008A4FD0), arg2);
    return 1;
}

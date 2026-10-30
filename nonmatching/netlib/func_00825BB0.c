/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, s8 *);        /* extern */
M2C_UNK func_00826010(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_008A4FD0[];

s32 func_00825BB0(s8 *arg0) {
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            if (func_001F08B0(0x01FA0019) == 0) {
                return 0;
            }
            func_001C48E8(((void *)D_008A4FD0), 0, 0x400);
            sprintf(((void *)D_008A4FD0), func_001F08B0(0x01FA0019), arg0);
            func_00826010(((void *)D_008A4FD0), 0);
            return 1;
        }
        return 0;
    }
    return 0;
}

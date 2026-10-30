/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00296330(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF8D60(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00CBD7B4[];
extern char D_00CBD7C0[];
extern char D_00CBD7CC[];
extern char D_00CBD82C[];

s32 func_00BF9100(void) {
    func_00BF8D60(0x64, 0x64);
    (*(s32 *)D_00CBD7CC) = 0;
    (*(s32 *)D_00CBD82C) = 0;
    func_00296330(((void *)D_00CBD7C0), 0, 0, 0, 0, 1, 0);
    (*(s8 *)D_00CBD7B4) = 0;
    return 1;
}

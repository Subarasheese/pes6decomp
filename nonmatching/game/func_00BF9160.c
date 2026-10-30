/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00296330(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF8D60(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_0058E5B4;
extern char D_00CBD7B4[];
extern char D_00CBD7C0[];

u8 func_00BF9160(void) {
    func_00296330(((void *)D_00CBD7C0), 0, 0, 0, 0, 1, 0);
    if (func_00207D80(D_0058E5B4, 0x1CC) != 0) {
        func_00BF8D60(0x64, 0x64);
    }
    return (*(u8 *)D_00CBD7B4);
}

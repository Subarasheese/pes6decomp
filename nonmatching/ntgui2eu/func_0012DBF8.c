/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00154650(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0015CCF8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_011D4D58[];
extern char D_011D4D60[];
extern char D_011D4D78[];

void func_0012DBF8(void) {
    func_00154650(((void *)D_011D4D60), 0x64, 0x64);
    func_0015CCF8(((void *)D_011D4D78), 0x1E, 0xA);
    (*(s32 *)D_011D4D58) = 2;
}

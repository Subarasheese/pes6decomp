/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0085B910();                            /* extern */
extern char D_008A3C60[];
extern char D_008A3C6C[];

void func_00817410(void) {
    func_001C48E8(((void *)D_008A3C60), 0, 0x18);
    (*(s32 *)D_008A3C6C) = 0x708;
    func_0085B910();
}

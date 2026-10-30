/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009FB680(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_009FB6B0();                            /* extern */
extern char D_00A7E2D0[];
extern char D_00A7EAD0[];

void func_009FB0C0(void) {
    func_009FB6B0();
    func_009FB680(((void *)D_00A7EAD0), 0xB000, ((void *)D_00A7E2D0), 0x800);
}

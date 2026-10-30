/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_008A9BA4[];
extern char D_008A9BD4[];
extern char D_008A9DE0[];

s32 func_00827480(void) {
    func_001C4730(((void *)D_008A9BA4), ((void *)D_008A9DE0), 0x31);
    (*(s8 *)D_008A9BD4) = 0;
    return 1;
}

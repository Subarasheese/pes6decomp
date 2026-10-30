/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern char D_003DC508[];
extern char D_005E7FB0[];

M2C_UNK *func_002DCDE0(u32 arg0) {
    u32 sp1C;

    sp1C = arg0;
    sprintf(((void *)D_005E7FB0), ((void *)D_003DC508), arg0 & 0xFF, (arg0 >> 8) & 0xFF, (arg0 >> 0x10) & 0xFF, (arg0 >> 0x18) & 0xFF);
    return ((void *)D_005E7FB0);
}

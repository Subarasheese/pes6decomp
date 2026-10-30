/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_002C9E10(M2C_UNK *, s32, s32);         /* extern */
extern char D_009C2708[];
extern char D_00A77DE0[];

M2C_UNK *func_0095ABD0(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 0:
        sprintf(((void *)D_00A77DE0), ((void *)D_009C2708), func_001F08B0(0x41003F));
        break;
    case 9:
        sprintf(((void *)D_00A77DE0), ((void *)D_009C2708), func_001F08B0(0x6C0038));
        break;
    default:
        func_002C9E10(((void *)D_00A77DE0), arg0, arg1);
        break;
    }
    return ((void *)D_00A77DE0);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_002C9D20(M2C_UNK *, s32, s32, s32);    /* extern */
extern char D_009C2708[];
extern char D_00A77E60[];

M2C_UNK *func_0095AB60(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 < 0x16) {
        func_002C9D20(((void *)D_00A77E60), arg0, arg1, arg2);
    } else {
        sprintf(((void *)D_00A77E60), ((void *)D_009C2708), func_001F08B0(0x6C0028));
    }
    return ((void *)D_00A77E60);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK WaitSema(s32);                         /* extern */
s32 func_001053B0(s32);                             /* extern */
M2C_UNK func_002DAFD0();                            /* extern */
extern char D_003B3200[];

s32 func_002DB0B8(s32 arg0) {
    s32 var_v0;

    if (M2C_FIELD(((void *)D_003B3200), s32 *, 0) < 0) {
        return -1;
    }
    switch (arg0) {                                 /* irregular */
    case 0:
        WaitSema(M2C_FIELD(((void *)D_003B3200), s32 *, 0x3200));
        func_002DAFD0();
block_8:
        var_v0 = 0;
        return var_v0;
    case 1:
        var_v0 = 1;
        if (func_001053B0(M2C_FIELD(((void *)D_003B3200), s32 *, 0x3200)) != -1) {
            func_002DAFD0();
            goto block_8;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    default:
        return -0x65;
    }
}

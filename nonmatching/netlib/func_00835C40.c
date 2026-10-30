/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008153B0();                                /* extern */
s32 func_00815450();                                /* extern */
M2C_UNK func_00D13BE0();                            /* extern */
extern char D_00888BE0[];
extern char D_008A5CA0[];

s32 func_00835C40(void) {
    func_00D13BE0();
    if (((*(s32 *)D_008A5CA0) == 1) && ((func_00815450() != 0) || (func_008153B0() != 0))) {
        func_00815100(((void *)D_00888BE0));
    }
    (*(s32 *)D_008A5CA0) = 0;
    return 1;
}

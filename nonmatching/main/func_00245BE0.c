/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
s32 func_00309420();                                /* extern */
s32 func_00815100(M2C_UNK *);                       /* extern */
s32 func_00821570();                                /* extern */
s32 func_008223F0();                                /* extern */
extern char D_003D8B40[];

s32 func_00245BE0(void) {
    if (func_00309420() != 0) {
        if (func_008223F0() == 1) {
            if (func_00821570() == 0) {
                return 0;
            }
            goto block_8;
        }
        if (func_001B68B0() == 0) {
            return 0;
        }
        goto block_8;
    }
    if (func_001B68B0() == 0) {
        return 0;
    }
block_8:
    if (func_00309420() == 0) {
        return 1;
    }
    return func_00815100(((void *)D_003D8B40)) != 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F7970(void);
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008153B0();                                /* extern */
extern char D_00CB5268[];

s32 func_00C99B10(void *arg0) {
    if ((func_002F7970() != 0) && (func_008153B0() != 0)) {
        func_00815100(((void *)D_00CB5268));
    }
    M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK), 0x2C)(-1);
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009CE890();                            /* extern */
extern void *D_00A7DDF8;

s32 func_009D0830(void) {
    if (D_00A7DDF8 != NULL) {
        func_002DF8E0(M2C_FIELD(D_00A7DDF8, s32 *, 0x9A0), 0);
        M2C_FIELD(D_00A7DDF8, s8 *, 4) = 0xFF;
        func_009CE890();
        return 1;
    }
    return 0;
}

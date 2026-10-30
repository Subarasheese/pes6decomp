/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCC980();                                /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char D_0058D7A7[];
extern char D_0058D7FC[];

s32 func_0026C760(void) {
    if ((*(s8 *)D_0058D7A7) != 0) {
        return 1;
    }
    if (func_00BCC980() != 1) {
        if (func_00C01090(0x21) != 0) {
            return 0;
        }
        if (((*(s32 *)D_0058D7FC) == 0) && (func_00C01090(0x23) != 0)) {
            return 0;
        }
        if (func_00C01090(0x24) == 0) {
            if (func_00C01090(0x26) == 0) {
                return func_00C01090(0x28) == 0;
            }
            return 0;
        }
        return 0;
    }
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */

void func_00C15FF0(void) {
    if (func_00BC9F00() != 0) {
        if (func_00BCF3A0(0x20000) != 0) {
            func_00BC8E00(1);
        }
        if (func_00BCF3A0(0x100000) != 0) {
            func_00BC8E00(0);
        }
    }
}

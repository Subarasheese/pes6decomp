/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224D90(s32, s32);                        /* extern */
s32 func_00930C30(s32, s32);                        /* extern */
s32 func_00970200(M2C_UNK);                         /* extern */

s32 func_00970190(s32 arg0, s32 arg1) {
    if (func_00970200(0) != 1) {
        return 0;
    }
    return (func_00930C30(func_00224D90(arg0, arg1) & 0xFFFF, arg0) & 0xFF) <= 0;
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00130A48(s32, s32);                    /* extern */
s32 func_00154300();                                /* extern */

void func_0012FF58(s32 arg0, s32 arg1) {
    if (func_00154300() != 0) {
        func_00130A48(arg0, arg1);
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00938F10();                                /* extern */
M2C_UNK func_00AFDC20(s32, s32);                    /* extern */

void func_00AFDBF0(s32 arg0) {
    func_00AFDC20(arg0, func_00938F10() & 0xFF);
}

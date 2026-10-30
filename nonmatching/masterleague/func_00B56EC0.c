/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B56EC0(void) {
    s32 temp_s0;

    temp_s0 = func_00B54300() & 0xFF;
    return (temp_s0 & 0xFF) == (func_0099B570(0) & 0xFF);
}

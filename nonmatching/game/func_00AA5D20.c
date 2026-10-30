/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3480();                                /* extern */
M2C_UNK func_00AA4A30(s32, s32, s32);               /* extern */

void func_00AA5D20(s32 arg0, s32 arg1) {
    func_00AA4A30(arg0, func_009B3480() & 0xFFFF, arg1);
}

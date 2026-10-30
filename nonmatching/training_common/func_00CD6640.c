/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00151550(s32);                         /* extern */
M2C_UNK func_001CDAD0();                            /* extern */

void func_00CD6640(s32 arg0, s32 *arg1) {
    func_001CDAD0();
    *arg1 = arg0;
    func_00151550(arg0);
}

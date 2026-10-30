/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
M2C_UNK func_002DF8E0(s32);                         /* extern */

void func_008B9AB0(s32 arg0, s32 arg1) {
    func_002DF8E0(arg1 & 0xFF);
    if (arg1 == 1) {
        func_002DF730(arg0, 0);
    }
}

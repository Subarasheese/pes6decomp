/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
M2C_UNK func_008D81C0(s32);                         /* extern */
M2C_UNK func_008E7310(s32);                         /* extern */

void func_008D5940(s32 arg0) {
    if (arg0 != 0) {
        func_008D81C0(arg0 + 0x15C);
        func_008E7310(arg0 + 0x14);
        func_001C48E8(arg0, 0, 0x274);
        func_008B4680(0);
    }
}

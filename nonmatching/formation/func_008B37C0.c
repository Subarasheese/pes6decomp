/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D2FE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008DD2C0(s32);                         /* extern */
M2C_UNK func_008E2AB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008E55F0(s32, M2C_UNK);                /* extern */

void func_008B37C0(s32 arg0) {
    func_008DD2C0(arg0 + 0x2168);
    func_008D2FE0(arg0 + 0x1CA8, 1);
    func_008E2AB0(arg0 + 0x129C, 0);
    func_008E55F0(arg0 + 0x129C, 0xFF);
}

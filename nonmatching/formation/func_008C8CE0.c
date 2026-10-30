/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C8D20(s32);                         /* extern */
M2C_UNK func_008E2A40(s32);                         /* extern */

void func_008C8CE0(s32 arg0) {
    func_008E2A40(arg0 + 0x100);
    func_008E2A40(arg0 + 0x140);
    func_008C8D20(arg0);
}

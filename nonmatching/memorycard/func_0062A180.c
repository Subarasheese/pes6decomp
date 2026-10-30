/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE890(s32, s32);                    /* extern */
M2C_UNK func_001EEAC0(s32, s32);                    /* extern */
M2C_UNK func_001EF370();                            /* extern */

void func_0062A180(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_001EF370();
    func_001EEAC0(arg0, arg2);
    func_001EE890(arg0, arg3);
}

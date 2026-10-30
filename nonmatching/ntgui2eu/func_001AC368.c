/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AC300(s32, s32);                    /* extern */
s32 func_001ADB70(M2C_UNK);                         /* extern */

void func_001AC368(s32 arg0) {
    func_001AC300(arg0, func_001ADB70(0x18));
}

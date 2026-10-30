/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001724E0(s32);                         /* extern */
M2C_UNK func_001725B8(s32);                         /* extern */
M2C_UNK func_001729C0(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00172160(s32 arg0) {
    D_005C1458();
    func_001724E0(arg0);
    func_001725B8(arg0);
    func_001729C0(arg0);
}

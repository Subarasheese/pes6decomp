/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001878A0(s32);                         /* extern */
M2C_UNK func_00187980(s32);                         /* extern */
M2C_UNK func_00187A10(s32);                         /* extern */
extern M2C_UNK (*D_005C16F8)();

void func_00187488(s32 arg0) {
    D_005C16F8();
    func_00187A10(arg0);
    func_001878A0(arg0);
    func_00187980(arg0);
}

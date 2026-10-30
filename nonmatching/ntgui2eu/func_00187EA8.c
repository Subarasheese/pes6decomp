/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00188150(s32);                         /* extern */
M2C_UNK func_001881D0(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00187EA8(s32 arg0) {
    D_005C1458();
    func_00188150(arg0);
    func_001881D0(arg0);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00178E68(s32);                         /* extern */
M2C_UNK func_00179000(s32);                         /* extern */
M2C_UNK func_00179A38(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_001785F0(s32 arg0) {
    D_005C1458();
    func_00179000(arg0);
    func_00179A38(arg0);
    func_00178E68(arg0);
}

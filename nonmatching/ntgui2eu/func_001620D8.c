/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00162110(s32);                         /* extern */
M2C_UNK func_00162170(s32);                         /* extern */
extern M2C_UNK (*D_005BEF18)();

void func_001620D8(s32 arg0) {
    D_005BEF18();
    func_00162110(arg0);
    func_00162170(arg0);
}

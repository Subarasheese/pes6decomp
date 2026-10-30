/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00181AD8(s32);                         /* extern */
M2C_UNK func_00181D08(s32);                         /* extern */
M2C_UNK func_00183670(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00180B00(s32 arg0) {
    D_005C1458();
    func_00181D08(arg0);
    func_00183670(arg0);
    func_00181AD8(arg0);
}

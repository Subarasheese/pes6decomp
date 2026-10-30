/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189380(s32);                         /* extern */
M2C_UNK func_00189408(s32);                         /* extern */
M2C_UNK func_00189458(s32);                         /* extern */
extern M2C_UNK (*D_005C24C0)();

void func_00188F40(s32 arg0) {
    D_005C24C0();
    func_00189458(arg0);
    func_00189380(arg0);
    func_00189408(arg0);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017F110(s32);                         /* extern */
M2C_UNK func_0017F198(s32);                         /* extern */
M2C_UNK func_0017F1E8(s32);                         /* extern */
extern M2C_UNK (*D_005C24C0)();

void func_0017ECD0(s32 arg0) {
    D_005C24C0();
    func_0017F1E8(arg0);
    func_0017F110(arg0);
    func_0017F198(arg0);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017FFA0(s32);                         /* extern */
M2C_UNK func_001806B0(s32);                         /* extern */
extern M2C_UNK (*D_005C3D78)();

void func_0017F9A8(s32 arg0) {
    D_005C3D78();
    func_001806B0(arg0);
    func_0017FFA0(arg0);
}

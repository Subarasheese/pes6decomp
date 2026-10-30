/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017B9B0(s32);                         /* extern */
M2C_UNK func_0017BCA8(s32);                         /* extern */
extern M2C_UNK (*D_005C3D78)();

void func_0017B530(s32 arg0) {
    D_005C3D78();
    func_0017BCA8(arg0);
    func_0017B9B0(arg0);
}

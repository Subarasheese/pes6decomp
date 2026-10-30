/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00188800(s32);                         /* extern */
M2C_UNK func_00188A30(s32);                         /* extern */
extern M2C_UNK (*D_005C3D78)();

void func_00188420(s32 arg0) {
    D_005C3D78();
    func_00188A30(arg0);
    func_00188800(arg0);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00187078(s32);                         /* extern */
M2C_UNK func_001870B8(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_00186F88(s32 arg0) {
    D_005C1458();
    func_00187078(arg0);
    func_001870B8(arg0);
}

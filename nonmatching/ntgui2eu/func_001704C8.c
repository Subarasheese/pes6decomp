/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00170528(s32);                         /* extern */
M2C_UNK func_001705A8(s32);                         /* extern */
extern M2C_UNK (*D_005C0C38)();

void func_001704C8(s32 arg0) {
    D_005C0C38();
    func_00170528(arg0);
    func_001705A8(arg0);
}

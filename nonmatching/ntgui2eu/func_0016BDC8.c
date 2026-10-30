/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016C1E0(void);
M2C_UNK func_0016C1E8(s32);                         /* extern */
extern M2C_UNK (*D_005C1458)();

void func_0016BDC8(s32 arg0) {
    D_005C1458();
    func_0016C1E8(arg0);
    func_0016C1E0();
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
M2C_UNK func_0018C748(void *);                      /* extern */
extern M2C_UNK (*D_005C1450)();

void func_0017D298(void *arg0) {
    D_005C1450();
    func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x480) + 0x920));
    if (M2C_FIELD(arg0, s32 *, 0x1280) != 0) {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x910));
    }
}

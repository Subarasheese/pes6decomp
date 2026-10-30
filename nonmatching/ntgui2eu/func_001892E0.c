/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165BA0(s32, s32);                    /* extern */
extern M2C_UNK (*D_005C2540)();

void func_001892E0(void *arg0, s32 arg1) {
    D_005C2540();
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x980), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x984), arg1);
}

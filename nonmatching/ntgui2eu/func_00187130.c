/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165BA0(s32, s32);                    /* extern */
extern M2C_UNK (*D_005C14D8)();

void func_00187130(void *arg0, s32 arg1) {
    D_005C14D8();
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x910), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x914), arg1);
}

/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK (*D_005C0C78)();

void func_00161CE0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x854) <= 0) {
        D_005C0C78();
        func_001656D0(arg1, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
}

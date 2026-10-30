/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001636F0(void *);                      /* extern */
M2C_UNK func_0018C748(s32);                         /* extern */
extern M2C_UNK (*D_005C1450)();

void func_001632A0(void *arg0) {
    s32 temp_v0;

    D_005C1450();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x924) = (s32) (temp_v0 - 1);
        func_001636F0(arg0);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x920) != 0) && (M2C_FIELD(arg0, s32 *, 0x924) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x920) = 0;
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s32 *, 0x928) = 0;
    }
    func_0018C748(M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 4)), s32 *, 0x910));
}

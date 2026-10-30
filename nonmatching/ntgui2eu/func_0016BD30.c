/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
extern M2C_UNK (*D_005C1450)();

void func_0016BD30(void *arg0) {
    D_005C1450();
    if (M2C_FIELD(arg0, s32 *, 0x940) != 0) {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x910));
    }
    if (M2C_FIELD(arg0, s32 *, 0x944) != 0) {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x914));
    }
    if (M2C_FIELD(arg0, s32 *, 0x948) != 0) {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x918));
    }
}

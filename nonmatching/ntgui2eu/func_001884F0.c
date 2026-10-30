/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C3CF8[];

void func_001884F0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC78) == 0) {
        M2C_FIELD(((void *)D_005C3CF8), M2C_UNK (**)(s32, s32), 0x8C)(M2C_FIELD(arg0, s32 *, 0x920), M2C_FIELD(arg0, s32 *, 0xC74));
        return;
    }
    M2C_FIELD((((void *)D_005C3CF8) + 0x3CF8), M2C_UNK (**)(s32, s32), 0x8C)(M2C_FIELD(arg0, s32 *, 0xC74), M2C_FIELD(arg0, s32 *, 0x920));
}

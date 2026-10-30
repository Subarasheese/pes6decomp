/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00218650(M2C_UNK, s32, s64, s32, M2C_UNK, M2C_UNK, s64, s64); /* extern */
extern s32 D_003E9A04;

void func_00218770(void *arg0, s64 arg1, s32 arg2, s64 arg3, s32 arg4) {
    D_003E9A04 = arg4;
    func_00218650(0, M2C_FIELD(arg0, s32 *, 0x1C) + (arg4 << 5), (s64) (arg1 << 0x20) >> 0x20, arg2, 0, 0, 0, arg3);
}

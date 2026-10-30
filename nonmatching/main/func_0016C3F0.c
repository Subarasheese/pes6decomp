/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
extern char D_003C9F10[];

s32 func_0016C3F0(void *arg0) {
    s32 var_s0;
    s64 (*temp_v0)(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s64 temp_s0;

    var_s0 = 0;
    if (arg0 == NULL) {
        func_0016A550((s32) ((void *)D_003C9F10));
        return 0;
    }
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s64 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x60);
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0(M2C_FIELD(arg0, s32 *, 4), 0xC8, 0, 0);
        var_s0 = (temp_s0 << 0x20) + ((u64) (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s64 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(M2C_FIELD(arg0, s32 *, 4), 0xC9, 0, 0) << 0x20) >> 0x20);
    }
    return var_s0;
}

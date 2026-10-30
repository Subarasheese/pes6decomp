/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
extern char D_003C9F30[];

s32 func_0016C600(void *arg0) {
    s32 (*temp_v0)(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        func_0016A550((s32) ((void *)D_003C9F30));
        return 0;
    }
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x60);
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(M2C_FIELD(arg0, s32 *, 4), 0x12B, 0, 0);
    }
    return var_v1;
}

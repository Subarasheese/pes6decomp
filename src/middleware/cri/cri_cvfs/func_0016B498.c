#include "pes6/m2c.h"
M2C_UNK func_0016A550(M2C_UNK *);                   /* extern */
extern char D_003C9758[];

s32 func_0016B498(void *arg0) {
    s32 (*temp_v0)(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 var_v1;

    if (arg0 == NULL) {
        func_0016A550(((void *)D_003C9758));
        return -1;
    }
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x60);
    var_v1 = 0x7FFFFFFF;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0(M2C_FIELD(arg0, s32 *, 4), 0x12C, 0, 0);
    }
    return var_v1;
}

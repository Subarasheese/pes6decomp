/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern s32 D_003E7448;
extern char D_00507884[];
extern char D_00507A88[];

s32 func_001454C0(s32 arg0) {
    M2C_UNK **temp_v1;
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 var_s0;

    if (D_003E7448 != 0) {
        func_0012AD50((*(s32 *)D_00507A88));
    }
    temp_v1 = ((void *)D_00507884) + ((arg0 & 0x7F) * 4);
    var_a1 = *temp_v1;
    var_a0 = NULL;
    if (var_a1 != NULL) {
loop_2:
        if (M2C_FIELD(var_a1, s32 *, 4) != arg0) {
            var_a0 = var_a1;
            var_a1 = M2C_FIELD(var_a1, M2C_UNK **, 0);
            if (var_a1 == NULL) {
                goto block_10;
            }
            goto loop_2;
        }
        if (var_a0 != NULL) {
            *var_a0 = M2C_FIELD(var_a1, M2C_UNK **, 0);
            M2C_FIELD(var_a1, M2C_UNK **, 0) = *temp_v1;
            *temp_v1 = var_a1;
        }
        var_s0 = M2C_FIELD(var_a1, s32 *, 8);
    } else {
block_10:
        var_s0 = 0;
    }
    if (D_003E7448 != 0) {
        func_0012ADE0((*(s32 *)D_00507A88));
    }
    return var_s0;
}

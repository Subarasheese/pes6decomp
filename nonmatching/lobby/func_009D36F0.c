/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7C00(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, u8);                     /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00999C10(s32, M2C_UNK);                /* extern */
extern void *D_00A7DE08;

s32 func_009D36F0(void) {
    s32 temp_s0;
    u8 var_a1;
    u8 var_a1_2;
    u8 var_a1_3;

    if (D_00A7DE08 != NULL) {
        temp_s0 = M2C_FIELD(D_00A7DE08, s32 *, 0x20);
        func_001D7D80(temp_s0, 0);
        func_001D7C00(temp_s0, 0);
        func_001D7C20(temp_s0, 2);
        func_001D7D60(temp_s0, 1U);
        M2C_FIELD(D_00A7DE08, u8 *, 4) = 0U;
        func_00999C10(M2C_FIELD(D_00A7DE08, s32 *, 0x34), 0);
        func_00999C10(M2C_FIELD(D_00A7DE08, s32 *, 0x38), 0);
        func_001D7D60(M2C_FIELD(D_00A7DE08, s32 *, 0x24), 0U);
        var_a1 = M2C_FIELD(D_00A7DE08, u8 *, 2);
        if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
            var_a1 = 0;
        }
        func_001D7D60(M2C_FIELD(D_00A7DE08, s32 *, 0x2C), var_a1);
        var_a1_2 = M2C_FIELD(D_00A7DE08, u8 *, 1) != 0;
        if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
            var_a1_2 = 0;
        }
        func_001D7D60(M2C_FIELD(D_00A7DE08, s32 *, 0x28), var_a1_2);
        var_a1_3 = M2C_FIELD(D_00A7DE08, u8 *, 3);
        if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
            var_a1_3 = 0;
        }
        func_001D7D60(M2C_FIELD(D_00A7DE08, s32 *, 0x30), var_a1_3);
        M2C_FIELD(D_00A7DE08, s8 *, 0) = 2;
        return 1;
    }
    return 0;
}

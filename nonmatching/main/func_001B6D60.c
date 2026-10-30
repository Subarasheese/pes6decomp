/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001E59D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001E5A10(s32, M2C_UNK32);              /* extern */
M2C_UNK func_001E5E50(s32, M2C_UNK);                /* extern */
s32 func_001E6020(s32);                             /* extern */
extern char D_00522970[];
extern char D_00522974[];
extern char D_00522978[];
extern char D_0052297C[];

void func_001B6D60(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;

    (*(M2C_UNK32 *)D_00522978) = 0x467A0000;
    (*(M2C_UNK32 *)D_0052297C) = 0x46435000;
    var_a0 = (*(s32 *)D_00522970);
    if (((var_a0 != 0) || (temp_v0 = func_001E6020(var_a0), var_a0 = temp_v0, (*(s32 *)D_00522970) = temp_v0, (var_a0 != 0))) && ((func_001E59D0(var_a0, 1), func_001E5A10((*(s32 *)D_00522970), (*(M2C_UNK32 *)D_00522978)), func_001E5E50((*(s32 *)D_00522970), 0x61), var_a0_2 = (*(s32 *)D_00522974), (var_a0_2 != 0)) || (temp_v0_2 = func_001E6020(var_a0_2), var_a0_2 = temp_v0_2, (*(s32 *)D_00522974) = temp_v0_2, (var_a0_2 != 0)))) {
        func_001E59D0(var_a0_2, 1);
        func_001E5A10((*(s32 *)D_00522974), (*(M2C_UNK32 *)D_0052297C));
        func_001E5E50((*(s32 *)D_00522974), 1);
    }
}

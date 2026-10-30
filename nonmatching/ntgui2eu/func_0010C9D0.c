/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0011054C(void);
M2C_UNK func_0010C910();                            /* extern */
extern char D_0044AA48[];

void func_0010C9D0(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s0 = arg1 & 0xFFFF;
    if (M2C_FIELD(M2C_FIELD(((void *)D_0044AA48), void **, 0), s32 (**)(), 0x100)() == 0) {
        var_v0 = temp_s0 & 0x100;
        if (temp_s0 & 0x20) {
            M2C_FIELD(M2C_FIELD(((void *)D_0044AA48), void **, 0), M2C_UNK (**)(M2C_UNK), 0x7C)(1);
            var_v0 = temp_s0 & 0x100;
        }
        var_v0_2 = temp_s0 & 0x40;
        if (var_v0 != 0) {
            func_0010C910();
            goto block_5;
        }
    } else {
block_5:
        var_v0_2 = temp_s0 & 0x40;
    }
    if (var_v0_2 != 0) {
        if (M2C_FIELD(M2C_FIELD(((void *)D_0044AA48), void **, -0x55B8), s32 *, 0xBC) == 0) {
            func_0011054C();
        }
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
s32 func_00B13FF0();                                /* extern */

s32 func_00B13070(void) {
    s32 temp_s0;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0xC28) == 0) {
                temp_s0 = M2C_FIELD(temp_v0, s32 *, 0xC30);
                if (temp_s0 <= 0) {
                    var_v0 = 2;
                } else {
                    var_v0 = temp_s0 - 1;
                }
                M2C_FIELD(temp_v0, s32 *, 0xC30) = var_v0;
                if ((M2C_FIELD(temp_v0, s32 *, 0xC30) == 2) && (func_00226E70() == 0)) {
                    M2C_FIELD(temp_v0, s32 *, 0xC30) = 1;
                }
                if ((func_00B13FF0() == 0) && (M2C_FIELD(temp_v0, s32 *, 0xC30) == 1)) {
                    M2C_FIELD(temp_v0, s32 *, 0xC30) = 0;
                }
                func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
                if (temp_s0 != M2C_FIELD(temp_v0, s32 *, 0xC30)) {
                    func_0026E840(0x8400F803);
                }
            }
        }
    }
    return 0;
}

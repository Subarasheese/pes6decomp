/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AED2F0(void);
extern s32 func_001F08B0(s32);
M2C_UNK func_00AECD10(s32);                         /* extern */
s32 func_00AECF50(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_00AEEAC0();                            /* extern */
extern void *D_00B02688;

s32 func_00AE8D70(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (M2C_FIELD(D_00B02688, s32 *, 0x13D4) != 0) {
        goto block_4;
    }
    func_00AED2F0();
    temp_v0 = func_00AECF50(0, 0, func_001F08B0(0x2C0006));
    M2C_FIELD(D_00B02688, s32 *, 0x13D4) = temp_v0;
    if (temp_v0 != 0) {
        func_00AECD10(M2C_FIELD(D_00B02688, s32 *, 0x13D4));
block_4:
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        func_00AEEAC0();
    }
    return var_s0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_002DB830(s32);                             /* extern */
s32 *func_0099C7E0(M2C_UNK);                        /* extern */
M2C_UNK func_009DC640(s32 *, s32);                  /* extern */
M2C_UNK func_009DC9F0(s32, s32, M2C_UNK, s32);      /* extern */
extern s32 *D_00A7DEB8;

s32 func_009DD6B0(s32 arg0, s32 arg1) {
    s32 *temp_v0;
    s32 temp_a1;
    s32 var_a3;

    if (D_00A7DEB8 != NULL) {
        return 0;
    }
    temp_v0 = func_0099C7E0(0x654);
    D_00A7DEB8 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    *temp_v0 = arg1;
    var_a3 = 0;
    M2C_FIELD(D_00A7DEB8, s32 *, 0x64C) = arg0;
    M2C_FIELD(D_00A7DEB8, u8 *, 0x650) = 1U;
    M2C_FIELD(D_00A7DEB8, u8 *, 0x651) = 1U;
    do {
        temp_a1 = var_a3 * 8;
        var_a3 += 1;
        M2C_FIELD((*(s32 *)0xA7DEB8 + temp_a1), s32 *, 0x5E0) = -1;
    } while (var_a3 < 5);
    func_009DC9F0(arg0, temp_a1, -1, var_a3);
    if ((D_00A7DEB8 != NULL) && (M2C_FIELD(D_00A7DEB8, u8 *, 0x651) != 0)) {
        M2C_FIELD(D_00A7DEB8, u8 *, 0x651) = 0U;
        if (M2C_FIELD(D_00A7DEB8, u8 *, 0x650) != 0) {
            func_001D7D60(M2C_FIELD(D_00A7DEB8, s32 *, 0x5D8), 0);
        }
    }
    func_009DC640(D_00A7DEB8, func_002DB830(M2C_FIELD(D_00A7DEB8, s32 *, 8)));
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
M2C_UNK func_009E08B0(u8);                          /* extern */
extern void *D_00A7DEE8;

s32 func_009E0BF0(s8 arg0) {
    s8 var_s0;

    var_s0 = arg0;
    if (D_00A7DEE8 == NULL) {
        return 0;
    }
    if ((var_s0 < 0) || (var_s0 >= 3)) {
        var_s0 = 1;
    }
    M2C_FIELD(D_00A7DEE8, s8 *, 0x39) = var_s0;
    func_009E08B0(M2C_FIELD(D_00A7DEE8, u8 *, 0x3C));
    if (M2C_FIELD(D_00A7DEE8, u8 *, 0x3A) != 0) {
        if (var_s0 != 2) {
            func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 4), 0);
            func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 8), 1);
            func_001D7D80(M2C_FIELD(D_00A7DEE8, void **, 8), (s16) ((s64) ((s64) var_s0 << 0x30) >> 0x30));
        } else {
            func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 4), 1);
            func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 8), 0);
        }
    }
    return 1;
}

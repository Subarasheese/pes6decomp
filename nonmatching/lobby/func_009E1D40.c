/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
M2C_UNK func_00999C10(s32, s8);                     /* extern */
M2C_UNK func_0099D550(s32, s64);                    /* extern */
extern void *D_00A7DEF8;

s32 func_009E1D40(s8 arg0) {
    s32 var_s0;

    if (D_00A7DEF8 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DEF8, s8 *, 0x38) = arg0;
    func_001D7D60(M2C_FIELD(D_00A7DEF8, void **, 0), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DEF8, void **, 4), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DEF8, void **, 8), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DEF8, void **, 0xC), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DEF8, void **, 0x10), arg0);
    func_0099D550(M2C_FIELD(D_00A7DEF8, s32 *, 0x1C), (s64) ((s64) arg0 << 0x38) >> 0x38);
    var_s0 = 0;
    do {
        func_00999C10(M2C_FIELD((D_00A7DEF8 + (var_s0 * 4)), s32 *, 0x20), arg0);
        var_s0 += 1;
    } while (var_s0 < 5);
    if (M2C_FIELD(D_00A7DEF8, u8 *, 0x39) != 0) {
        func_002DF8E0(M2C_FIELD(D_00A7DEF8, s32 *, 0x14), arg0);
    }
    return 1;
}

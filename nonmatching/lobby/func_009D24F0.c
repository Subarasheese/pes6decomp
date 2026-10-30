/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DE00;

s32 func_009D24F0(s8 arg0) {
    s32 var_s0;

    if (D_00A7DE00 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DE00, s8 *, 3) = arg0;
    var_s0 = 0;
    do {
        func_001D7D60(M2C_FIELD((D_00A7DE00 + (var_s0 * 4)), void **, 0xB4), 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    if ((M2C_FIELD(D_00A7DE00, u8 *, 0x65) == 0) && (M2C_FIELD(D_00A7DE00, u8 *, 1) != 0)) {
        func_001D7D60(M2C_FIELD(((M2C_FIELD(D_00A7DE00, u8 *, 4) * 4) + D_00A7DE00), void **, 0xB4), arg0);
    }
    return 1;
}

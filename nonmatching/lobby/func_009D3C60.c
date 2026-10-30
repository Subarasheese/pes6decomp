/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DE08;

s32 func_009D3C60(s32 arg0) {
    u8 var_a1;

    if (D_00A7DE08 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        M2C_FIELD(D_00A7DE08, u8 *, 3) = 1U;
    } else {
        M2C_FIELD(D_00A7DE08, u8 *, 3) = 0U;
    }
    var_a1 = M2C_FIELD(D_00A7DE08, u8 *, 3);
    if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
        var_a1 = 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x30), (s8) var_a1);
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
M2C_UNK func_009E0BF0(u8);                          /* extern */
extern void *D_00A7DEE8;

s32 func_009E0800(s8 arg0) {
    if (D_00A7DEE8 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DEE8, s8 *, 0x3A) = arg0;
    func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 0), arg0);
    func_002DF8E0(M2C_FIELD(D_00A7DEE8, s32 *, 0x28), arg0);
    if (!(arg0 & 0xFF)) {
        func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 4), 0);
        func_001D7D60(M2C_FIELD(D_00A7DEE8, void **, 8), 0);
    } else {
        func_009E0BF0(M2C_FIELD(D_00A7DEE8, u8 *, 0x39));
    }
    return 1;
}

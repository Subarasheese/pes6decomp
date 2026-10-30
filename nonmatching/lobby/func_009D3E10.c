/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void *D_00A7DE08;

s32 func_009D3E10(s32 arg0) {
    s8 var_a1;

    if (D_00A7DE08 == NULL) {
        return 0;
    }
    if (arg0 >= 0) {
        if (arg0 < 0x32) {
            var_a1 = 1;
            if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
                var_a1 = 0;
            }
            func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x2C), var_a1);
            M2C_FIELD(D_00A7DE08, s8 *, 2) = 1;
            func_001D7D80(M2C_FIELD(D_00A7DE08, void **, 0x2C), (s16) ((s64) ((s64) (arg0 / 5) << 0x30) >> 0x30));
            return 1;
        }
        goto block_6;
    }
block_6:
    func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x2C), 0);
    M2C_FIELD(D_00A7DE08, s8 *, 2) = 0;
    return 1;
}

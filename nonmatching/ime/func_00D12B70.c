/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0AE00(s64);                         /* extern */
M2C_UNK func_00D0AE50(s64);                         /* extern */

s32 func_00D12B70(void *arg0, s64 arg1) {
    s32 temp_v1;
    s64 temp_a1;

    if (arg0 != NULL) {
        temp_a1 = (s64) (arg1 << 0x38) >> 0x38;
        M2C_FIELD(arg0, s32 *, 0xDB0) = (s32) temp_a1;
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xDA8);
        switch (temp_v1) {                          /* irregular */
        case 1:
            break;
        case 2:
            if ((temp_a1 == 0) && (arg0 != NULL)) {
                func_00D0AE00(temp_a1);
                M2C_FIELD(arg0, s32 *, 0xDA8) = 2;
block_20:
                M2C_FIELD(arg0, s8 *, 0xD8C) = 1;
            }
            break;
        case 3:
            if ((temp_a1 == 0) && (arg0 != NULL)) {
                M2C_FIELD(arg0, s32 *, 0xDA8) = 1;
                goto block_20;
            }
            break;
        case 4:
            if (temp_a1 == 0) {
                if (arg0 != NULL) {
                    func_00D0AE00(temp_a1);
                    M2C_FIELD(arg0, s32 *, 0xDA8) = 2;
                    goto block_20;
                }
            } else if (arg0 != NULL) {
                func_00D0AE50(temp_a1);
                M2C_FIELD(arg0, s32 *, 0xDA8) = 4;
                goto block_20;
            }
            break;
        }
        return 0;
    }
    return 2;
}

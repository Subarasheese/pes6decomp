/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
extern void *D_00A7DD58;

s32 func_009C3990(s8 arg0) {
    s32 var_s3;
    s32 var_s4;
    s8 var_s2;

    if (D_00A7DD58 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DD58, s8 *, 0x54) = arg0;
    func_001D7D60(M2C_FIELD(D_00A7DD58, void **, 0), arg0);
    if (M2C_FIELD(D_00A7DD58, u8 *, 0x55) != 0) {
        func_001D7D60(M2C_FIELD(D_00A7DD58, void **, 0x38), arg0);
    }
    func_002DF8E0(M2C_FIELD(D_00A7DD58, s32 *, 0x34), arg0);
    var_s4 = 0;
    do {
        if (((arg0 & 0xFF) == 1) && (var_s4 == M2C_FIELD(D_00A7DD58, u8 *, 0x56))) {
            var_s2 = 1 & 0xFF;
        } else {
            var_s2 = 0;
        }
        var_s3 = 0;
loop_10:
        func_001D7D60(M2C_FIELD(((var_s4 * 8) + D_00A7DD58 + (var_s3 * 4)), void **, 0x1C), var_s2);
        var_s3 += 1;
        if (var_s3 < 2) {
            goto loop_10;
        }
        var_s4 += 1;
    } while (var_s4 < 3);
    return 1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7C20(void *, s32);
M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
extern void *D_00A7DD58;

s32 func_009C3F30(s32 arg0) {
    M2C_UNK var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    if (D_00A7DD58 == NULL) {
        return 0;
    }
    if (arg0 != 0) {
        var_a1 = 0;
        var_s1 = 2;
    } else {
        var_a1 = 2;
        var_s1 = 0;
    }
    func_002DF730(M2C_FIELD(D_00A7DD58, s32 *, 0x34), var_a1);
    var_s3 = 0;
    do {
        var_s2 = 0;
loop_9:
        func_001D7C20(M2C_FIELD(((var_s3 * 8) + D_00A7DD58 + (var_s2 * 4)), void **, 0x1C), var_s1);
        var_s2 += 1;
        if (var_s2 < 2) {
            goto loop_9;
        }
        var_s3 += 1;
    } while (var_s3 < 3);
    return 1;
}

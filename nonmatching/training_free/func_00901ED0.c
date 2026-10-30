/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void *D_003AE9D0;

void func_00901ED0(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *temp_v1;

    var_s1 = 1;
    M2C_FIELD(D_003AE9D0, s32 *, 0x40) = arg0;
    if (arg0 != 1) {
        var_s2 = 1;
        var_s1 = 0;
    } else {
        var_s2 = 0;
    }
    var_s3 = 0;
    var_s0 = 0;
    do {
        temp_v1 = M2C_FIELD((D_003AE9D0 + var_s0), void **, 0x134);
        if (temp_v1 != NULL) {
            func_001EF900(M2C_FIELD(temp_v1, void **, 0x1C), var_s2 & 0xFF);
            func_001EF900(M2C_FIELD((D_003AE9D0 + var_s0), void **, 0x138), var_s1 & 0xFF);
            func_001EF900(M2C_FIELD((D_003AE9D0 + var_s0), void **, 0x13C), var_s1 & 0xFF);
        }
        var_s3 += 1;
        var_s0 += 0xC;
    } while (var_s3 < 0x17);
}

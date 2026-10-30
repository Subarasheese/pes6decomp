/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
s32 func_008FA910(void *, void *);                  /* extern */
M2C_UNK func_008FD320(s32, s8);                     /* extern */
extern void *D_003AE9D0;

s32 func_00901E10(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;

    temp_s1 = func_008FA910(D_003AE9D0 + 0x44, D_003AE9D0 + 0x3D);
    var_s2 = 0;
    var_s0 = 0;
    do {
        temp_a0 = M2C_FIELD((D_003AE9D0 + var_s0), s32 *, 0x134);
        if (temp_a0 != 0) {
            func_008FD320(temp_a0, M2C_FIELD(D_003AE9D0, s8 *, 0x3D));
            func_001EEDA0(M2C_FIELD((D_003AE9D0 + var_s0), void **, 0x138), (u8) M2C_FIELD(D_003AE9D0, s8 *, 0x3D));
            func_001EEDA0(M2C_FIELD((D_003AE9D0 + var_s0), void **, 0x13C), (u8) M2C_FIELD(D_003AE9D0, s8 *, 0x3D));
        }
        var_s2 += 1;
        var_s0 += 0xC;
    } while (var_s2 < 0x17);
    return temp_s1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F26A0(s32, s8);
extern void func_001F18B0(void *, s8);
M2C_UNK func_008F8800(s8, s16);                     /* extern */
s32 func_008FA910(void *, void *);                  /* extern */
extern void *D_003AE9D0;

s32 func_008F8720(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s8 temp_a0;
    s8 temp_v0;

    temp_v0 = M2C_FIELD(D_003AE9D0, s8 *, 0x5A4);
    if (temp_v0 != 0) {
        M2C_FIELD(D_003AE9D0, s8 *, 0x5A4) = (s8) (temp_v0 - 1);
        return 0;
    }
    temp_a0 = M2C_FIELD(D_003AE9D0, s8 *, 0x5A5);
    if (temp_a0 != -1) {
        func_008F8800(temp_a0, M2C_FIELD(D_003AE9D0, s16 *, 0x5A6));
        M2C_FIELD(D_003AE9D0, s8 *, 0x5A5) = -1;
    }
    temp_s0 = func_008FA910(D_003AE9D0 + 0x52C, D_003AE9D0 + 0x548);
    var_s2 = 0;
    var_s1 = 0;
    do {
        func_001F18B0(M2C_FIELD((D_003AE9D0 + var_s1), void **, 0x578), (s8) M2C_FIELD(D_003AE9D0, u8 *, 0x548));
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0xB);
    func_001F26A0(M2C_FIELD(D_003AE9D0, s32 *, 0x574), (s8) M2C_FIELD(D_003AE9D0, u8 *, 0x548));
    return temp_s0;
}

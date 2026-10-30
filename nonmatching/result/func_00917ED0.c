/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern char D_00591BE4[];
extern void *D_00923FCC;

s32 func_00917ED0(void) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_s1;
    s8 temp_s2;
    u32 temp_a0;
    u32 temp_v1;
    void *temp_a1;

    M2C_FIELD(D_00923FCC, u32 *, 0x20) = (u32) (M2C_FIELD(D_00923FCC, u32 *, 0x20) + 1);
    temp_a1 = D_00923FCC;
    temp_a0 = (*(u8 *)D_00591BE4) * 2;
    temp_v1 = M2C_FIELD(temp_a1, u32 *, 0x20);
    if ((temp_v1 % temp_a0) == 0) {
        temp_a0_2 = M2C_FIELD(temp_a1, s32 *, 0x1C);
        var_s1 = 0;
        if (temp_a0_2 > 0) {
            do {
                temp_v0 = M2C_FIELD(temp_a1, s32 *, 0x1C);
                temp_s2 = ((temp_v0 - var_s1) - 1) < (s32) ((u32) (temp_v1 / temp_a0) % (u32) (temp_a0_2 + 1));
                func_001D7D60(M2C_FIELD((temp_a1 + (((temp_v0 + 1) - var_s1) * 4)), void **, 0x38), temp_s2);
                func_001D7D60(M2C_FIELD((D_00923FCC + ((M2C_FIELD(D_00923FCC, s32 *, 0x1C) - var_s1) * 4)), void **, 0x138), temp_s2 & 0xFF);
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(D_00923FCC, s32 *, 0x1C));
        }
    }
    return 0;
}

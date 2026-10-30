/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B49760(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s64);           /* extern */
extern s32 D_003EAE84;
extern s32 D_003EAE88;
extern s32 D_003EAE8C;

s32 func_00B49910(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s64 temp_a2_2;
    u32 temp_a2;
    u32 temp_v0;

    temp_v0 = func_00B49760();
    if (temp_v0 != 0) {
        temp_a2 = M2C_FIELD(temp_v0, u32 *, 0x14);
        temp_v0_2 = (M2C_FIELD(temp_v0, u32 *, 0x14) / 37) + (temp_a2 >> 0x1F);
        temp_a1 = arg0 * temp_v0_2;
        D_003EAE8C = temp_v0_2;
        temp_v0_3 = temp_a2 - temp_a1;
        temp_a1_2 = (M2C_FIELD(temp_v0, s32 *, 0x18) + temp_a2) - temp_a1;
        D_003EAE88 = temp_v0_3;
        D_003EAE84 = temp_a1_2;
        if (temp_a1_2 >= 0xF423F) {
            D_003EAE84 = 0xF423F;
        }
        if (M2C_FIELD(temp_v0, s32 *, 0x18) >= 0xF423F) {
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0xF423F;
        }
        temp_a2_2 = (s64) ((s64) temp_v0_3 << 0x20) >> 0x20;
        if (temp_a2_2 >= 0) {
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 4), 2, temp_a2_2);
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 8), 4, (s64) D_003EAE84);
            return 0;
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 4), 2, 0);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 8), 4, (s64) M2C_FIELD(temp_v0, s32 *, 0x18));
        func_0026E840(0x8C008007);
        return 1;
    }
    return 1;
}

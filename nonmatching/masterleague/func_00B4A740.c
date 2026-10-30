/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00973C70(s32, void *);                 /* extern */
extern void *D_003EAE90;

s32 func_00B4A740(void) {
    s32 temp_s0;
    u32 temp_v0;
    u8 temp_v0_2;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;

    if (D_003EAE90 != NULL) {
        if (M2C_FIELD(D_003EAE90, s32 *, 0x14C) != 1) {
            temp_v0 = M2C_FIELD(D_003EAE90, u32 *, 0x134);
            if (temp_v0 >= 2U) {
                temp_v0_2 = M2C_FIELD(D_003EAE90, u8 *, 0x138);
                if (temp_v0_2 < (u32) (temp_v0 - 1)) {
                    M2C_FIELD(D_003EAE90, u8 *, 0x138) = (u8) (temp_v0_2 + 1);
                } else {
                    M2C_FIELD(D_003EAE90, u8 *, 0x138) = 0U;
                }
                temp_s1 = D_003EAE90;
                if (temp_s1 != NULL) {
                    temp_s0 = M2C_FIELD(D_003EAE90, u8 *, 0x138) & 0xFF;
                    temp_s2 = temp_s1 + (temp_s0 * 0x10) + 0x30;
                    func_00973C70(M2C_FIELD(temp_s1, s32 *, 0x24), temp_s2);
                    func_00973C70(M2C_FIELD(temp_s1, s32 *, 0x28), temp_s2);
                    temp_s0_2 = temp_s1 + (temp_s0 << 5);
                    func_00973C70(M2C_FIELD(temp_s1, s32 *, 0x1C), temp_s0_2 + 0x80);
                    func_00973C70(M2C_FIELD(temp_s1, s32 *, 0x20), temp_s0_2 + 0x90);
                }
                func_0026E840(0x8400F802);
            }
        }
    }
    return 0;
}

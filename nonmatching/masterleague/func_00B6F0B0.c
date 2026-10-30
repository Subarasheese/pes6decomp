/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern s32 func_001D7BC0(void *);
M2C_UNK func_00972040(s32, u8, u8);                 /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973C70(void *, f32 *);               /* extern */
extern void *D_003EAEF8;

void func_00B6F0B0(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_v1;
    u16 temp_v1_3;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = D_003EAEF8;
    if (temp_s0 != NULL) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0xD8);
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_009720E0(M2C_FIELD(temp_s0, s32 *, 0x14), 0);
            func_00972040(M2C_FIELD(temp_s0, s32 *, 0x14), M2C_FIELD(temp_s0, u8 *, 0x99), 0U);
block_11:
            if (M2C_FIELD(temp_s0, s32 *, 0xD8) != 0) {
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 0);
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0x10), 0);
            } else {
                func_00973C70(M2C_FIELD(temp_s0, void **, 0xC), &sp20);
                func_00973C70(M2C_FIELD(temp_s0, void **, 0x10), &sp30);
                temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x98);
                if (temp_v1_2 != 2) {
                    temp_v1_3 = M2C_FIELD(((temp_v1_2 * 2) + temp_s0), u16 *, 0x9A);
                    if (temp_v1_3 != M2C_FIELD(temp_s0, u16 *, 0xA2)) {
                        if (temp_v1_3 != M2C_FIELD(temp_s0, u16 *, 0xA4)) {
                            func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 1);
                            func_001D7D60(M2C_FIELD(temp_s0, void **, 0x10), 1);
                            func_001D7D80(M2C_FIELD(temp_s0, void **, 0xC), func_001D7BC0(M2C_FIELD(temp_s0, void **, 0x10)));
                            return;
                        }
                        func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 1);
                        func_001D7D60(M2C_FIELD(temp_s0, void **, 0x10), 0);
                        return;
                    }
                    func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 0);
                    func_001D7D60(M2C_FIELD(temp_s0, void **, 0x10), 1);
                    return;
                }
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), 1);
                func_001D7D60(M2C_FIELD(temp_s0, void **, 0x10), 1);
                func_001D7D80(M2C_FIELD(temp_s0, void **, 0xC), func_001D7BC0(M2C_FIELD(temp_s0, void **, 0x10)));
                return;
            }
            break;
        case 0:
            func_009720E0(M2C_FIELD(temp_s0, s32 *, 0x14), 1);
            func_00972040(M2C_FIELD(temp_s0, s32 *, 0x14), 0U, M2C_FIELD(temp_s0, u8 *, 0x98));
            temp_v0 = (M2C_FIELD(temp_s0, u8 *, 0x98) * 0x10) + temp_s0;
            sp20 = M2C_FIELD(temp_v0, f32 *, 0x38);
            sp24 = M2C_FIELD(temp_v0, f32 *, 0x3C);
            sp28 = M2C_FIELD(temp_v0, f32 *, 0x40);
            sp2C = M2C_FIELD(temp_v0, f32 *, 0x44);
            temp_v0_2 = (M2C_FIELD(temp_s0, u8 *, 0x98) * 0x10) + temp_s0;
            sp30 = M2C_FIELD(temp_v0_2, f32 *, 0x68);
            sp34 = M2C_FIELD(temp_v0_2, f32 *, 0x6C);
            sp38 = M2C_FIELD(temp_v0_2, f32 *, 0x70);
            sp3C = M2C_FIELD(temp_v0_2, f32 *, 0x74);
            goto block_11;
        }
    }
}

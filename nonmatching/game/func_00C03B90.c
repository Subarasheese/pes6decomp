/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C03C50();                            /* extern */

void func_00C03B90(void *arg0) {
    s32 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_a0_3;
    void *temp_a0_2;
    void *temp_a1;

    func_00C03C50();
    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_a0) {                              /* irregular */
    case 1:
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(temp_a0_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(temp_a0_2, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(temp_a0_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_a0_2, s32 *, 0x30) = 0;
        M2C_FIELD(temp_a0_2, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_a0_2, s32 *, 0x28) = 0;
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(temp_a0_2, u16 *, 0x16) = temp_v1;
        M2C_FIELD(temp_a0_2, u16 *, 0x14) = temp_v1;
        M2C_FIELD(temp_a0_2, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x1A);
        return;
    case 0:
        temp_a1 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(temp_a1, f32 *, 0xE0) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(temp_a1, f32 *, 0xE8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(temp_a1, s32 *, 0xE4) = 0;
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(temp_a1, s32 *, 0x2C) = temp_v1_2;
        M2C_FIELD(temp_a1, s32 *, 0x28) = temp_v1_2;
        M2C_FIELD(temp_a1, u16 *, 0x26) = temp_v1_2;
        temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x1A);
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0x2E) = temp_a0_3;
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0x2D) = temp_a0_3;
        return;
    }
}

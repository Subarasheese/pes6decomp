/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_001D7BC0(s32);                             /* extern */
M2C_UNK func_001D7BE0(s32, f32 *);                  /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7CE0(s32, f32 *);                  /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_00A7D758;

void func_00985FC0(void) {
    f32 sp40;
    f32 sp44;
    f32 temp_f20;
    f32 temp_f21;
    s16 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;

    temp_s1 = M2C_FIELD(D_00A7D758, s32 *, 0x18);
    temp_s0 = M2C_FIELD(D_00A7D758, s16 *, 0x28);
    if (temp_s0 == ((s64) (func_001D7BC0(temp_s1) << 0x30) >> 0x30)) {
        func_001D7C20(temp_s1, 0);
        func_001D7D60(temp_s1, 0);
        temp_s0_2 = M2C_FIELD(D_00A7D758, s32 *, 0x14);
        func_001D7D80(temp_s0_2, 0);
        temp_f20 = M2C_FIELD(D_00A7D758, f32 *, 0x24);
        temp_f21 = M2C_FIELD(D_00A7D758, f32 *, 0x20);
        func_001D7BE0(temp_s0_2, &sp40);
        sp40 = temp_f21;
        sp44 = temp_f20;
        func_001D7CE0(temp_s0_2, &sp40);
        func_001D7D60(temp_s0_2, 1);
        func_001D7C20(temp_s0_2, 2);
        func_001D7D60(M2C_FIELD(D_00A7D758, s32 *, 0x10), 1);
        if (M2C_FIELD(D_00A7D758, u8 *, 0x1D) == 0) {
            func_0026E840(0x8C04800B);
        } else {
            func_0026E840(0x8404880A);
        }
        M2C_FIELD(D_00A7D758, u8 *, 0x1C) = (u8) (M2C_FIELD(D_00A7D758, u8 *, 0x1C) + 1);
    }
}

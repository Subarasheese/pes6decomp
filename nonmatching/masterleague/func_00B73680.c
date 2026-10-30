/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void * func_001D5A10(s32);
extern u32 func_00B77020(void);
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972040(s32, M2C_UNK, u8);            /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_00B720A0();                            /* extern */
M2C_UNK func_00B727C0(u8);                          /* extern */
M2C_UNK func_00B729E0(u8);                          /* extern */
M2C_UNK func_00B72BC0(s32, s16, s64);               /* extern */
M2C_UNK func_00B72F90();                            /* extern */
M2C_UNK func_00B73110();                            /* extern */

void func_00B73680(void) {
    f32 var_f1;
    s16 temp_a1;
    s32 temp_s0;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u8 temp_s2;
    u8 temp_v0_5;
    u8 temp_v1;
    void *temp_v0_2;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x1032E);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            func_00B73110();
            func_00B72F90();
            temp_s2 = M2C_FIELD(temp_v0, u8 *, 0x3D2);
            temp_v0_3 = func_00B77020();
            if (temp_v0_3 != 0) {
                temp_s0 = temp_s2 & 0xFF;
                if ((temp_s0 < 0) || (temp_s0 >= (s32) M2C_FIELD(temp_v0_3, u8 *, 0x3D1))) {
                    func_00972020(M2C_FIELD(temp_v0_3, s32 *, 0x400), 0);
                    func_00972020(M2C_FIELD(temp_v0_3, s32 *, 0x404), 0);
                }
                temp_v1 = M2C_FIELD(temp_v0_3, u8 *, 0x3CD);
                switch (temp_v1) {                  /* irregular */
                case 2:
                    func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0x400), 0, temp_s0 - M2C_FIELD(temp_v0_3, u8 *, 0x3F3));
                    break;
                case 1:
                    func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0x404), 0, M2C_FIELD(((temp_s2 & 0xFF) + temp_v0_3), u8 *, 0x3D3));
                    break;
                case 0:
                    func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0x400), 0, temp_s0 - M2C_FIELD(temp_v0_3, u8 *, 0x3F3));
                    break;
                }
            }
            temp_v0_4 = func_00B77020();
            if (temp_v0_4 != 0) {
                if ((s32) M2C_FIELD(temp_v0_4, u8 *, 0x3D1) >= 0xC) {
                    func_001F3D10(M2C_FIELD(temp_v0_4, s32 *, 0x38C), 1U);
                    temp_v0_5 = M2C_FIELD(temp_v0_4, u8 *, 0x3D1);
                    if ((s32) temp_v0_5 < 0) {
                        var_f1 = 2.0f * (f32) ((temp_v0_5 >> 1) | (temp_v0_5 & 1));
                    } else {
                        var_f1 = (f32) temp_v0_5;
                    }
                    func_0097F970(M2C_FIELD(temp_v0_4, s32 *, 0x38C), 0, 11.0f / var_f1);
                } else {
                    func_001F3D10(M2C_FIELD(temp_v0_4, s32 *, 0x38C), 0U);
                }
            }
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x3F4);
            func_00B72BC0(-(s32) M2C_FIELD(temp_v0, u8 *, 0x3F3), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
            func_00B727C0(M2C_FIELD(temp_v0, u8 *, 0x3D2));
            func_00B729E0(M2C_FIELD(temp_v0, u8 *, 0x3CD));
            func_00B720A0();
        }
    }
}

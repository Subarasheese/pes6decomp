/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
extern s32 func_001F3D10(s32, u8);
extern void * func_001D5A10(s32);
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_00B74DB0(s32, s16, s64);               /* extern */
M2C_UNK func_00B750D0();                            /* extern */
M2C_UNK func_00B75380();                            /* extern */

void func_00B75DE0(void) {
    f32 var_f1;
    s16 temp_a1;
    u32 temp_v0;
    u32 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v0_2;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x10321);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            func_00B75380();
            func_00B750D0();
            temp_v0_3 = func_00B76A10();
            if (temp_v0_3 != 0) {
                if ((s32) M2C_FIELD(temp_v0_3, u8 *, 0x7A1) >= 0xC) {
                    func_001F3D10(M2C_FIELD(temp_v0_3, s32 *, 0x78C), 1U);
                    temp_v0_4 = M2C_FIELD(temp_v0_3, u8 *, 0x7A1);
                    if ((s32) temp_v0_4 < 0) {
                        var_f1 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
                    } else {
                        var_f1 = (f32) temp_v0_4;
                    }
                    func_0097F970(M2C_FIELD(temp_v0_3, s32 *, 0x78C), 0, 11.0f / var_f1);
                } else {
                    func_001F3D10(M2C_FIELD(temp_v0_3, s32 *, 0x78C), 0U);
                }
            }
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x7C4);
            func_00B74DB0(-(s32) M2C_FIELD(temp_v0, u8 *, 0x7C2), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
        }
    }
}

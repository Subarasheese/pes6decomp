/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_0022BFF0(u8, u8);                        /* extern */
void *func_0022C140(u8);                            /* extern */
void *func_0022C1E0();                              /* extern */
M2C_UNK func_00955C50(u8, u8, s32, s32, M2C_UNK);   /* extern */
extern void *D_003E77B0;

void func_0099E260(void) {
    s32 temp_a2;
    s32 temp_a3;
    u8 temp_a1;
    u8 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_0022C1E0();
    if ((temp_v0 != NULL) && (temp_s0 = M2C_FIELD(temp_v0, u8 *, 1), temp_v0_2 = func_0022C140(temp_s0), (temp_v0_2 != NULL)) && (temp_v0_3 = func_0022BFF0(temp_s0, M2C_FIELD(temp_v0_2, u8 *, 3)), (temp_v0_3 != NULL))) {
        temp_a1 = M2C_FIELD(temp_v0_3, u8 *, 0x16);
        if (((u64) ((s64) temp_a1 << 0x3D) >> 0x3F) != 1) {
            func_00955C50(M2C_FIELD(D_003E77B0, u8 *, 0x2C), M2C_FIELD(D_003E77B0, u8 *, 0x2D), 0, 0, 5);
        } else {
            if (((u64) ((s64) temp_a1 << 0x39) >> 0x3F) != 0) {
                temp_a3 = (M2C_FIELD(temp_v0_3, u8 *, 7) + M2C_FIELD(temp_v0_3, u8 *, 8)) & 0xFFFF;
                temp_a2 = (M2C_FIELD(temp_v0_3, u8 *, 9) + M2C_FIELD(temp_v0_3, u8 *, 0xA)) & 0xFFFF;
                if (((u64) ((s64) temp_a1 << 0x3C) >> 0x3F) != 0) {
                    func_00955C50(M2C_FIELD(D_003E77B0, u8 *, 0x2C), M2C_FIELD(D_003E77B0, u8 *, 0x2D), temp_a2, temp_a3, 0x1D);
                    return;
                }
                func_00955C50(M2C_FIELD(D_003E77B0, u8 *, 0x2C), M2C_FIELD(D_003E77B0, u8 *, 0x2D), temp_a2, temp_a3, 0xD);
                return;
            }
            func_00955C50(M2C_FIELD(D_003E77B0, u8 *, 0x2C), M2C_FIELD(D_003E77B0, u8 *, 0x2D), 0, 0, 0);
        }
    }
}

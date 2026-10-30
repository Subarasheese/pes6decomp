/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B526C0(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */

void func_00B51370(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 temp_a0;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xD15);
        if ((s32) temp_a0 > 0) {
            temp_v1 = arg0 & 0xFF;
            if (temp_v1 < (s32) temp_a0) {
                func_00972040(M2C_FIELD(temp_v0, s32 *, 0xD74), 0, temp_v1 - M2C_FIELD(temp_v0, u8 *, 0xD17));
            }
        }
        if ((u32) (M2C_FIELD(temp_v0, u8 *, 0xD11) - 1) < 2U) {
            temp_v0_2 = func_00B526C0();
            if (temp_v0_2 != 0) {
                temp_s2 = (M2C_FIELD(temp_v0_2, u8 *, 0xD15) - 1) & 0xFF;
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xBD8), 1);
                func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xBDC), 1);
                temp_s1 = arg0 & 0xFF;
                if (temp_s1 <= 0) {
                    func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xBD8), 0);
                }
                if (temp_s1 >= (temp_s2 & 0xFF)) {
                    func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0xBDC), 0);
                }
            }
        }
    }
}

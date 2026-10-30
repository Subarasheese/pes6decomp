/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */

void func_00B6BC90(s32 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x3668);
        switch (temp_a0) {                          /* irregular */
        case 2:
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x3660), 1);
            break;
        case 0:
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x3660), 0);
            temp_a2 = arg0 & 0xFF;
            if (temp_a2 < 0x20) {
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x330C);
                if (((s32) temp_v1 > 0) && (temp_a2 < (s32) temp_v1)) {
                    func_00972040(M2C_FIELD(temp_v0, s32 *, 0x3660), 0, temp_a2 - M2C_FIELD(temp_v0, u8 *, 0x3654));
                    return;
                }
            }
            break;
        }
    }
}

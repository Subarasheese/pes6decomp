/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */

void func_00B74900(s32 arg0) {
    s32 temp_a2;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xBA4);
        switch (temp_a0) {                          /* irregular */
        case 1:
            func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x7D4), 0);
            break;
        case 0:
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x7A1);
            if ((s32) temp_v1 > 0) {
                temp_a2 = arg0 & 0xFF;
                if (temp_a2 < (s32) temp_v1) {
                    func_00972040(M2C_FIELD(temp_v0, s32 *, 0x7D4), 0, temp_a2 - M2C_FIELD(temp_v0, u8 *, 0x7C2));
                    return;
                }
            }
            break;
        }
    }
}

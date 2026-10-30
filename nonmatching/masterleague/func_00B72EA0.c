/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972040(s32, M2C_UNK, u8);            /* extern */

void func_00B72EA0(s32 arg0) {
    s32 temp_s0;
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_s0 = arg0 & 0xFF;
        if ((temp_s0 < 0) || (temp_s0 >= (s32) M2C_FIELD(temp_v0, u8 *, 0x3D1))) {
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x400), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x404), 0);
        }
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3CD);
        switch (temp_a0) {                          /* irregular */
        case 2:
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x400), 0, temp_s0 - M2C_FIELD(temp_v0, u8 *, 0x3F3));
            break;
        case 1:
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x404), 0, M2C_FIELD(((arg0 & 0xFF) + temp_v0), u8 *, 0x3D3));
            return;
        case 0:
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x400), 0, temp_s0 - M2C_FIELD(temp_v0, u8 *, 0x3F3));
            return;
        }
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00AF8180(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u16 temp_a1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0x30);
    temp_s0 = (temp_a1 + (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1C00)) & 0xFFFF;
    if ((temp_v1_2 != 0xBD) && (temp_v1_2 != 0xBC) && (temp_v1_2 != 0xBB) && (temp_v1_2 != 0xB7)) {
        if ((func_009B30B0(arg1, (s32) temp_a1) & 0xFFFF) < 0x71) {
            if ((func_009B30B0(arg1, temp_s0) & 0xFFFF) >= 0x40) {
                return 0;
            }
            goto block_12;
        }
block_12:
        temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v1_3) {                        /* irregular */
        case 0xBE:
        case 0xC5:
        case 0xC4:
        case 0xC3:
        case 0xC2:
        case 0xC7:
        case 0xC6:
        case 0xB6:
            temp_s0_2 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
            if ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < temp_s0_2) {
                M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1C00);
            }
            return 1;
        case 0x16:
        case 0x17:
        case 0x15:
        case 0x13:
        case 0xB7:
        case 0xC8:
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1C00);
            return 1;
        default:
            return 0;
        }
    } else {
        temp_s0_3 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
        if ((func_009B30B0(temp_s0, arg1) & 0xFFFF) < temp_s0_3) {
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1C00);
        }
        return 0;
    }
}

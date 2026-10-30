/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207780(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s16 func_009B3480(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_00A0C770(void *, M2C_UNK);                 /* extern */

void func_00B53660(void *arg0) {
    s16 var_a0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;

    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if ((M2C_FIELD(temp_a1, u16 *, 0x18) != 0xE) && (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30) != 0x3FB) && (M2C_FIELD(temp_a1, s32 *, 0x1C) >= 0x900) && ((func_009B30B0(M2C_FIELD(temp_a1, u16 *, 0x26), M2C_FIELD(temp_a1, u16 *, 0x28)) & 0xFFFF) < 0x21) && (func_00A0C770(M2C_FIELD(arg0, void **, 0), 0x200) != 0)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), 0, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x1DU;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        switch (temp_v1) {                          /* irregular */
        case 0x55:
        case 0x54:
        case 0x53:
        case 0x50:
        case 0x4F:
        case 0x4E:
        case 0x2F:
        case 0x2E:
        case 0x1B:
        case 0x29:
        case 0x28:
        case 0x27:
        case 0x26:
        case 0x25:
        case 0x24:
        case 0x23:
        case 0x22:
        case 0x1A:
        case 0x19:
        case 0x17:
        case 0x38:
        case 0x1D:
        case 0x15:
        case 0x14:
        case 0x11:
        case 0x10:
        case 0xF:
        case 0xE:
        case 0xC:
        case 0xB:
        case 0xA:
        case 0x9:
        case 0x8:
        case 0x6:
        case 0x3:
        case 0x2:
        case 0x1:
        case 0x0:
            var_a0 = 0xF;
block_54:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
            break;
        case 0x3A:
        case 0x39:
        case 0x30:
        case 0x12:
        case 0xD:
        case 0x5:
            var_a0 = 0x11;
            goto block_54;
        case 0x13:
            var_a0 = 0x14;
            goto block_54;
        }
        return;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_a0, u16 *, 0x18) == 0xE) {

    } else if (func_00A0C770(temp_a0, 0x100) != 0) {
        temp_a1_2 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u16 *, 0x30) == 0x3FB) {
            M2C_FIELD(temp_a1_2, s32 *, 0x1C) = 0;
        } else {
            M2C_FIELD(temp_a1_2, s32 *, 0x1C) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x3C) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x40) = 0;
            func_00207780(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x1BF, 0, 6);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), 0, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = 0xEU;
        }
    }
}

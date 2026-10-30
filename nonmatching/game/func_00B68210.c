/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207780(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s16 func_009B3480(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_00A0C770(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00B67AD0(void *, M2C_UNK);             /* extern */

void func_00B68210(void *arg0) {
    u16 temp_a0;
    u16 temp_a0_3;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;

    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_a1, u16 *, 0x18) != 7) {
        temp_a0 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30);
        if ((temp_a0 != 0x3FB) && (temp_a0 != 0x46C) && (M2C_FIELD(temp_a1, s32 *, 0x1C) >= 0x900) && ((func_009B30B0(M2C_FIELD(temp_a1, u16 *, 0x26), M2C_FIELD(temp_a1, u16 *, 0x28)) & 0xFFFF) < 0x21) && (func_00A0C770(M2C_FIELD(arg0, void **, 0), 0x200) != 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), 0, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x26;
            func_00B67AD0(arg0, 0x26);
            return;
        }
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_a0_2, u16 *, 0x18) == 7) {

    } else if (func_00A0C770(temp_a0_2, 0x100) != 0) {
        temp_a1_2 = M2C_FIELD(arg0, void **, 0);
        temp_a0_3 = M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u16 *, 0x30);
        if ((temp_a0_3 != 0x3FB) && (temp_a0_3 != 0x46C)) {
            M2C_FIELD(temp_a1_2, s32 *, 0x1C) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x3C) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x40) = 0;
            func_00207780(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x1BF, 0, 6);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), 0, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = 7U;
        } else {
            M2C_FIELD(temp_a1_2, s32 *, 0x1C) = 0;
        }
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD45B0(u16);                             /* extern */
u16 func_00BD4780(s8, void *, void *);              /* extern */

void func_00BD3BE0(void *arg0, s8 arg1) {
    s32 temp_s0;
    u16 temp_s1;
    u8 temp_a0;
    void *temp_a2;
    void *temp_a3;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = arg1 & 0xFF;
    temp_a3 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = M2C_FIELD(M2C_FIELD(temp_a3, void **, 4), u16 *, 0x30);
    if (M2C_FIELD(temp_a2, u8 *, 0xC) != temp_s0) {
        temp_a0 = M2C_FIELD(temp_a2, u8 *, 0x12);
        if ((temp_a0 != 2) && (temp_a0 != 1)) {
            M2C_FIELD(temp_a3, s16 *, 0x3C) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xC) = arg1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) = func_00BD4780(arg1, temp_a2, temp_a3);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xD) = 7;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
        } else {
            M2C_FIELD(temp_a2, s8 *, 0xD) = arg1;
        }
    } else {
        M2C_FIELD(temp_a2, s8 *, 0xD) = 7;
    }
    if ((temp_s0 == 1) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) != (temp_s1 & 0xFFFF)) && ((func_00BD45B0(temp_s1) & 0xFF) == 1)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) = temp_s1;
    }
}

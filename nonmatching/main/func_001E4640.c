/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001E4640(void *arg0) {
    u16 temp_v1_2;
    u8 temp_v1;
    void *var_v1;

    if (M2C_FIELD(arg0, u8 *, 0x71) == 0) {
        var_v1 = M2C_FIELD(arg0, void **, 8);
        do {
            M2C_FIELD(var_v1, s8 *, 0x93) = 0;
            var_v1 = M2C_FIELD(var_v1, void **, 0);
        } while (var_v1 != NULL);
        M2C_FIELD(arg0, s8 *, 0x79) = 0;
        M2C_FIELD(arg0, u8 *, 0x71) = 1U;
    } else {
        M2C_FIELD(arg0, s8 *, 0x79) = 1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 0x93) = (u8) M2C_FIELD(arg0, u8 *, 0x6F);
    M2C_FIELD(arg0, u8 *, 0x6F) = (u8) (M2C_FIELD(arg0, u8 *, 0x6F) + M2C_FIELD(arg0, u8 *, 0x70));
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x6E) + 1;
    M2C_FIELD(arg0, u8 *, 0x6E) = temp_v1;
    if ((temp_v1 & 0xFF) >= (s32) M2C_FIELD(arg0, u8 *, 0x6D)) {
        M2C_FIELD(arg0, u8 *, 0x6E) = 0U;
        M2C_FIELD(arg0, u8 *, 0x6F) = 0U;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 0x93) = 0xFFU;
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x72) + 1;
        M2C_FIELD(arg0, u16 *, 0x72) = temp_v1_2;
        if ((s32) M2C_FIELD(arg0, u16 *, 0x44) < (temp_v1_2 & 0xFFFF)) {
            M2C_FIELD(arg0, s8 *, 0x6C) = 0;
        } else {
            M2C_FIELD(arg0, void **, 0x68) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), void **, 0);
        }
    }
}

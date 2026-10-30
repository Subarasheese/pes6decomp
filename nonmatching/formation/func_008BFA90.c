/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_008BFA90(void *arg0, void *arg1) {
    s32 var_a1;
    s32 var_a4;
    s32 var_a5;
    u8 temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *var_a2;
    void *var_a3;
    void *var_a3_2;

    func_001C48E8(0, 0x188);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    var_a5 = 0;
    var_a4 = 0;
    var_a3 = arg0;
    do {
        temp_a2 = arg1 + var_a5;
        temp_a1 = arg0 + var_a5;
        temp_a0 = M2C_FIELD(temp_a2, u8 *, 0x766);
        var_a5 += 1;
        M2C_FIELD(temp_a1, u8 *, 5) = temp_a0;
        M2C_FIELD(temp_a1, u8 *, 0x25) = (u8) M2C_FIELD(temp_a2, u8 *, 0x33);
        M2C_FIELD(temp_a1, s8 *, 0x45) = 0;
        M2C_FIELD(temp_a1, u8 *, 0x65) = (u8) M2C_FIELD(temp_a2, u8 *, 0x193);
        M2C_FIELD(var_a3, s32 *, 0xA8) = (s32) (M2C_FIELD(arg1, s32 *, 0x2F4) + var_a4);
        var_a4 += 0x2C;
        var_a3 += 4;
        M2C_FIELD(temp_a1, u8 *, 0x85) = (u8) M2C_FIELD(temp_a2, u8 *, 0x173);
        M2C_FIELD(temp_a1, u8 *, 0x147) = (u8) M2C_FIELD(temp_a2, u8 *, 0x93);
        M2C_FIELD(temp_a1, u8 *, 0x167) = (u8) M2C_FIELD(temp_a2, u8 *, 0xB3);
    } while (var_a5 < 0x20);
    var_a1 = 0;
    var_a3_2 = arg1;
    var_a2 = arg0;
    do {
        M2C_FIELD((arg0 + var_a1), u8 *, 0x128) = (u8) M2C_FIELD((arg1 + var_a1), u8 *, 0x7EA);
        if (var_a1 > 0) {
            M2C_FIELD(var_a2, u8 *, 0x131) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x7D4);
            M2C_FIELD(var_a2, u8 *, 0x132) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x7D5);
        }
        var_a1 += 1;
        var_a3_2 += 2;
        var_a2 += 2;
    } while (var_a1 < 0xB);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 5);
}

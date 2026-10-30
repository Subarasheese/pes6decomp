/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001900A0(void *arg0) {
    u8 spC;
    u8 spD;
    u8 spE;
    u8 spF;
    f32 temp_f1;
    f32 temp_f2;
    s32 var_a1;
    u8 temp_a1;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1C);
    if (!(temp_f2 <= 0.6f)) {
        spF = 0xFF;
    } else {
        temp_f1 = 425.0f * temp_f2;
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_a1 = (s32) temp_f1;
        } else {
            var_a1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        }
        spF = var_a1 & 0xFF;
    }
    temp_a1 = spF;
    spC = 0xEF;
    spD = 0xEF;
    spE = 0xEF;
    M2C_FIELD(arg0, u8 *, 0x24) = spC;
    M2C_FIELD(arg0, u8 *, 0x25) = spD;
    M2C_FIELD(arg0, u8 *, 0x26) = spE;
    M2C_FIELD(arg0, u8 *, 0x27) = spF;
    M2C_FIELD(arg0, u8 *, 0x30) = spC;
    M2C_FIELD(arg0, u8 *, 0x31) = spD;
    M2C_FIELD(arg0, u8 *, 0x32) = spE;
    M2C_FIELD(arg0, u8 *, 0x33) = spF;
    M2C_FIELD(arg0, s8 *, 0x28) = 0xC6;
    M2C_FIELD(arg0, s8 *, 0x29) = 0xC6;
    M2C_FIELD(arg0, s8 *, 0x2A) = 0xC6;
    M2C_FIELD(arg0, u8 *, 0x2B) = temp_a1;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0xB4;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0xB4;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0xB4;
    M2C_FIELD(arg0, u8 *, 0x2F) = temp_a1;
}

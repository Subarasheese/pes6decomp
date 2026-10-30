/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E74A8;
extern u8 D_003E74A9;
extern u8 D_003E74AA;
extern u8 D_003E74AB;

void func_001E4E60(void *arg0, void *arg1) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a1_4;

    if (!(M2C_FIELD(arg0, u8 *, 0xA4) & 1)) {
        M2C_FIELD(arg0, u8 *, 0x90) = (u8) M2C_FIELD(arg1, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x91) = (u8) M2C_FIELD(arg1, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x92) = (u8) M2C_FIELD(arg1, u8 *, 2);
    } else {
        M2C_FIELD(arg0, u8 *, 0x90) = (u8) D_003E74A8;
        M2C_FIELD(arg0, u8 *, 0x91) = (u8) D_003E74A9;
        M2C_FIELD(arg0, u8 *, 0x92) = (u8) D_003E74AA;
        M2C_FIELD(arg0, u8 *, 0x93) = (u8) D_003E74AB;
    }
    M2C_FIELD(arg0, u8 *, 0x93) = M2C_FIELD(arg1, u8 *, 3);
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x90);
    if (temp_a1 != 0xFF) {
        var_v1 = (s32) temp_a1 >> 1;
    } else {
        var_v1 = 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0x98) = (s8) var_v1;
    temp_a1_2 = M2C_FIELD(arg0, u8 *, 0x91);
    if (temp_a1_2 != 0xFF) {
        var_v1_2 = (s32) temp_a1_2 >> 1;
    } else {
        var_v1_2 = 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0x99) = (s8) var_v1_2;
    temp_a1_3 = M2C_FIELD(arg0, u8 *, 0x92);
    if (temp_a1_3 != 0xFF) {
        var_v1_3 = (s32) temp_a1_3 >> 1;
    } else {
        var_v1_3 = 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0x9A) = (s8) var_v1_3;
    temp_a1_4 = M2C_FIELD(arg0, u8 *, 0x93);
    if (temp_a1_4 != 0xFF) {
        var_v1_4 = (s32) temp_a1_4 >> 1;
    } else {
        var_v1_4 = 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0x9B) = (s8) var_v1_4;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0x3F800000;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 D_003E9F58;
extern f32 D_003E9F5C;
extern f32 D_003E9F60;

s32 func_00349770(void *arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f0_2;

    switch (arg1) {                                 /* irregular */
    case 2:
        M2C_FIELD(arg0, s8 *, 0x17) = 0;
        func_001C48E8(arg0 + 0x18, 0, 0x10);
        break;
    case 1:
        M2C_FIELD(arg0, s8 *, 0) = 0xFF;
        M2C_FIELD(arg0, s8 *, 1) = 0xFF;
        M2C_FIELD(arg0, s8 *, 2) = 0xFF;
        M2C_FIELD(arg0, s8 *, 3) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x12) = 1;
        M2C_FIELD(arg0, s8 *, 0x11) = 1;
        M2C_FIELD(arg0, s8 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s8 *, 7) = 0;
        M2C_FIELD(arg0, s8 *, 0x14) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x13) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
        M2C_FIELD(arg0, s8 *, 0x15) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x16) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x17) = 0;
        func_001C48E8(arg0 + 0x18, 0, 0x10);
        func_001C48E8(arg0 + 9, 0, 8);
        M2C_FIELD(arg0, s8 *, 0x3C) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x3D) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x3E) = 0;
        M2C_FIELD(arg0, s8 *, 0x3F) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x40) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x41) = 0;
        M2C_FIELD(arg0, s8 *, 0x42) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x43) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x44) = 0;
        M2C_FIELD(arg0, s8 *, 0x45) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x46) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x47) = 0;
        M2C_FIELD(arg0, s8 *, 0x48) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x49) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x4A) = 0;
        break;
    case 3:
        M2C_FIELD(arg0, s8 *, 0x17) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
        break;
    }
    if (func_00341910(0, 5, 0xA) != 0) {
        var_f0 = 1.0f;
    } else {
        var_f0 = 0.0f;
    }
    D_003E9F60 = var_f0;
    if (func_00341910(0, 5, 0xA) == 0) {
        var_f0_2 = 4.0f;
    } else {
        var_f0_2 = 3.0f;
    }
    D_003E9F5C = var_f0_2;
    func_00341910(0, 5, 0xA);
    D_003E9F58 = 0x40800000;
    return 1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern u8 func_00BF6270(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B35E10(void *, void *, void *);      /* extern */
M2C_UNK func_00B9E5D0(void *);                      /* extern */
s32 func_00BAC710(u16);                             /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00BE7BC0(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    u8 temp_s0;
    void *temp_v0_2;

    var_s0 = 0;
    func_00B2ACF0();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 1;
    temp_v0 = func_00BAC710(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30));
    switch (temp_v0) {                              /* irregular */
    case 0x0:
        var_s0 = 0x132;
        break;
    case 0x1:
        var_s0 = 0xAA;
        break;
    case 0x25:
    case 0x24:
        var_s0 = 0x28;
        break;
    case 0x43:
    case 0x42:
        var_s0 = 0xC8;
        break;
    case 0x5C:
    case 0x5B:
        var_s0 = 0x12C;
        break;
    case 0x94:
    case 0x93:
        var_s0 = 0x12C;
        break;
    case 0xFD:
    case 0xFC:
        var_s0 = 0xC8;
        break;
    case 0x100:
    case 0xFF:
        var_s0 = 0xD2;
        break;
    case 0x177:
    case 0x176:
    case 0x179:
    case 0x178:
    case 0x16D:
    case 0x16C:
    case 0x16F:
    case 0x16E:
    case 0x181:
    case 0x180:
    case 0x183:
    case 0x182:
    case 0x172:
    case 0x171:
    case 0x174:
    case 0x173:
    case 0x168:
    case 0x167:
    case 0x16A:
    case 0x169:
    case 0x17C:
    case 0x17B:
    case 0x17E:
    case 0x17D:
        var_s0 = 0x28;
        break;
    case 0x1A1:
    case 0x198:
        var_s0 = 0xAA;
        break;
    case 0x19E:
    case 0x19D:
        var_s0 = 0xD2;
        break;
    case 0x1A0:
    case 0x19F:
        var_s0 = 0xB4;
        break;
    case 0x19A:
    case 0x199:
        var_s0 = 0xAA;
        break;
    case 0x19C:
    case 0x19B:
        var_s0 = 0xAA;
        break;
    case 0x1C9:
    case 0x1C8:
        var_s0 = 0x15E;
        break;
    }
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) == 0) {
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_s0) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
        if (temp_s0 == func_00BF6270()) {
            func_00B9E5D0(arg0);
        } else {
            temp_v0_2 = M2C_FIELD(arg0, void **, 0);
            func_00B35E10(arg0, temp_v0_2 + 0x6C, temp_v0_2 + 0x70);
            func_00BD4040(arg0, 2);
            func_00BD3BA0(arg0, 5, 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x80;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x51) = 0xFF;
        }
    }
}

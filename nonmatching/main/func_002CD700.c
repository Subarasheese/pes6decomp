/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00591DE1[];
extern char D_00591DE5[];

void func_002CD700(void *arg0) {
    u8 *var_a6;
    u16 h5a;
    u16 h5c;
    u8 b5b;
    u8 b5d;
    u8 b5d_2;

    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        var_a6 = (u8 *)D_00591DE5;
    } else {
        var_a6 = (u8 *)D_00591DE1;
    }
    M2C_FIELD(arg0, u8 *, 0x38) = (M2C_FIELD(arg0, u8 *, 0x38) & ~0x1F) | ((var_a6[0] >> 3) & 0x1F);
    M2C_FIELD(arg0, u16 *, 0x38) = (M2C_FIELD(arg0, u16 *, 0x38) & ~0x3E0) | (((var_a6[1] >> 3) & 0x1F) << 5);
    M2C_FIELD(arg0, u8 *, 0x39) = (M2C_FIELD(arg0, u8 *, 0x39) & ~0x7C) | (((var_a6[2] >> 3) & 0x1F) << 2);
    M2C_FIELD(arg0, u8 *, 0x39) = (M2C_FIELD(arg0, u8 *, 0x39) & ~0x80) | 0x80;
    h5a = (M2C_FIELD(arg0, u16 *, 0x5A) & ~0x3E0) | ((0 & 0x1F) << 5);
    M2C_FIELD(arg0, u16 *, 0x5A) = h5a;
    b5b = (M2C_FIELD(arg0, u8 *, 0x5B) & ~0x7C) | ((((h5a >> 5) & 0x1F)) << 2);
    M2C_FIELD(arg0, u8 *, 0x5B) = b5b;
    M2C_FIELD(arg0, u8 *, 0x5A) = (M2C_FIELD(arg0, u8 *, 0x5A) & ~0x1F) | ((b5b >> 2) & 0x1F);
    h5c = (M2C_FIELD(arg0, u16 *, 0x5C) & ~0x3E0) | 0x3E0;
    M2C_FIELD(arg0, u16 *, 0x5C) = h5c;
    b5d = (M2C_FIELD(arg0, u8 *, 0x5D) & ~0x7C) | ((((h5c >> 5) & 0x1F)) << 2);
    M2C_FIELD(arg0, u8 *, 0x5D) = b5d;
    M2C_FIELD(arg0, u8 *, 0x5C) = (M2C_FIELD(arg0, u8 *, 0x5C) & ~0x1F) | ((b5d >> 2) & 0x1F);
    b5d_2 = (M2C_FIELD(arg0, u8 *, 0x5D) & ~0x80) | 0x80;
    M2C_FIELD(arg0, u8 *, 0x5D) = b5d_2;
    M2C_FIELD(arg0, u8 *, 0x5B) = (M2C_FIELD(arg0, u8 *, 0x5B) & ~0x80) | (((b5d_2 >> 7) & 1) << 7);
    M2C_FIELD(arg0, s8 *, 0x10) = 2;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 8;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 1;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0xC0;
    M2C_FIELD(arg0, s8 *, 0x11) = 1;
}

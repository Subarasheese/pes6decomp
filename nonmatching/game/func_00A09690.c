/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00287230(void *, s32, void *);

u16 func_00A09690(void *arg0) {
    void *temp_a2;
    u16 t;
    u16 temp_v0;
    s32 var_v0;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    t = M2C_FIELD(temp_a2, u16 *, 0x30);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x26);
    if (t == 0xBC ||
        t == 0x49 ||
        t == 0x24 ||
        t == 0x2B5 ||
        t == 0x38E ||
        t == 0x2C6 ||
        t == 0x1C ||
        t == 0x228 ||
        t == 0x2D6 ||
        t == 0x2D7 ||
        t == 0x5C ||
        t == 0x63 ||
        t == 0x59 ||
        t == 0x5A ||
        t == 0x4F ||
        t == 0x2FE ||
        t == 0x30E) {
        var_v0 = func_00287230(arg0, 6, temp_a2);
        return var_v0 & 0xFFFF;
    }
    if (t == 0x16E ||
        t == 0x2FA) {
        var_v0 = (temp_v0 & 0xFFFF) + (((M2C_FIELD(temp_a2, u8 *, 0x2D) != 0) ? -1 : 1) * 0x5000);
        return var_v0 & 0xFFFF;
    }
    if (t == 0x313 ||
        t == 0x16F ||
        t == 0xC0 ||
        t == 0x236 ||
        t == 0x30C ||
        t == 0x306 ||
        t == 0x2D8 ||
        t == 0x2D9 ||
        t == 0x2E5 ||
        t == 0x36 ||
        t == 0x5B ||
        t == 0xC8 ||
        t == 0xB7 ||
        t == 0x3 ||
        t == 0xC1 ||
        t == 0x130 ||
        t == 0x39 ||
        t == 0x3A ||
        t == 0x1F ||
        t == 0x235 ||
        t == 0x56 ||
        t == 0x1D ||
        t == 0x3E ||
        t == 0x4C ||
        t == 0x4A ||
        t == 0x10B ||
        t == 0x4D ||
        t == 0x3D ||
        t == 0x58 ||
        t == 0x2E) {
        var_v0 = func_00287230(arg0, 0, temp_a2);
        return var_v0 & 0xFFFF;
    }
    return temp_v0;
}

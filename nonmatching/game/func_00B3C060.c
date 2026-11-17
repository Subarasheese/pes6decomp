/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00B3C060(void *arg0) {
    s32 v;
    u8 t;

    t = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4E);
    v = 0;
    if (t == 0 || t == 4 || t == 6 || t == 7 || t == 0x20 || t == 0x24 || t == 0x26 || t == 0x27 || t == 0x30 || t == 0x34 || t == 0x36 || t == 0x37) {
        v = 0;
    } else if (t == 0x38 || t == 0x3C || t == 0x3E || t == 0x3F) {
        v = 2;
    } else if (t == 0x78 || t == 0x7C || t == 0x7E || t == 0x7F) {
        v = 1;
    } else {
        v = 0xFF;
    }
    if (t == 0 || t == 0x20 || t == 0x30 || t == 0x38 || t == 0x78 || t == 4 || t == 0x24 || t == 0x34 || t == 0x3C || t == 0x7C) {
        return v;
    }
    if (t == 6 || t == 0x26 || t == 0x36 || t == 0x3E || t == 0x7E) {
        return (v | 0x10) & 0xFF;
    }
    if (t == 7 || t == 0x27 || t == 0x37 || t == 0x3F || t == 0x7F) {
        return (v | 8) & 0xFF;
    }
    return 0xFF;
}

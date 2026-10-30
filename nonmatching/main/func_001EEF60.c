/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001EEF60(void *arg0, void *arg1) {
    s32 var_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if ((M2C_FIELD(arg0, u8 *, 0xA0) == M2C_FIELD(arg1, u8 *, 0)) && (M2C_FIELD(arg0, u8 *, 0xA1) == M2C_FIELD(arg1, u8 *, 1)) && (M2C_FIELD(arg0, u8 *, 0xA2) == M2C_FIELD(arg1, u8 *, 2)) && (M2C_FIELD(arg0, u8 *, 0xA3) == M2C_FIELD(arg1, u8 *, 3)) && (M2C_FIELD(arg0, u8 *, 0xA4) == M2C_FIELD(arg1, u8 *, 4)) && (M2C_FIELD(arg0, u8 *, 0xA5) == M2C_FIELD(arg1, u8 *, 5)) && (M2C_FIELD(arg0, u8 *, 0xA6) == M2C_FIELD(arg1, u8 *, 6)) && (M2C_FIELD(arg0, u8 *, 0xA7) == M2C_FIELD(arg1, u8 *, 7)) && (M2C_FIELD(arg0, u8 *, 0xA8) == M2C_FIELD(arg1, u8 *, 8)) && (M2C_FIELD(arg0, u8 *, 0xA9) == M2C_FIELD(arg1, u8 *, 9)) && (M2C_FIELD(arg0, u8 *, 0xAA) == M2C_FIELD(arg1, u8 *, 0xA)) && (M2C_FIELD(arg0, u8 *, 0xAB) == M2C_FIELD(arg1, u8 *, 0xB)) && (M2C_FIELD(arg0, u8 *, 0xAC) == M2C_FIELD(arg1, u8 *, 0xC)) && (M2C_FIELD(arg0, u8 *, 0xAD) == M2C_FIELD(arg1, u8 *, 0xD)) && (M2C_FIELD(arg0, u8 *, 0xAE) == M2C_FIELD(arg1, u8 *, 0xE)) && (M2C_FIELD(arg0, u8 *, 0xAF) == M2C_FIELD(arg1, u8 *, 0xF))) {
            return;
        }
        M2C_FIELD(arg0, u8 *, 0xA0) = (u8) M2C_FIELD(arg1, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xA1) = (u8) M2C_FIELD(arg1, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0xA2) = (u8) M2C_FIELD(arg1, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0xA3) = (u8) M2C_FIELD(arg1, u8 *, 3);
        M2C_FIELD(arg0, u8 *, 0xA4) = (u8) M2C_FIELD(arg1, u8 *, 4);
        M2C_FIELD(arg0, u8 *, 0xA5) = (u8) M2C_FIELD(arg1, u8 *, 5);
        M2C_FIELD(arg0, u8 *, 0xA6) = (u8) M2C_FIELD(arg1, u8 *, 6);
        M2C_FIELD(arg0, u8 *, 0xA7) = (u8) M2C_FIELD(arg1, u8 *, 7);
        M2C_FIELD(arg0, u8 *, 0xA8) = (u8) M2C_FIELD(arg1, u8 *, 8);
        M2C_FIELD(arg0, u8 *, 0xA9) = (u8) M2C_FIELD(arg1, u8 *, 9);
        M2C_FIELD(arg0, u8 *, 0xAA) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
        M2C_FIELD(arg0, u8 *, 0xAB) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
        M2C_FIELD(arg0, u8 *, 0xAC) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
        M2C_FIELD(arg0, u8 *, 0xAD) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
        M2C_FIELD(arg0, u8 *, 0xAE) = (u8) M2C_FIELD(arg1, u8 *, 0xE);
        M2C_FIELD(arg0, u8 *, 0xAF) = (u8) M2C_FIELD(arg1, u8 *, 0xF);
        M2C_FIELD(arg0, u8 *, 0x11E) = (u8) (M2C_FIELD(arg0, u8 *, 0x11E) | 2);
    }
}

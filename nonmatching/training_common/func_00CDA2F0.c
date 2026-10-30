/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00CDA2F0(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x90) = 0x43;
        M2C_FIELD(arg0, u8 *, 0x94) = (u8) M2C_FIELD(arg1, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x95) = (u8) M2C_FIELD(arg1, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x96) = (u8) M2C_FIELD(arg1, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x97) = (u8) M2C_FIELD(arg1, u8 *, 3);
        M2C_FIELD(arg0, s16 *, 0xA4) = 0x43;
        M2C_FIELD(arg0, u8 *, 0xA8) = (u8) M2C_FIELD(arg1, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xA9) = (u8) M2C_FIELD(arg1, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0xAA) = (u8) M2C_FIELD(arg1, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0xAB) = (u8) M2C_FIELD(arg1, u8 *, 3);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0x63;
        M2C_FIELD(arg0, u8 *, 0xBC) = (u8) M2C_FIELD(arg1, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xBD) = (u8) M2C_FIELD(arg1, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0xBE) = (u8) M2C_FIELD(arg1, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0xBF) = (u8) M2C_FIELD(arg1, u8 *, 3);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x90) = 0x73;
    M2C_FIELD(arg0, s16 *, 0xA4) = 0x73;
}

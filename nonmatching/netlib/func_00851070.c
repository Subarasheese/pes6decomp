/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00851070(void *arg0, void *arg1, u8 arg2) {
    u8 temp_v1;
    u8 var_v1;

    M2C_FIELD(arg0, u8 *, 0x12) = (u8) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, u8 *, 0x13) = arg2;
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x13);
    switch (temp_v1) {                              /* irregular */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x14) = 0x14;
        M2C_FIELD(arg0, s8 *, 0x17) = 1;
        var_v1 = M2C_FIELD(arg0, u8 *, 0x12) - 1 + (arg2 * 4);
        break;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x14) = 0x14;
        M2C_FIELD(arg0, s8 *, 0x17) = 0;
        var_v1 = M2C_FIELD(arg0, u8 *, 0x12) - 1 + (arg2 * 4);
        break;
    default:
        var_v1 = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x14) = 0x3C;
        M2C_FIELD(arg0, s8 *, 0x17) = 0;
        break;
    }
    M2C_FIELD(arg0, u8 *, 0x19) = var_v1;
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
    M2C_FIELD(arg0, s8 *, 0x16) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

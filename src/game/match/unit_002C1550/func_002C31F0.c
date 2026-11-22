/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005E3420[];

void func_002C31F0(char *arg0, s32 arg1) {
    s32 var_a3;
    char *var_a0;
    char *var_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_a2 = ((char *)D_005E3420) + ((arg1 & 0xFF) * 0x30);
    do {
        var_a3 += 1;
        M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_a2, u8 *, 0x180);
        M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_a2, u8 *, 0x181);
        M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_a2, u8 *, 0x182);
        M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, u8 *, 0x183);
        M2C_FIELD(var_a0, s32 *, 0x10) = (s32) M2C_FIELD(var_a2, u8 *, 0x184);
        M2C_FIELD(var_a0, s32 *, 0x14) = (s32) M2C_FIELD(var_a2, u8 *, 0x185);
        var_a2 += 6;
        var_a0 += 0x18;
    } while (var_a3 < 8);
}

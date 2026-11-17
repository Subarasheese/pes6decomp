/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_0021F710(s32);
s32 func_002EDF80(s32);
s32 func_002EE060(s32);
s32 func_002EE160(s32);
s32 func_002F8250(s32, s32);
s32 func_002F8270(s32, s32);
s32 func_002F8290(s32, s32);

void func_00268280(s32 arg0, char *arg1) {
    s32 i;
    u32 v;
    char *p;

    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    v = arg0 & 0xFFFF;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    M2C_FIELD(arg1, s32 *, 0x20) = 0;
    M2C_FIELD(arg1, s32 *, 0x24) = 0;
    M2C_FIELD(arg1, s32 *, 0x38) = -1;
    M2C_FIELD(arg1, s32 *, 0x28) = 0;
    M2C_FIELD(arg1, s32 *, 0x30) = 0;
    M2C_FIELD(arg1, s32 *, 0x3C) = -1;
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    M2C_FIELD(arg1, s32 *, 0x34) = 0;
    M2C_FIELD(arg1, s32 *, 0x48) = 0;
    M2C_FIELD(arg1, s16 *, 0x4C) = arg0;
    if (v < 0xCC || (v - 0x126) < 2U) {
        M2C_FIELD(arg1, s32 *, 0x48) = 1;
        p = arg1;
        for (i = 0; i < 2; i++) {
            M2C_FIELD(p, s32 *, 0) = func_002F8290(arg0, i);
            M2C_FIELD(p, s32 *, 0x38) = func_0021F710(arg0);
            M2C_FIELD(p, s32 *, 0x28) = func_002EE160(M2C_FIELD(p, s32 *, 0x38));
            M2C_FIELD(p, s32 *, 0x30) = func_002EE060(M2C_FIELD(p, s32 *, 0x38));
            M2C_FIELD(p, s32 *, 0x40) = func_002EDF80(M2C_FIELD(p, s32 *, 0x38));
            p += 4;
        }
        p = arg1;
        for (i = 0; i < 4; i++) {
            M2C_FIELD(p, s32 *, 8) = func_002F8270(arg0, i);
            p += 4;
        }
        for (i = 0; i < 4; i++) {
            M2C_FIELD(arg1, s32 *, 0x18) = func_002F8250(arg0, i);
            arg1 += 4;
        }
    }
}

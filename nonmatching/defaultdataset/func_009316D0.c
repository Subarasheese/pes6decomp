/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00221210(int, int, int, int);
void func_009316D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_00221210(arg0, arg1, arg2, arg3);
    M2C_FIELD(temp_v0, s8 *, 0) = 1;
    M2C_FIELD(temp_v0, s8 *, 1) = 2;
    M2C_FIELD(temp_v0, s8 *, 2) = 1;
    M2C_FIELD(temp_v0, s8 *, 3) = 0;
    M2C_FIELD(temp_v0, s8 *, 4) = 0;
    M2C_FIELD(temp_v0, s8 *, 5) = 3;
    M2C_FIELD(temp_v0, s8 *, 6) = 1;
    M2C_FIELD(temp_v0, s8 *, 7) = 1;
    M2C_FIELD(temp_v0, s8 *, 8) = 2;
    M2C_FIELD(temp_v0, s8 *, 9) = 2;
    M2C_FIELD(temp_v0, s8 *, 0xA) = 3;
    M2C_FIELD(temp_v0, s8 *, 0xB) = 3;
    M2C_FIELD(temp_v0, s8 *, 0xC) = 3;
    M2C_FIELD(temp_v0, s8 *, 0xD) = 0x24;
    M2C_FIELD(temp_v0, s8 *, 0xE) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xF) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x10) = 0xA;
    M2C_FIELD(temp_v0, s8 *, 0x13) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x15) = 0;
}

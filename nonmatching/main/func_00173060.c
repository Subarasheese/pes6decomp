/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00172FC8(int, int, int, int);
void func_00173060(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 4) = 0x800;
    temp_v0 = func_00172FC8(arg0 + 0x1C, arg1, arg2, arg3);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    M2C_FIELD(arg0, s8 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) ((temp_v0 + temp_v1) - 1) / temp_v1);
}

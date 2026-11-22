/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_001B2AF8(void *, s16, s16, s32);

extern s32 func_001B2CC8;

void func_001B2D08(void *arg0) {
    void *temp_s1;

    temp_s1 = ((s8 *)arg0) + 0x1E4;
    M2C_FIELD(arg0, s32 **, 0x3C) = &func_001B2CC8;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    func_001B2AF8(temp_s1, 4, 0, (s32) arg0);
    func_001B2AF8(((s8 *)arg0) + 0x23C, 9, 1, (s32) arg0);
    func_001B2AF8(((s8 *)arg0) + 0x294, 0xA, 2, (s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, void **, 0x1E0) = temp_s1;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 3;
}

/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern void func_00BA1198(void *, s32, s32, s32);

M2C_UNK func_00BA14B0(void *);

void func_00BB9120(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 8;
    func_00BA14B0(temp_s1);
    func_00BA1198(temp_s1, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = -1;
    func_001C48E8(arg0 + 0x48, 0, 0x80);
}

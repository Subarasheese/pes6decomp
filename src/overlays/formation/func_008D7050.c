/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_001F3D10(s32, u8);
extern M2C_UNK func_008D6E10(void *, s32, s32, u8);
void func_008D7050(void *arg0, s32 arg1, s32 arg2) {
    func_008D6E10(arg0, arg1, arg2, M2C_FIELD(arg0, u8 *, 0x22));
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0x6C), 1U);
}

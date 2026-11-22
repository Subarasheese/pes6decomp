/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BEF2C0(s32);
extern void func_00BF5C98(s32, s32, s32);
extern void func_00BF5DD0(s32);

void func_00BF5C38(s32 arg0) {
    s32 temp_v0;

    func_00BEF2C0(arg0 + 0xC);
    func_00BEF2C0(arg0 + 0x18);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        func_00BF5C98(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0));
        func_00BF5DD0(M2C_FIELD(arg0, s32 *, 4));
    }
}

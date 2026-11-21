/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BF5C98(s32, s32, s32);
extern void func_00BF5DD0(s32);

M2C_UNK func_00BE4020(s32);

void func_00BE4D30(s32 arg0) {
    func_00BF5C98(M2C_FIELD(arg0, s32 *, 0x30), 0, M2C_FIELD(arg0, s32 *, 0x34));
    func_00BF5DD0(M2C_FIELD(arg0, s32 *, 0x30));
    func_00BE4020(arg0);
}

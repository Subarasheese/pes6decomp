/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BF5C98(s32, s32, s32);
extern void func_00BF5DD0(s32);

M2C_UNK func_00BE3DB8(s32);
M2C_UNK func_00BE43D8(s32);

void func_00BE33F8(void *arg0) {
    s32 temp_v0;

    func_00BE43D8(arg0 + 0x10);
    func_00BE3DB8(arg0 + 0x3C);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x70);
    if (temp_v0 != 0) {
        func_00BF5C98(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x74) * 2);
        func_00BF5DD0(M2C_FIELD(arg0, s32 *, 0x70));
    }
}

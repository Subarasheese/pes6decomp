/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BB3380(s32, s32, s32, s32, s32);

M2C_UNK func_00B9E938(s32);
s32 func_00BB89C8(s32);

s32 func_00BDFD38(void *arg0, s32 arg1) {
    s32 temp_v0;

    if ((arg0 == NULL) || (arg1 == 0)) {
        func_00BB3380(0xB, 0xE5, 0x23, 0, 0);
        return 0;
    }
    func_00B9E938(M2C_FIELD(arg0, s32 *, 4));
    temp_v0 = func_00BB89C8(arg1);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    return temp_v0 != 0;
}

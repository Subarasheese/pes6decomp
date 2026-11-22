/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BE3F80(s32, s32, s32, s32);
extern void func_00BF5C98(s32, s32, s32);

extern char D_00C40670[];

void func_00BE4CE8(s32 arg0, s32 arg1, s32 arg2) {
    func_00BE3F80(arg0, arg1, arg2, 0);
    func_00BF5C98(arg0 + 0x30, 0, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = ((void *)D_00C40670);
}

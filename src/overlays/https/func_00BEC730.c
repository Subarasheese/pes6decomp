/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BF5C98(s32, M2C_UNK, M2C_UNK);
extern char D_00C40D50[];

void func_00BEC730(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    func_00BF5C98(arg0 + 4, 0, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0) = ((void *)D_00C40D50);
}

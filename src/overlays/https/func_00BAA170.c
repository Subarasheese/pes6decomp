/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BA29D8(s32);
M2C_UNK func_00BA2FA0(s32, M2C_UNK, s32, s32);
extern s32 *func_00BAA160(void);

s32 func_00BAA170(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00BA29D8(func_00BAA160());
    if (temp_v0 == 0) {
        return 0;
    }
    func_00BA2FA0(temp_v0, 0x68, arg1, arg0);
    return temp_v0;
}

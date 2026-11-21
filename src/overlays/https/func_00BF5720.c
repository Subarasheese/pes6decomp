/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BF5C98(s32, s32, s32);
extern void func_00BF5DD0(s32);

void func_00BF5720(void *arg0) {
    M2C_UNK (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(arg0, M2C_UNK(**)(s32), 8);
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(arg0, s32 *, 0));
    }
    func_00BF5C98(M2C_FIELD(arg0, s32 *, 0), 0, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00BF5DD0(M2C_FIELD(arg0, s32 *, 0));
}

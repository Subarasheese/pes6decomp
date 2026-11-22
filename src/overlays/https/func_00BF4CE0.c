/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"

extern void func_00BF5DD0(s32);

s32 func_00BF4D70(void *, s32);

s32 func_00BF4CE0(void **arg0) {
    func_00BF4D70(*arg0, 0);
    func_00BF5DD0(M2C_FIELD(*arg0, s32 *, 8));
    func_00BF5DD0((s32)*arg0);
    *arg0 = NULL;
    return 0;
}

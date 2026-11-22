/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BF5C98(s32, s32, s32);

void func_00BF5700(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00BF5C98((s32)arg0, 0, 0xC);
}

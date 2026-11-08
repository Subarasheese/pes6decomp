/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_0017BE20(void *, s32);
s32 func_00189798(void *);

void func_0017CAC8(void *arg0) {
    if (func_00189798((u8 *)arg0 + 0x950) != 0) {
        M2C_FIELD(arg0, s32 *, 0x94C) = 0;
        func_0017BE20(arg0, M2C_FIELD(arg0, s32 *, 0x948));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x94C) = 0;
    func_0017BE20(arg0, M2C_FIELD(arg0, s32 *, 0x948));
}

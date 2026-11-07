/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00961940(void *, s32);
extern void func_0096D0A0(void *, u16, s32);

s32 func_00C08370(void *arg0) {
    func_0096D0A0(arg0, M2C_FIELD(arg0, u16 *, 0x120), 0);
    func_00961940(arg0, 1);
    return 4;
}

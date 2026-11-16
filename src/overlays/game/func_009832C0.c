/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void func_009143D0(void *, s32, s32);

void func_009832C0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1DD) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1DE) = 0;
    func_009143D0(arg0, 0, 1);
}

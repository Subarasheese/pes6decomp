/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

s32 func_009143D0(void *, s32, s32);                     /* extern */

s32 func_009832A0(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x1DD) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1DE) = arg2;
    return func_009143D0(arg0, 0, 1);
}

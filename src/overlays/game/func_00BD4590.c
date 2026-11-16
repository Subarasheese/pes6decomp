/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern u16 D_00CB2418[];

u16 func_00BD4590(s32 arg0) {
    return D_00CB2418[arg0 & 0xFF];
}

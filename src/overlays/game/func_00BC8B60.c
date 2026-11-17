/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CBD3E0[];

u16 func_00BC8B60(s32 arg0) {
    return *(u16 *)(D_00CBD3E0 + (arg0 & 0xFF) * 0x34);
}

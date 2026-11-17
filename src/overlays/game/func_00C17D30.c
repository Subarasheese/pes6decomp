/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CCAEBC[];

s32 func_00C17D30(s32 arg0) {
    return *(s16 *)(D_00CCAEBC + ((arg0 & 0xFF) * 2));
}

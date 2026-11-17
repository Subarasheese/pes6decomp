/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_005929C6[];

u16 func_009B2E60(void *arg0) {
    return *(u16 *)(D_005929C6 + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348);
}

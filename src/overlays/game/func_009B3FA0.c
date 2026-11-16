/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CBAA52[];

u16 func_009B3FA0(s32 arg0) {
    return *(u16 *)(((u8 *)D_00CBAA52) + (arg0 * 0x30));
}

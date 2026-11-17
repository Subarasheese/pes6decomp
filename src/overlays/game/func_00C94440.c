/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CA8F10[];
extern char D_00CCD948[];

void func_00C94440(s32 arg0) {
    *(s32 *)D_00CCD948 = arg0;
    *(char **)(D_00CCD948 + 4) = D_00CA8F10 + arg0 * 0xC + 4;
}

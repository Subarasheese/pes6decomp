/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CA8464[];
extern char D_00CCBC80[];

void func_00C6F730(s32 arg0) {
    *(s32 *)D_00CCBC80 = arg0;
    *(char **)(D_00CCBC80 + 4) = D_00CA8464;
}

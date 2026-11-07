/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_001864E0(s32 arg0) {
    (*(s32 *)D_0051FFD0) |= arg0;
    (*(s32 *)D_0051FFD8) |= arg0;
}

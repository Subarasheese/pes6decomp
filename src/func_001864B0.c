/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_001864B0(s32 arg0) {
    s32 temp_a3;

    temp_a3 = ~arg0;
    (*(s32 *)D_0051FFD0) &= temp_a3;
    (*(s32 *)D_0051FFD8) &= temp_a3;
}

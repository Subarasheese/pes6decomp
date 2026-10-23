/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0020A950(s32, s32);
extern char D_005379F0[];
extern char D_005379F8[];

void func_0020A570(void) {
    if (((*(s32 *)D_005379F0) != 0) && ((*(s32 *)D_005379F8) != 0) && ((*(s32 *)D_005379F0) & 1) && ((*(s32 *)D_005379F8) & 1)) {
        func_0020A950((*(s32 *)D_005379F8), (*(s32 *)D_005379F0));
    }
}

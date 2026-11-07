/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern u8 D_005E2FC4[];

s32 func_002BA260(void) {
    if (func_00BBB8C0(4) >= 2) {
        D_005E2FC4[0] = 2;
    }
    return 0;
}

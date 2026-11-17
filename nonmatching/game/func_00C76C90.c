/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCBDE0[];

s32 func_00C76C90(void) {
    u8 *p = (u8 *)D_00CCBDE0;
    u8 *q;

    if (*(s32 *)(p + 8) != -1 && *(s32 *)(p + 4) != -1) {
        q = *(u8 **)(p + 0x10);
        if (q != NULL) {
            return q[0x2C] == 1;
        }
    }
    return 0;
}

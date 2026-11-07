/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E765C;
extern char D_005EAAC4[];

void func_002FBA40(void) {
    if (D_003E765C != (*(s32 *)D_005EAAC4)) {
        D_003E765C = (*(s32 *)D_005EAAC4);
    }
}

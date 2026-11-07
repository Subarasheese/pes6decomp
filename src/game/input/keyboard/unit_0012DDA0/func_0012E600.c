/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E9798;
extern char D_003C67F0[];
s32 func_00105370(s32);
void func_00146C70(char *);

s32 func_0012E600(void) {
    s32 r = func_00105370(D_003E9798);

    if (r == -1) {
        func_00146C70(D_003C67F0);
    }
    return r;
}

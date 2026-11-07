/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_009BD6E0(s32);
void func_009BD980(s32, s32);
extern s32 D_00A7DB70[];
extern s32 D_00A7DB78[];

s32 func_0099F7E0(void) {
    s32 r;

    r = 0;
    if ((D_00A7DB70[0] == 4) || (D_00A7DB70[0] == 0xA)) {
        func_009BD6E0(D_00A7DB78[0]);
        func_009BD980(D_00A7DB78[0], 1);
        D_00A7DB70[0] = 5;
    } else {
        r = 6;
    }
    return r;
}

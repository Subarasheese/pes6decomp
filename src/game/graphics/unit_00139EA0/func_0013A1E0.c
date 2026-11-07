/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_004FD110[];
extern s32 D_004FD130[];
extern void func_0013A250(s32);

void func_0013A1E0(s32 a0) {
    s32 *p = D_004FD110;

    if (D_004FD130[0] == 0) {
        return;
    }
    if (p[0] + p[1] + p[2] + p[3] != 0) {
        func_0013A250(a0);
    }
}

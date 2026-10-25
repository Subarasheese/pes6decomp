/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_004FD120[];
extern s32 D_004FD130[];
extern void func_00139F10(s32);

void func_00139EA0(s32 a0) {
    s32 *p = D_004FD120;

    if (D_004FD130[0] == 0) {
        return;
    }
    if (p[0] != 0 || p[1] != 0 || p[2] != 0) {
        func_00139F10(a0);
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00C9F2E0[];
extern void func_00BB1310(s32 a0, s32 a1, s32 a2, s32 *a3);
void func_00C22D10(s32 a0, u32 a1) {
    s32 buf[18];
    s32 i;
    for (i = 0; i < 18; i++) buf[i] = ((s32 *)D_00C9F2E0)[i];
    func_00BB1310(buf[(a0 * 2) + (a1 & 0xFF)], a1, 0, buf + 18);
}

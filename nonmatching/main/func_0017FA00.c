/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0017FA50(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);

void func_0017FA00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s8 sp10[20];
    s32 i;
    s8 *p;

    i = 20;
    p = sp10;
    do {
        *p = 0;
        i -= 1;
        p += 1;
    } while (i != 0);
    func_0017FA50(a0, a1, a2, a3, sp10);
}

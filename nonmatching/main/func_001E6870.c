/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *, s32);
extern s32 D_0052B120;
extern u32 *D_0052B124;

void func_001E6870(u32 arg0) {
    u32 *p;
    s32 n;

    p = D_0052B124;
    if (p != NULL) {
        n = D_0052B120;
        while (n != 0) {
            if ((p[0] & 0x7FFFFFFF) == (arg0 & 0x7FFFFFFF)) {
                break;
            }
            n -= 1;
            p += 2;
        }
        if (n != 0) {
            if (p[0] & 0x80000000) {
                return;
            }
            p[0] = 0;
            func_00153FA0((void *) p[1], n);
            p[1] = 0;
        }
    }
}

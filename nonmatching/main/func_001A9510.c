/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00147ED0(s32);
extern void func_00153FA0(void *);
extern void func_00145590(void *);
extern u8 D_00521DE0[];

void func_001A9510(void) {
    u8 *p;
    s32 i;

    p = D_00521DE0;
    for (i = 0; i < 0x17; i++) {
        u8 st = p[8];
        if (st == 3) {
            func_00147ED0(p[0xA] + 0x5AA);
            p[8] = 4;
        } else if (st == 2) {
            void *q = *(void **)(p + 0x14);
            if (q != NULL) {
                func_00145590(q);
                func_00153FA0(*(void **)(p + 0x14));
                *(void **)(p + 0x14) = NULL;
                p[8] = 4;
            }
        }
        p += 0x18;
    }
}

/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0017F880(s32);
extern void func_00153FA0(void *);
extern u8 D_003E98A4;
extern u8 *D_003E75FC;
extern void *D_00520640[];

void func_001A64B0(u8 *arg0) {
    s32 i;

    if (arg0[1] == 1) {
        func_0017F880(*(s32 *)(D_003E75FC + arg0[0] * 8));
        for (i = 0; i < 0x23; i++) {
            if (D_00520640[i] == arg0) {
                D_00520640[i] = 0;
            }
        }
        arg0[1] = 0;
    }
    if (arg0[3] >= 3) {
        void *p = M2C_FIELD(arg0, void **, 8);
        if (p != NULL) {
            func_00153FA0(p);
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
        arg0[1] = 0;
    }
    arg0[2] = 0;
    D_003E98A4 = arg0[3];
}

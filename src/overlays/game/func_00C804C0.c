/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002F9110(s32);
extern s32 D_003EA874;
extern s32 D_00CCC130[];

void func_00C804C0(void) {
    if (D_003EA874 != 0) {
        func_002F9110(D_00CCC130[0]);
        D_003EA874 = 0;
        D_00CCC130[0] = 0;
    }
}

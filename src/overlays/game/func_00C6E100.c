/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002F9110(s32);
extern s32 D_003EA810;
extern s32 D_00CCBBC0[];

void func_00C6E100(void) {
    if (D_003EA810 != 0) {
        func_002F9110(D_00CCBBC0[0]);
        D_003EA810 = 0;
        D_00CCBBC0[0] = 0;
    }
}

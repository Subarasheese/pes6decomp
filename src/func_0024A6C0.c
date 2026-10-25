/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00510FD0[];
s32 func_0023F330(void);
void func_001B6A30(s32);

void func_0024A6C0(void) {
    if (D_00510FD0[0] == 4) {
        func_001B6A30(func_0023F330());
    } else {
        func_001B6A30(1);
    }
}

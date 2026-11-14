/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

extern void func_0096D1A0(void *);
extern void func_00C6A440(void *);
extern u8 D_00591F24[];

void func_00C68B80(void *arg0) {
    if (D_00591F24[0] != 6) {
        M2C_FIELD(arg0, u8 *, 0x1DE) = M2C_FIELD(arg0, u8 *, 0x1DE) + 1;
        if (M2C_FIELD(arg0, u8 *, 0x1DE) > 3) {
            func_00C6A440(arg0);
        }
    } else {
        func_0096D1A0(arg0);
    }
}

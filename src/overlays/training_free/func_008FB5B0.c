/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00308400(void);
extern void func_0026E840(s32);
extern void func_008FAE10(void);
extern void func_008FB600(s32);

s32 func_008FB5B0(void) {
    if (func_00308400() != 0) {
        return 0;
    }
    func_008FB600(-1);
    func_008FAE10();
    func_0026E840(0x8400F802);
    return 0;
}

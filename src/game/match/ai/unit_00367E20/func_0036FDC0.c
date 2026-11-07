/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E7288[];
u8 *func_00338AD0(s32, void *, s32, void *);
void func_00338AA0(u8 *, s32);
void func_0036FD50(void);

s32 func_0036FDC0(s32 target, s32 value) {
    u8 *task = func_00338AD0(0x31, func_0036FD50, 3, D_003E7288);

    M2C_FIELD(task, s32 *, 0x2C) = value;
    func_00338AA0(task, target);
    return 1;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E7288[];
u8 *Pes6Job_Create(s32, void *, s32, void *);
void Pes6Job_SetPayload(u8 *, s32);
void func_0036FD50(void);

s32 func_0036FDC0(s32 target, s32 value) {
    u8 *task = Pes6Job_Create(0x31, func_0036FD50, 3, D_003E7288);

    M2C_FIELD(task, s32 *, 0x2C) = value;
    Pes6Job_SetPayload(task, target);
    return 1;
}

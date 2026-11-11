/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003E17B0[];
void func_0032DE80(void);
s32 Pes6Job_Create(s32 arg0, void *arg1, s32 arg2, void *arg3);
void Pes6Job_SetPayload(s32 arg0, s32 arg1);
s32 func_0032E880(s32 arg0) {
    s32 r = Pes6Job_Create(0xB, func_0032DE80, 0x5, D_003E17B0);
    Pes6Job_SetPayload(r, arg0);
    return 0x1;
}

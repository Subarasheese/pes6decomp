/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003E61B0[];
void func_00349350(void);
s32 Pes6Job_Create(s32 arg0, void *arg1, s32 arg2, void *arg3);
void Pes6Job_SetPayload(s32 arg0, s32 arg1);
s32 func_00349720(s32 arg0) {
    s32 r = Pes6Job_Create(0x5, func_00349350, 0x3, D_003E61B0);
    Pes6Job_SetPayload(r, arg0);
    return 0x1;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x1008]; s32 v; } R;
s32 Pes6Job_GetArg(s32, s32);
R *Pes6Job_GetManager(void);
void Pes6Job_SendMessage(s32, s32, s32);
void Pes6Job_SetDone(s32);

s32 func_00350C80(s32 a) {
    s32 r = Pes6Job_GetArg(a, 0);
    Pes6Job_GetManager()->v = r;
    Pes6Job_SendMessage(0x9E, 0, 1);
    Pes6Job_SetDone(a);
    return 1;
}

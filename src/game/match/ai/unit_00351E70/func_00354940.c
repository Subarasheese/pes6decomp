/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6Job_GetManager(void);
extern int Pes6Job_SendMessage(int, int, int);
extern void Pes6Job_SetDone(int);
extern s32 Pes6Job_GetArg(s32, s32);
extern s8 D_003E9FA0;

s32 func_00354940(s32 arg0) {
    u8 temp_s0;

    temp_s0 = !Pes6Job_GetArg(arg0, 0);
    M2C_FIELD(Pes6Job_GetManager(), s32 *, 0x1008) = temp_s0;
    if (Pes6Job_SendMessage(0x37, 0, 1) != 0) {
        D_003E9FA0 = 1;
    }
    Pes6Job_SetDone(arg0);
    return 1;
}

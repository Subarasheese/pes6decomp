/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayload(s32, s32);
s32 Pes6Job_Create(M2C_UNK, char *, M2C_UNK, char *);
extern char D_003E15C8[];
extern s8 D_003E9F14;
extern s8 D_003E9F15;
extern s8 D_003E9F18;
extern char func_003208E0[];
extern char func_00320B60[];

s32 func_00320CB0(s32 arg0) {
    D_003E9F18 = 0;
    D_003E9F14 = 0;
    D_003E9F15 = 0;
    Pes6Job_SetPayload(Pes6Job_Create(0x15, func_00320B60, 3, D_003E15C8), arg0);
    Pes6Job_SetPayload(Pes6Job_Create(0x14, func_003208E0, 3, D_003E15C8), arg0);
    return 1;
}

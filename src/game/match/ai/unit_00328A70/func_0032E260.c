/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E17B0[];
s32 func_00329B00(s32);
s32 Pes6Job_Create(s32, s32 (*)(s32), s32, s32 *);
void Pes6Job_SetPayloadWord(s32, s32, s32);

s32 func_0032E260(s32 a) {
    Pes6Job_SetPayloadWord(Pes6Job_Create(0xF, func_00329B00, 7, D_003E17B0), a, 0);
    return 1;
}

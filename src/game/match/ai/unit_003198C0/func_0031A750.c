/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003E1510[];
s32 Pes6Job_Create(s32, void (*)(void), s32, void *);
void Pes6Job_SetPayloadWord(s32, s32, s32);
void func_0031A660(void);

s32 func_0031A750(s32 arg) {
    Pes6Job_SetPayloadWord(Pes6Job_Create(0x2D, func_0031A660, 7, D_003E1510), arg, 0);
    return 1;
}

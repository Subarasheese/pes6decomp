/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayloadWord(void *, s32, s32);
extern s32 func_00338720(void *, s32);
extern s32 Pes6Job_SetArg(void *, s32, s32);
void *Pes6Job_Create(s32, char *, s32, char *);
extern char D_003E1510[];
extern char func_0031BB70[];

s32 func_0031BBE0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = Pes6Job_Create(0x17, func_0031BB70, arg0, D_003E1510);
    Pes6Job_SetPayloadWord(temp_v0, arg1, 0);
    func_00338720(temp_v0, 2);
    Pes6Job_SetArg(temp_v0, 0, arg2);
    return 1;
}

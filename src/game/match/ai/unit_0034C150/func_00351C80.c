/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayloadWord(void *, s32, s32);
extern s32 func_00338720(void *, s32);
void *Pes6Job_Create(s32, void (*)(void), s32, void *);
extern char D_003E6408[];
extern void func_00351160(void);

s32 func_00351C80(s32 arg0) {
    void *temp_v0;

    temp_v0 = Pes6Job_Create(0x24, func_00351160, 4, ((void *)D_003E6408));
    Pes6Job_SetPayloadWord(temp_v0, arg0, 0);
    func_00338720(temp_v0, 2);
    return 1;
}

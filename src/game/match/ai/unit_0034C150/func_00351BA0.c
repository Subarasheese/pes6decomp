/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayload(s32, s32);
extern s32 func_00338750(void *, s32);
s32 Pes6Job_Create(s32, void *, s32, void *); /* extern */
extern char D_003E6408[];
extern void func_00350A70(void);

s32 func_00351BA0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = Pes6Job_Create(0x27, (void *)func_00350A70, 3, ((void *)D_003E6408));
    Pes6Job_SetPayload(temp_v0, arg0);
    func_00338750((void *) temp_v0, 5);
    return 1;
}

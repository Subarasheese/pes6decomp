/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayload(s32, s32);
extern s32 Pes6Job_SetArg(void *, s32, s32);
void *Pes6Job_Create(s32, void *, s32, void *); /* extern */
s32 func_00341910(s32, s32, s32);       /* extern */
extern char D_003E1510[];
extern void func_00319D50(void);
extern void func_0031B230(void);

s32 func_0031B510(s32 arg0) {
    void *var_s0;

    if (func_00341910(1, 5, 0xA) != 0) {
        var_s0 = Pes6Job_Create(0x10, (void *)func_0031B230, 7, ((void *)D_003E1510));
    } else {
        var_s0 = Pes6Job_Create(0x10, (void *)func_00319D50, 7, ((void *)D_003E1510));
        Pes6Job_SetArg(var_s0, 0, 0xFF);
        Pes6Job_SetArg(var_s0, 1, 0xFF);
    }
    Pes6Job_SetPayload((s32) var_s0, arg0);
    return 1;
}

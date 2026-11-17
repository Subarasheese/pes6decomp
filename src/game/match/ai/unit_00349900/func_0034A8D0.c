/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayload(s32, s32);
extern s32 Pes6Job_Create(s32, void (*)(void), s32, void *);
extern char D_003E6228[];
extern void func_00349C70(void);
extern void func_0034A710(void);

s32 func_0034A8D0(s32 arg0) {
    Pes6Job_SetPayload(Pes6Job_Create(0x1D, func_0034A710, 5, D_003E6228), arg0);
    Pes6Job_SetPayload(Pes6Job_Create(0x1E, func_00349C70, 5, D_003E6228), arg0);
    return 1;
}

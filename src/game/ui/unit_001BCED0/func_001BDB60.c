/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 Pes6Process_Start(s32);
extern s32 Pes6Process_Create(void *, void *, void *, s32, s32, void *);
extern char D_003D18B0[];
extern s32 D_003E992C;
extern void mnNowLoadingIconStart(void);
extern void func_001BDDE0(void);
extern void func_001BDDF0(void);

void func_001BDB60(void) {
    s32 temp_v0;

    if (D_003E992C == 0) {
        temp_v0 = Pes6Process_Create(func_001BDDF0, mnNowLoadingIconStart, func_001BDDE0, 0x3C, 0, D_003D18B0);
        Pes6Process_Start(temp_v0);
        D_003E992C = temp_v0;
    }
}

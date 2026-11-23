/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_00181290(s32 handle);
extern void Pes6Heap_Free(void *);
extern void *D_0051FEA8[], *D_0051FEA0[];
extern s32 D_0051FEA4[];
extern u8 D_0051FEAC[];
static inline s32 ioFinished(s32 handle) {
    s32 finished = 0;
    if (func_00181290(handle) == 3)
        finished = 1;
    return finished;
}
s32 func_001808A0(void) {
    s32 complete = 0;
    if (D_0051FEAC[0] != 3)
        return 1;
    if (ioFinished(D_0051FEA4[0])) {
        Pes6Heap_Free(D_0051FEA8[0]);
        Pes6Heap_Free(D_0051FEA0[0]);
        D_0051FEA8[0] = 0;
        D_0051FEA0[0] = 0;
        D_0051FEAC[0] = 0;
        complete = 1;
    }
    return complete;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void *D_003EA60C;

s32 func_009009D0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA60C != NULL) {
        var_s0 = M2C_FIELD(D_003EA60C, s32 *, 0x10);
        Pes6Heap_Free(D_003EA60C);
        D_003EA60C = NULL;
    }
    return var_s0;
}

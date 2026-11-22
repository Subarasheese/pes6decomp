/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *Pes6Heap_Alloc(s32, s32);
extern void *D_003EA358;

void *func_0085F1D0(void) {
    if (D_003EA358 == NULL) {
        D_003EA358 = Pes6Heap_Alloc(1, 0x44);
    }
    M2C_FIELD(D_003EA358, s8 *, 0x31) = 5;
    M2C_FIELD(D_003EA358, s8 *, 0x30) = 5;
    M2C_FIELD(D_003EA358, s8 *, 4) = 1;
    M2C_FIELD(D_003EA358, s8 *, 5) = 1;
    M2C_FIELD(D_003EA358, s32 *, 0x38) = 0;
    return D_003EA358;
}

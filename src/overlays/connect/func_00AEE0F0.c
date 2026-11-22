/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * Pes6Heap_Alloc(s32, s32);

s32 func_00AEE0F0(void) {
    void *temp_v0;

    temp_v0 = Pes6Heap_Alloc(1, 0xC);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
    }
    return (s32) temp_v0;
}

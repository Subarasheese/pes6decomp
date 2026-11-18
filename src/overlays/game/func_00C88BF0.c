/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

void *Pes6Heap_Alloc(M2C_UNK, M2C_UNK);

void func_00C88BF0(void) {
    void *temp_v0;

    temp_v0 = Pes6Heap_Alloc(1, 0x10);
    if (temp_v0 != NULL) {
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        }
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
    }
}

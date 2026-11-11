/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_001DF7B0(s32);                         /* extern */

s32 func_00C88AC0(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            func_001DF7B0(temp_a0);
        }
        Pes6Heap_Free(arg0);
    }
    return 1;
}

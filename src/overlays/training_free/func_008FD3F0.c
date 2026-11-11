/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00C75330();                            /* extern */

void func_008FD3F0(void *arg0) {
    if (arg0 != NULL) {
        func_00C75330();
        func_001EDD90(M2C_FIELD(arg0, s32 *, 0x20));
        Pes6Heap_Free(arg0);
    }
}

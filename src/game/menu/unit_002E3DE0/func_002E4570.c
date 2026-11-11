/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(void *);                      /* extern */
M2C_UNK func_001F1EA0(s32);                         /* extern */

void func_002E4570(void *arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(M2C_FIELD(arg0, s32 *, 0x14));
        Pes6Heap_Free(arg0);
    }
}

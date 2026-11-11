/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
s32 func_00807DF0(void *arg0) {
    Pes6Heap_Free(M2C_FIELD(arg0, void **, 0x218));
    return 1;
}

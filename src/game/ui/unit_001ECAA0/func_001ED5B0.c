/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);

void func_001ED5B0(void *object) {
    if (object != NULL) {
        Pes6Heap_Free(M2C_FIELD(object, void **, 0x20));
        Pes6Heap_Free(object);
    }
}

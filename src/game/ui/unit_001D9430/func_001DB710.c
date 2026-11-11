/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void func_001D9AF0(s32);

void func_001DB710(void *object) {
    if (object != NULL) {
        func_001D9AF0(M2C_FIELD(object, s32 *, 0x14));
        Pes6Heap_Free(object);
    }
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void func_001F7760(s32, void *);
extern void func_001F7F10(void *);

void func_001F7080(void *object) {
    if (object != NULL) {
        func_001F7760(M2C_FIELD(object, s32 *, 0x18), object);
        func_001F7F10(object);
        Pes6Heap_Free(object);
    }
}

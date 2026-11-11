/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void *D_003EA358;

s32 func_0085F1A0(void) {
    if (D_003EA358 != NULL) {
        Pes6Heap_Free(D_003EA358);
        D_003EA358 = NULL;
    }
    return 0;
}

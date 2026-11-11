/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_005202C8[];
void Pes6Heap_Free(void *);

void func_0019B710(void) {
    if (D_005202C8[0] != NULL) {
        Pes6Heap_Free(D_005202C8[0]);
        D_005202C8[0] = NULL;
    }
}

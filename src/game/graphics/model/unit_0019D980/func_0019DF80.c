/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_005202E0[];
void Pes6Heap_Free(void *);

void func_0019DF80(void) {
    if (D_005202E0[0] != NULL) {
        Pes6Heap_Free(D_005202E0[0]);
        D_005202E0[0] = NULL;
    }
}

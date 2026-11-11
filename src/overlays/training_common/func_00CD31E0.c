/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void *D_003EB264;

void func_00CD31E0(void) {
    if (D_003EB264 != NULL) {
        Pes6Heap_Free(D_003EB264);
        D_003EB264 = NULL;
    }
}

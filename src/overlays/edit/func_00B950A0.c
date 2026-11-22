/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern char D_00CE35B0[];

void func_00B950A0(void) {
    if (*(void **)D_00CE35B0 != NULL) {
        Pes6Heap_Free(*(void **)D_00CE35B0);
        *(void **)D_00CE35B0 = NULL;
    }
}

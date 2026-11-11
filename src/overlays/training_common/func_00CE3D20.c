/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { void *a; s32 b; s32 c; void *d; } S;
extern void Pes6Heap_Free(void *);

void func_00CE3D20(S *arg0) {
    Pes6Heap_Free(arg0->a);
    arg0->a = NULL;
    arg0->b = 0;
    Pes6Heap_Free(arg0->d);
    arg0->d = NULL;
}

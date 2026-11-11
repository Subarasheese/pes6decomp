/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void Pes6Heap_Free(void *);
typedef struct { s32 pad; void *p; } S;
void func_00CDA690(S *arg0) {
    if (arg0->p != NULL) {
        Pes6Heap_Free(arg0->p);
        arg0->p = NULL;
    }
}

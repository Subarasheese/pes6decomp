/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
void func_006562F0(void *arg0) {
    if (arg0 != NULL) {
        Pes6Heap_Free(arg0);
    }
}

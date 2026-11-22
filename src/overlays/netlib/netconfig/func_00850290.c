/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(void *);

void func_00850290(s32 arg0, void *arg1) {
    Pes6Heap_Free(arg1);
}

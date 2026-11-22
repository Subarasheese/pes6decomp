/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *Pes6Heap_Alloc(s32, s32);

void *func_008502A0(s32 arg0, s32 arg1, s32 arg2) {
    return Pes6Heap_Alloc(arg1, arg2);
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern void func_001EC520(s32);
extern void func_001EB170(s32);
extern void Pes6Heap_Free(void *);
extern void func_001E50C0(void *);

void func_001DF7B0(char *a0) {
    if (a0 != NULL) {
        func_001EC520(*(s32 *)(a0 + 0x58));
        func_001EB170(*(s32 *)(a0 + 0x5C));
        func_001E50C0(a0);
        Pes6Heap_Free(*(void **)(a0 + 0x18));
        *(void **)(a0 + 0x18) = NULL;
        if (*(void **)(a0 + 0x3C) != NULL) Pes6Heap_Free(*(void **)(a0 + 0x3C));
        Pes6Heap_Free(a0);
    }
}

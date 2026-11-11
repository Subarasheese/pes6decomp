/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001E5F20(s32);
void Pes6Heap_Free(s32 *);

void func_001B4D20(s32 *items) {
    u32 i;

    if (items == NULL) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_001E5F20(items[i]);
    }
    Pes6Heap_Free(items);
}

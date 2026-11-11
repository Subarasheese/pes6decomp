/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E98CC;
s32 Pes6Heap_Alloc(s32, s32);

void func_001AA450(void) {
    if (D_003E98CC != 0) {
        return;
    }
    D_003E98CC = Pes6Heap_Alloc(23, 0x4440);
}

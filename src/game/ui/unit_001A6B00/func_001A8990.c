/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E98AC;
s32 Pes6Heap_Alloc(s32, s32);

void func_001A8990(void) {
    if (D_003E98AC != 0) {
        return;
    }
    D_003E98AC = Pes6Heap_Alloc(23, 0xA400);
}

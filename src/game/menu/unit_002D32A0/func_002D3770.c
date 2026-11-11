/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern s32 D_003E9D74;

void func_002D3770(void) {
    Pes6Heap_Free(D_003E9D74);
    D_003E9D74 = 0;
}

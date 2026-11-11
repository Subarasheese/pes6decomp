/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E98E0;
void func_0017F880(s32 a);
void Pes6Heap_Free(void *p);
void func_001B08F0(void) {
    s32 i;
    if (D_003E98E0 == 0) {
        return;
    }
    for (i = 0; i < 8; i++) {
        if (*(s8 *)(D_003E98E0 + i * 0x10 + 1) == 1) {
            func_0017F880(*(s32 *)(D_003E98E0 + i * 0x10 + 4));
        }
    }
    for (i = 0; i < 8; i++) {
        Pes6Heap_Free((void *)*(s32 *)(D_003E98E0 + i * 0x10 + 0xC));
    }
    Pes6Heap_Free(D_003E98E0);
    D_003E98E0 = 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00CF49F0(s32);                         /* extern */
extern s32 D_003E7E1C;
extern void *D_003EB27C;

void func_00CDC780(void) {
    func_00CF49F0(D_003E7E1C + 0x190);
    Pes6Heap_Free(D_003EB27C);
    D_003EB27C = NULL;
}

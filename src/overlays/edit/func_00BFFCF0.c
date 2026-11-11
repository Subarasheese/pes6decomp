/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00220240(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_003EB104;

void func_00BFFCF0(void) {
    if (D_003EB104 != NULL) {
        func_00220240(0, 0x18);
        Pes6Heap_Free(D_003EB104);
        D_003EB104 = NULL;
    }
}

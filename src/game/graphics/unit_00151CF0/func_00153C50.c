/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00145590(void *);                      /* extern */
M2C_UNK Pes6Heap_Free(void *);                      /* extern */
extern void *D_003E9834;

void func_00153C50(void) {
    func_00145590(M2C_FIELD(D_003E9834, void **, 4));
    Pes6Heap_Free(M2C_FIELD(D_003E9834, void **, 4));
    Pes6Heap_Free(D_003E9834);
    D_003E9834 = NULL;
}

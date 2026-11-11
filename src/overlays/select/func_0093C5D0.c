/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00151550(s32 *);                       /* extern */
M2C_UNK func_001CDAD0(s32 *);                       /* extern */
extern s32 *D_003EAB60;

void func_0093C5D0(void *arg0) {
    s32 *temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 **, 0x44);
    D_003EAB60 = temp_a0;
    if (*temp_a0 != 0xA) {
        Pes6Heap_Free(temp_a0);
        D_003EAB60 = NULL;
        return;
    }
    func_001CDAD0(temp_a0);
    func_00151550(D_003EAB60);
}

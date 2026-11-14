/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void Pes6Heap_Free(void *);
extern void *D_003AE9D4[];

s32 func_00C75FA0(void) {
    func_001BC2B0();
    Pes6Heap_Free(D_003AE9D4[0]);
    D_003AE9D4[0] = NULL;
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void func_001BC2B0(void);
M2C_UNK func_008FAB10(M2C_UNK);
M2C_UNK func_00C75330(s32);
extern char D_003AE9D0[];

s32 func_008F6BE0(void) {
    func_001BC2B0();
    func_00C75330((*(s32 *)D_003AE9D0) + 0x44);
    Pes6Heap_Free(*(void **)D_003AE9D0);
    (*(s32 *)D_003AE9D0) = 0;
    func_008FAB10(0);
    return 1;
}

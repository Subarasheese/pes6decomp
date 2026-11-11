/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_005EFDF8[];
extern char D_005EFDFC[];

void func_0030CEA0(void) {
    Pes6Heap_Free((*(s32 *)D_005EFDF8));
    Pes6Heap_Free((*(s32 *)D_005EFDFC));
    (*(s32 *)D_005EFDF8) = 0;
    (*(s32 *)D_005EFDFC) = 0;
}

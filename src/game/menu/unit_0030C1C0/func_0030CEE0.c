/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Heap_Alloc(M2C_UNK, M2C_UNK);                /* extern */
extern char D_005EFDF8[];
extern char D_005EFDFC[];

void func_0030CEE0(void) {
    if ((*(s32 *)D_005EFDF8) == 0) {
        (*(s32 *)D_005EFDF8) = Pes6Heap_Alloc(1, 0xC30);
    }
    if ((*(s32 *)D_005EFDFC) == 0) {
        (*(s32 *)D_005EFDFC) = Pes6Heap_Alloc(1, 0xC30);
    }
}

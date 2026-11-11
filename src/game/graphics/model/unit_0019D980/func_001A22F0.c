/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_0051FF7C[];

void func_001A22F0(void) {
    if ((*(s32 *)D_0051FF7C) != 0) {
        Pes6Heap_Free((*(s32 *)D_0051FF7C));
    }
    (*(s32 *)D_0051FF7C) = 0;
}

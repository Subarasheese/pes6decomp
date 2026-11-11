/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_00520128[];

void func_0018AE30(void) {
    if ((*(s32 *)D_00520128) != 0) {
        Pes6Heap_Free((*(s32 *)D_00520128));
    }
    (*(s32 *)D_00520128) = 0;
}

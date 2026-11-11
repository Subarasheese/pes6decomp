/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_00520138[];

void func_0018D470(void) {
    if ((*(s32 *)D_00520138) != 0) {
        Pes6Heap_Free((*(s32 *)D_00520138));
    }
    (*(s32 *)D_00520138) = 0;
}

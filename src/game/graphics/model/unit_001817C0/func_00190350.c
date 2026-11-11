/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_00520220[];

void func_00190350(void) {
    if ((*(s32 *)D_00520220) != 0) {
        Pes6Heap_Free((*(s32 *)D_00520220));
    }
    (*(s32 *)D_00520220) = 0;
}

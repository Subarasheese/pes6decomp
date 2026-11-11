/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
extern char D_00520228[];

void func_001907E0(void) {
    if ((*(s32 *)D_00520228) != 0) {
        Pes6Heap_Free((*(s32 *)D_00520228));
    }
    (*(s32 *)D_00520228) = 0;
}

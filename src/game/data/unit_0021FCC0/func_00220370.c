/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Alloc(M2C_UNK, s32);                /* extern */
s32 func_002206F0(M2C_UNK);                         /* extern */
s32 func_00223960(M2C_UNK);                         /* extern */
s32 func_00223AD0();                                /* extern */

void func_00220370(void) {
    if (func_00223AD0() == 0) {
        Pes6Heap_Alloc(1, func_002206F0(0x10));
    }
    if (func_00223960(0x127) == 0) {
        Pes6Heap_Alloc(1, 0x1198);
    }
}

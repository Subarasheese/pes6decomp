/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00154080(M2C_UNK);                         /* extern */
s32 func_001540E0(M2C_UNK);                         /* extern */
M2C_UNK func_001A3220(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
s32 func_002CBC80(M2C_UNK);                         /* extern */
M2C_UNK Pes6HeapZone_SetRange(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_002CAAB0(void) {
    if ((func_001540E0(0xA) != 0) && (func_00154080(0xA) == 0)) {
        Pes6HeapZone_Close(0xA);
        Pes6HeapZone_SetRange(0xA, func_002CBC80(0xA), 0x15A000);
        Pes6HeapZone_Open(0xC);
        func_001A3220(0);
    }
}

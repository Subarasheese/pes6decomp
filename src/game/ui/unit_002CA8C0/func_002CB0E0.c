/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001A3220(M2C_UNK);                     /* extern */
M2C_UNK func_001A5BE0(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
s32 func_002CBC80(M2C_UNK);                         /* extern */
M2C_UNK Pes6HeapZone_SetRange(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_002CB0E0(void) {
    Pes6HeapZone_Close(5);
    Pes6HeapZone_Open(5);
    func_001A5BE0(3);
    Pes6HeapZone_Close(0xC);
    Pes6HeapZone_SetRange(0xA, func_002CBC80(0xA), 0x217000);
    Pes6HeapZone_Open(0xA);
    func_001A3220(0xA);
}

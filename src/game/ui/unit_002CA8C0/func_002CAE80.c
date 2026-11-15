/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001540F0(M2C_UNK);                     /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
s32 func_002CBC60(M2C_UNK);                         /* extern */

void func_002CAE80(void) {
    s32 temp_s0;

    func_001540F0(4);
    temp_s0 = func_002CBC60(0xB) + 0xFFE05000;
    func_001C4730(func_002CBC60(6), temp_s0, 0x1FB000);
    Pes6HeapZone_Open(4);
    Pes6HeapZone_Open(5);
    Pes6HeapZone_Open(0xC);
}

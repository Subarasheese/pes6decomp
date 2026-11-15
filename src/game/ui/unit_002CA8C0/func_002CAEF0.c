/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Create(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_001A5BE0(M2C_UNK);                     /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
s32 func_002CBC60(M2C_UNK);                         /* extern */

void func_002CAEF0(void) {
    s32 temp_s0;
    s32 temp_s0_2;

    func_001A5BE0(4);
    func_001A5BE0(2);
    func_001A5BE0(3);
    Pes6HeapZone_Close(5);
    Pes6HeapZone_Close(4);
    Pes6HeapZone_Close(0xC);
    temp_s0 = func_002CBC60(0xB) + 0xFFE05000;
    func_001C4730(temp_s0, func_002CBC60(6), 0x1FB000);
    temp_s0_2 = func_002CBC60(5);
    Pes6Heap_Create(4, temp_s0_2, func_002CBC60(5) + 0x68B000);
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001540B0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
M2C_UNK func_002CBAF0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC5CF0();                            /* extern */

void func_001F8DA0(void) {
    Pes6HeapZone_Close(0xC);
    func_002CBAF0(0xC);
    func_00BC5CF0();
    func_001540B0(0xC, 0);
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 Pes6SaveData_IsUnavailable();                                /* extern */
extern s32 Pes6SaveData_Current;

void func_00238810(void) {
    if (Pes6SaveData_IsUnavailable() != 1) {
        func_001C48E8(Pes6SaveData_Current + 0x7980, 0, 0x655C);
    }
}

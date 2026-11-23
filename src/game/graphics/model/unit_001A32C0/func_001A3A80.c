/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char Pes6Camera_BufferIndex[];
extern char Pes6Camera_Enabled[];
extern char D_00520564[];

void func_001A3A80(void) {
    func_001C48E8(((void *)Pes6Camera_BufferIndex), 0, 0x1C0);
    (*(s32 *)Pes6Camera_Enabled) = 1;
    (*(s32 *)D_00520564) = 1;
}

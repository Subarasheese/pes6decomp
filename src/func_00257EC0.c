/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0025E130(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058CF00[];
extern char D_0058CF08[];

void func_00257EC0(void) {
    func_00153FA0((*(s32 *)D_0058CF08));
    func_0025E130(2, 0);
    func_001C48E8(((void *)D_0058CF00), 0, 0x14);
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00129B50();                                /* extern */
M2C_UNK func_00129CE0(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003FB0A0[];

void func_00129CA0(void) {
    func_001C48E8(((void *)D_003FB0A0), 0, 0x370);
    func_00129CE0(func_00129B50());
}

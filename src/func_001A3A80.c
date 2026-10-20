/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005203B0[];
extern char D_00520560[];
extern char D_00520564[];

void func_001A3A80(void) {
    func_001C48E8(((void *)D_005203B0), 0, 0x1C0);
    (*(s32 *)D_00520560) = 1;
    (*(s32 *)D_00520564) = 1;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005EAAB0[];
extern char D_005EAAC8[];

void func_002FBB30(void) {
    if ((*(s32 *)D_005EAAC8) != 0) {
        func_00153FA0((*(s32 *)D_005EAAC8));
        (*(s32 *)D_005EAAC8) = 0;
    }
    func_001C48E8(((void *)D_005EAAB0), 0, 0x38);
}

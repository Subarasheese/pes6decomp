/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001820F0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001884A0(M2C_UNK, s32);                /* extern */
extern char D_0051FF80[];
extern char D_0051FF84[];

void func_001830F0(void) {
    func_001820F0((*(s32 *)D_0051FF80), 2, 3, 1);
    func_001820F0((*(s32 *)D_0051FF80), 1, 7, 1);
    func_001820F0((*(s32 *)D_0051FF80), 0, 0x15, 1);
    func_001884A0(1, (*(s32 *)D_0051FF84));
}

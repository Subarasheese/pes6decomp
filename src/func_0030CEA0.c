/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
extern char D_005EFDF8[];
extern char D_005EFDFC[];

void func_0030CEA0(void) {
    func_00153FA0((*(s32 *)D_005EFDF8));
    func_00153FA0((*(s32 *)D_005EFDFC));
    (*(s32 *)D_005EFDF8) = 0;
    (*(s32 *)D_005EFDFC) = 0;
}

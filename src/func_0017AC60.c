/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0017ACD0(s32);                         /* extern */
s32 func_0017AEA0(s32);                             /* extern */
extern char D_00510FE8[];

void func_0017AC60(void) {
    switch ((*(s32 *)D_00510FE8)) {                           /* irregular */
    case 0:
        if (func_0017AEA0((*(s32 *)D_00510FE8)) != 0) {
            (*(s32 *)D_00510FE8) += 1;
            return;
        }
        return;
    case 1:
        func_0017ACD0((*(s32 *)D_00510FE8));
        break;
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001E59D0(s32, M2C_UNK);                /* extern */
extern char D_00522970[];
extern char D_00522974[];

void func_001B6CB0(void) {
    if ((*(s32 *)D_00522970) != 0) {
        func_001E59D0((*(s32 *)D_00522970), 0);
    }
    if ((*(s32 *)D_00522974) != 0) {
        func_001E59D0((*(s32 *)D_00522974), 0);
    }
}

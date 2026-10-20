/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001E5F20(s32);                         /* extern */
extern char D_00522970[];
extern char D_00522974[];

void func_001B6D00(void) {
    if ((*(s32 *)D_00522970) != 0) {
        func_001E5F20((*(s32 *)D_00522970));
        (*(s32 *)D_00522970) = 0;
    }
    if ((*(s32 *)D_00522974) != 0) {
        func_001E5F20((*(s32 *)D_00522974));
        (*(s32 *)D_00522974) = 0;
    }
}

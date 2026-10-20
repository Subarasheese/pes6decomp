/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B70A0();                            /* extern */
extern char D_00522988[];
extern char D_0052298C[];

void func_001B7A60(s32 arg0) {
    if ((*(s32 *)D_00522988) == 0) {
        (*(s32 *)D_0052298C) = arg0;
        func_001B70A0();
    }
}

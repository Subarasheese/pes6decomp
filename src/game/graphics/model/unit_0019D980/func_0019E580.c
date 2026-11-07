/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
extern char D_005202E8[];
extern char D_005202EC[];

void func_0019E580(void) {
    if ((*(s32 *)D_005202EC) != 0) {
        func_00153FA0((*(s32 *)D_005202EC));
    }
    (*(s32 *)D_005202E8) = 0;
    (*(s32 *)D_005202EC) = 0;
}

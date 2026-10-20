/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0010AFA0(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_002FB010(s32);                         /* extern */
extern char D_005EAAC8[];
extern char D_005EAAE0[];

s32 func_002FBC90(void) {
    s32 temp_v0;

    temp_v0 = func_0010AFA0((*(s32 *)D_005EAAE0), (*(s32 *)D_005EAAC8), 0x10);
    func_002FB010(temp_v0);
    return temp_v0;
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0010B260(s32, M2C_UNK, s32 *);             /* extern */
M2C_UNK func_002FB010(s32);                         /* extern */
extern char D_005EAAE0[];

s32 func_002FBE70(s32 arg0) {
    s32 sp2C;
    s32 temp_v0;

    sp2C = arg0;
    temp_v0 = func_0010B260((*(s32 *)D_005EAAE0), 0x55504305, &sp2C);
    func_002FB010(temp_v0);
    return temp_v0;
}

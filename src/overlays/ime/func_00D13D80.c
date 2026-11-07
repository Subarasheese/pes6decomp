/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, s32, s32);                /* extern */
M2C_UNK func_001C8590(s32, M2C_UNK *, s32);         /* extern */
extern char D_00D39640[];

s32 func_00D13D80(s32 arg0, s32 arg1) {
    func_001C48E8(arg0, 0, arg1);
    func_001C8590(arg0, ((void *)D_00D39640), arg1);
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, s32);                /* extern */
M2C_UNK func_001C8590(s32, M2C_UNK *, s32);         /* extern */
extern char D_00D39640[];

s32 func_00D13D80(s32 arg0, s32 arg1) {
    func_001C48E8(0, arg1);
    func_001C8590(arg0, ((void *)D_00D39640), arg1);
    return 0;
}

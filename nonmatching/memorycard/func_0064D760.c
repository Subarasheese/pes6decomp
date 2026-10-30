/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00639D40(s32);                         /* extern */
M2C_UNK func_00639D60(s32);                         /* extern */
s32 func_0063CAB0(M2C_UNK);                         /* extern */
extern char D_0065EF88[];

void func_0064D760(void) {
    func_00639D60((*(s32 *)D_0065EF88));
    func_00639D40(func_0063CAB0(0));
}

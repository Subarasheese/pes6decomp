/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BD7C0(s32, s32, s32);               /* extern */
extern char D_00A7DB78[];

s32 func_0099F690(s32 arg0, s32 arg1) {
    func_009BD7C0((*(s32 *)D_00A7DB78), arg0, arg1);
    return 0;
}

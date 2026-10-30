/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s32, s32, s32);               /* extern */
extern char D_00A004B0[];

s32 func_009EAFC0(s32 arg0, s32 arg1) {
    sprintf(arg0, arg1, func_001F08B0((*(s32 *)D_00A004B0)));
    return arg0;
}

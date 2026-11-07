/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern char D_003FB778[];
extern char D_003FB780[];

s16 func_0012EED0(s32 arg0) {
    s16 temp_s0;

    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD50((*(s32 *)D_003FB778));
    }
    temp_s0 = M2C_FIELD(((*(s32 *)D_003FB780) + (arg0 * 0x78)), s16 *, 2);
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012ADE0((*(s32 *)D_003FB778));
    }
    return temp_s0;
}

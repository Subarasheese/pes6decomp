/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern char D_003FB778[];
extern char D_003FB780[];

void func_0012ED90(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD50((*(s32 *)D_003FB778));
    }
    M2C_FIELD(((*(s32 *)D_003FB780) + (arg0 * 0x78)), s32 *, 0x18) = (s32) (arg1 | 0x80000000);
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012ADE0((*(s32 *)D_003FB778));
    }
}

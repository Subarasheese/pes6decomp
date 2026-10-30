/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001514E8(s32);
extern char D_011E6BC8[];
extern char D_011E6BCC[];
extern char D_011E6BF8[];

void func_00160C28(void) {
    s32 var_v0;

    if ((*(s32 *)D_011E6BF8) != 0) {
        var_v0 = (*(s32 *)D_011E6BCC);
    } else {
        var_v0 = (*(s32 *)D_011E6BC8);
    }
    *(s32 *)0x5B3744 = var_v0;
    func_001514E8(0x5B0000);
}

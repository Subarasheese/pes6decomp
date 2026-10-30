/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD50(s32);
extern s32 func_0012ADE0(s32);
extern char D_003FB778[];
extern char D_003FB780[];

s32 func_0012EE30(s32 arg0) {
    s32 var_s1;
    void *temp_s0;

    temp_s0 = (*(s32 *)D_003FB780) + (arg0 * 0x78);
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012AD50((*(s32 *)D_003FB778));
    }
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s16 *, 2) != -1) {
        var_s1 = M2C_FIELD(temp_s0, s32 *, 4);
    }
    if ((*(s32 *)D_003FB778) != -1) {
        func_0012ADE0((*(s32 *)D_003FB778));
    }
    return var_s1;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00182600(s32);                             /* extern */
M2C_UNK func_00182620(s32);                         /* extern */
extern char D_0051FF38[];

void func_00181AA0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_0051FF38) + (arg0 * 0x60);
    if (func_00182600(temp_s0) != 0) {
        func_00182620(temp_s0);
    }
}

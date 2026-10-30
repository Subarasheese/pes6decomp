/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FF3F0();                                /* extern */
s32 func_00B29BD0();                                /* extern */
extern char D_00591DD6[];

s32 func_008F79E0(void) {
    s32 temp_s0;
    u8 temp_s0_2;

    temp_s0_2 = (*(u8 *)D_00591DD6);
    temp_s0 = temp_s0_2 & func_008FF3F0();
    return temp_s0 & (func_00B29BD0() == 0);
}

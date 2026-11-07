/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_008FF3F0();
s32 func_00B29BD0();
extern char D_00591DD6[];
s32 func_008F79E0(void) {
    s32 a = *(u8 *)D_00591DD6;
    a &= func_008FF3F0();
    return a & (func_00B29BD0() == 0);
}

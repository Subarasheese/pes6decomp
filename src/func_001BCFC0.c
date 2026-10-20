/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00154220(s32);                             /* extern */
s32 func_001543E0();                                /* extern */

s32 func_001BCFC0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_001543E0();
    return temp_s0 | (func_00154220(arg0) & 0xF00000);
}

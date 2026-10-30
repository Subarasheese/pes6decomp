/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE630(s16 *);                       /* extern */

void func_00B90110(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;

    if (arg0 != 0) {
        sp18 = arg1;
        sp1A = arg2;
        sp1C = arg3;
        sp1E = arg4;
        func_001EE630(&sp18);
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00835AA0();                                /* extern */
M2C_UNK func_00839AF0();                            /* extern */
s64 func_0083C4D0(M2C_UNK);                         /* extern */
extern char D_008AA0EB[];
extern char D_008AA0EC[];
extern char D_008AA10C[];

s32 func_00823F60(void) {
    (*(s8 *)D_008AA10C) = 1;
    (*(s8 *)D_008AA0EB) = 0xD;
    if (((s64) (func_0083C4D0(1) << 0x38) >> 0x38) == 1) {
        (*(s8 *)D_008AA0EC) = 0;
    } else {
        (*(s8 *)D_008AA0EC) = 1;
    }
    if (func_00835AA0() == 0) {
        func_00839AF0();
    }
    return 1;
}

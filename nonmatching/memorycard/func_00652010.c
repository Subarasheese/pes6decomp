/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063E160(s32, M2C_UNK);                    /* extern */
extern char D_0065EF70[];

s32 func_00652010(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 0x24) {
        return 0;
    }
    if (arg1 == 0) {
        return func_0063E160(temp_a0, 0);
    }
    return (*(s32 *)D_0065EF70);
}

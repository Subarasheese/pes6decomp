/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */
M2C_UNK func_009579B0(s32, s32);                    /* extern */
extern char D_008A5F70[];

s32 func_00957A90(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        return 1;
    }
    if (temp_s0 == 0) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        func_009579B0(temp_v0 + 0x78, temp_s0 + 0x4998);
        return 4;
    }
    return 1;
}

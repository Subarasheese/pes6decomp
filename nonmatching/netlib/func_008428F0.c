/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_00877690(s32, s32);                    /* extern */
extern char D_008A838F[];

s32 func_008428F0(s64 arg0) {
    s32 temp_v0;

    (*(s8 *)D_008A838F) = (s8) arg0;
    if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
        temp_v0 = func_0082C2A0();
        if (temp_v0 != 0) {
            func_00877690(temp_v0 + 0x11828, temp_v0 + 0x12230);
        }
    }
    return 1;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_00CBBE64[];
extern char D_00CBBE68[];

s32 func_00B26D20(void) {
    s32 temp_s0;

    temp_s0 = (*(u8 *)D_00CBBE64) & 1;
    if (temp_s0 != 0) {
        func_001C48E8(((void *)D_00CBBE64), 0, 0xC);
        (*(s32 *)D_00CBBE68) = 0;
    }
    return temp_s0;
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00AEEB80(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00B02680[];
extern char D_00B02688[];

s32 func_00AE6970(void) {
    s32 temp_v0;

    temp_v0 = func_00AEEB80(0x40, 0x2780);
    if (temp_v0 != 0) {
        func_001C48E8(temp_v0, 0, 0x2780);
    }
    (*(s32 *)D_00B02688) = temp_v0;
    (*(s32 *)D_00B02680) = 0;
    return 1;
}

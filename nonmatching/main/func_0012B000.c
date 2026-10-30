/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00100410();                            /* extern */
M2C_UNK func_00101F20(M2C_UNK);                     /* extern */
M2C_UNK func_00102600();                            /* extern */
M2C_UNK func_00102B38();                            /* extern */

s32 func_0012B000(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) & 1) {
        *(s32 *)0x10000010 = 0x83;
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 0x80) {
        *(s32 *)0x10000810 = 0x82;
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 2) {
        func_00102600();
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 4) {
        func_00102B38();
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 8) {
        func_00100410();
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 0x10) {
        func_00101F20(1);
    }
    return 0x3030;
}

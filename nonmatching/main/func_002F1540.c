/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001B97A0(void);
extern int func_001B97B0(void);
s32 func_001B98D0(s32);                             /* extern */

s32 func_002F1540(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) != 2) {
        return 0;
    }
    if (func_001B98D0(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) func_001B97B0();
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) func_001B97A0();
        return 1;
    }
    return 0;
}

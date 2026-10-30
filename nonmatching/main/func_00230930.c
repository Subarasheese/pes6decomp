/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_0022B0A0();                                /* extern */

s32 func_00230930(void) {
    s32 temp_v0;

    if ((func_00309420() != 0) == 1) {
        return 0;
    }
    temp_v0 = func_00226710() & 0xFF;
    if ((temp_v0 != 0x39) && (temp_v0 != 0x2D) && (temp_v0 != 0x27) && (temp_v0 != 0x26) && (temp_v0 != 0x21) && (temp_v0 != 0x1D) && (temp_v0 != 0x1B) && (temp_v0 != 0x19) && (temp_v0 != 0x17) && (temp_v0 != 0x15) && (temp_v0 != 0x13) && (temp_v0 != 0x11) && (temp_v0 != 0xE) && (temp_v0 != 0xC) && (temp_v0 != 0x3A) && (temp_v0 != 0xA) && (temp_v0 != 9) && (temp_v0 != 8) && (temp_v0 != 7) && (temp_v0 != 5) && (temp_v0 != 4) && (temp_v0 != 3) && (temp_v0 != 2)) {
        return 0;
    }
    return func_0022B0A0();
}

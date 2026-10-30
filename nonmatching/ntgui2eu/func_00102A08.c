/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001009F0();                            /* extern */
M2C_UNK func_001012E0();                            /* extern */
s32 func_00101F10();                                /* extern */
s32 func_00101F18();                                /* extern */
M2C_UNK func_00102858();                            /* extern */
extern s32 D_0060207C;
extern s32 *D_00602588;

s32 func_00102A08(void) {
    s32 temp_v0;
    s32 temp_v1;

    if (((func_00101F10() & 0x800) && !(func_00101F18() & 0x800)) || ((func_00101F10() & 0x20) && !(func_00101F18() & 0x20)) || ((func_00101F10() & 0x40) && !(func_00101F18() & 0x40))) {
        func_001009F0();
        func_001012E0();
        func_00102858();
    } else {
        if ((func_00101F10() & 0x1000) && !(func_00101F18() & 0x1000)) {
            temp_v0 = *D_00602588;
            if (temp_v0 > 0) {
                *D_00602588 = temp_v0 - 1;
            }
        }
        if ((func_00101F10() & 0x4000) && !(func_00101F18() & 0x4000)) {
            temp_v1 = *D_00602588;
            if (temp_v1 < 6) {
                *D_00602588 = temp_v1 + 1;
            }
        }
        if ((func_00101F10() & 0x100) && !(func_00101F18() & 0x100)) {
            D_0060207C = 1;
        }
    }
    return 0;
}

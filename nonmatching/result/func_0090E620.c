/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002308F0(void);
s32 func_00230490();                                /* extern */
extern s32 D_003E77AC;
extern char D_00591C09[];

s32 func_0090E620(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u16 *var_s2;

    var_s1 = 0;
    var_s2 = D_003E77AC + 0xCA72;
    var_s0 = 0;
    if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 1)) {

    } else {
        temp_v1 = func_002308F0() & 0xFF;
        if ((temp_v1 != 0x1A) && (temp_v1 != 0x18) && (temp_v1 != 0x16) && (temp_v1 != 0x14) && (temp_v1 != 0x12) && (temp_v1 != 0xF) && (temp_v1 != 0xD) && (temp_v1 != 0xB) && (temp_v1 != 0x20) && (temp_v1 != 0x1C)) {

        } else {
            var_s0 = func_00230490();
        }
    }
    if (var_s0 != 0) {
        var_a0 = 0;
        do {
            if (*var_s2 != 0xFFFF) {
                var_s1 += 1;
            }
            var_a0 += 1;
            var_s2 += 4;
        } while (var_a0 < 9);
        return var_s1;
    }
    return 0;
}

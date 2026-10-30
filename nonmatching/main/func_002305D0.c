/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_002262E0(s32);                             /* extern */
extern char D_00591C09[];

s32 func_002305D0(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    if ((func_00309420() != 0) == 1) {
        goto block_19;
    }
    if ((func_00309420() != 0) == 1) {
        var_v0_2 = 0xFF;
    } else {
        temp_a0 = func_002262E0(func_00226710()) & 0xFF;
        if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
            var_v0_2 = 0xFF;
        } else {
            var_v0_2 = temp_a0 & 0xFF;
        }
    }
    temp_v1 = var_v0_2 & 0xFF;
    var_v0 = 1;
    if ((temp_v1 != 1) && (var_v0 = 3, (temp_v1 != 3))) {
        switch (temp_v1) {                          /* irregular */
        case 5:
            return 0;
        default:
            var_v0 = 2;
            if (temp_v1 != 2) {
block_19:
                var_v0 = 0xFF;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        case 0:
            return 0;
        }
    } else {
        return var_v0;
    }
}

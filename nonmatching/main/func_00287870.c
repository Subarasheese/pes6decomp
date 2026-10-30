/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208250(s32);
extern s32 func_001A5BB0(s32);
extern s32 func_001A5F20(s32);
M2C_UNK func_00B79620(s32);                         /* extern */
extern u8 D_003E9CC8;
extern char D_00592373[];

s32 func_00287870(void) {
    s32 temp_s0;

    if ((s32) (*(u8 *)D_00592373) >= 0xCD) {
        return 1;
    }
    switch (D_003E9CC8) {                           /* irregular */
    case 2:
        D_003E9CC8 = 0;
        return 1;
    default:
        temp_s0 = func_00208250((*(u8 *)D_00592373) & 0xFF);
        if (temp_s0 != func_001A5F20(4)) {
            func_00B79620(temp_s0);
            D_003E9CC8 = 1;
        }
        /* fallthrough */
    case 1:
        if (func_001A5BB0(4) != 0) {
            D_003E9CC8 = 2;
        }
        return 0;
    }
}

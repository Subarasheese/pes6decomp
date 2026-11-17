/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00208250(s32);
extern s32 func_001A5BB0(s32);
extern s32 func_001A5F20(s32);
void func_00B79620(s32);
extern u8 D_003E9CC8;
extern char D_00592373[];

s32 func_00287870(void) {
    s32 temp_s0;
    u8 a0;

    a0 = *(u8 *)D_00592373;
    if ((s32)a0 >= 0xCD) {
        return 1;
    }
    if (D_003E9CC8 == 2) {
        D_003E9CC8 = 0;
        return 1;
    }
    if (D_003E9CC8 != 1) {
        temp_s0 = func_00208250(a0);
        if (temp_s0 != func_001A5F20(4)) {
            func_00B79620(temp_s0);
            D_003E9CC8 = 1;
        }
    }
    if (func_001A5BB0(4) != 0) {
        D_003E9CC8 = 2;
    }
    return 0;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00228F20(s32);                             /* extern */
s32 func_00229010(s32);                             /* extern */
void *func_0022F150();                              /* extern */
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s32);          /* extern */
M2C_UNK func_0094C620(s32, s32);                    /* extern */
M2C_UNK func_00955680(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0098D520(s32);                         /* extern */
M2C_UNK func_0098F760(s32, s32);                    /* extern */
extern s32 D_003E77B4;

s32 func_0093D040(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 var_s2;
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        temp_s6 = (arg0 & 0xFF) * 0xC;
        var_s2 = 0;
        if ((s32) M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4ABB) > 0) {
loop_5:
            temp_s0 = func_00234870(arg1, var_s2 & 0xFF, 0, arg0) & 0xFF;
            temp_v1 = temp_s0 & 0xFF;
            temp_s1 = func_00234870(arg1, var_s2 & 0xFF, 1, arg0) & 0xFF;
            if (temp_v1 < 0x71) {
                temp_v0_2 = temp_s1 & 0xFF;
                if ((temp_v0_2 < 0x71) && (temp_v1 != temp_v0_2)) {
                    temp_s5 = func_00229010(temp_s0) & 0xFF;
                    temp_v1_2 = func_00229010(temp_s1) & 0xFF;
                    if (((temp_s5 & 0xFF) < 0x50) && ((temp_v1_2 & 0xFF) < 0x50) && (func_00233EF0(temp_s0, arg1) == 0) && (func_00233EF0(temp_s1, arg1) == 0)) {
                        if ((func_00228F20(temp_s0) & 0xFF) <= 0) {
                            if ((func_00228F20(temp_s1) & 0xFF) <= 0) {
                                func_00955680(arg0, arg1, temp_s0, temp_s1);
                                func_0098D520(arg0);
                                goto block_19;
                            }
                            goto block_17;
                        }
block_17:
                        func_0098F760(temp_s0, temp_s1);
                        temp_s0_2 = func_00228F20(temp_s0);
                        func_0094C620(temp_s0_2, func_00228F20(temp_s1));
                        M2C_FIELD((temp_s6 + D_003E77B4), s8 *, 0x4AB7) = var_s2;
                        M2C_FIELD(temp_v0, s8 *, 0x29) = var_s2;
                        return 1;
                    }
                }
            }
block_19:
            var_s2 += 1;
            if (var_s2 >= (s32) M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4ABB)) {
                goto block_21;
            }
            goto loop_5;
        }
        goto block_21;
    }
block_21:
    return 0;
}

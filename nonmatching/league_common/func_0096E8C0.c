/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022F0E0(void);
extern s32 func_00226710(void);
extern u8 func_002243B0(s32, s32);
void *func_00224E20(s32, s32);                      /* extern */
extern char D_00591C09[];

void func_0096E8C0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s1;
    void *temp_v0_2;

    temp_v0 = func_0022F0E0();
    if ((temp_v0 != 0) && (((*(u8 *)D_00591C09) != 0xE) || ((((func_00226710() & 0xFF) == 0x2C) || ((func_00226710() & 0xFF) == 0x2D)) && (((func_00226710() & 0xFF) == 0x38) || ((func_00226710() & 0xFF) == 0x39))))) {
        var_s1 = 0;
loop_7:
        if ((s32) M2C_FIELD((temp_v0 + ((arg1 & 0xFF) * 0x280) + ((var_s1 & 0xFF) * 0x14)), u8 *, 0x5E) > 0) {
            temp_v0_2 = func_00224E20(arg0, func_002243B0(arg0, var_s1) & 0xFF);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, u16 *, 4) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 4) + 1);
                goto block_10;
            }
        } else {
block_10:
            var_s1 = (var_s1 + 1) & 0xFF;
            if (var_s1 < 0x20) {
                goto loop_7;
            }
        }
    }
}

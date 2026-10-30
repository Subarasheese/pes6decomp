/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229210(void);
extern s32 func_00229280(s32);
extern s32 func_002383D0(s32);
extern s32 func_00238330(s32);
extern u8 func_00236870(s32, s32, s32);
s32 func_00977E20(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    void *temp_s0_2;

    temp_s0 = func_00238330(arg0) & 0xFF;
    temp_s0_2 = func_00229210();
    temp_v0 = func_00229280(temp_s0 & 0xFF);
    if (temp_s0_2 == NULL) {
        return 1;
    }
    if (temp_v0 != 0) {
        var_s0 = func_00236870((s32) (temp_s0_2 + 0x25E2), arg0, (M2C_FIELD(temp_v0, u8 *, 4) - 1) & 0xFF) & 0xFF;
        if ((func_002383D0(arg0) & 0xFF) == 1) {
            var_s0 = (var_s0 + 0x10) & 0xFF;
        }
        return var_s0 & 0xFF;
    }
    return 1;
}

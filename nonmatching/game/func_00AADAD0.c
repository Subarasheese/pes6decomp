/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00AB38D0(void *);
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
extern char D_00591E6C[];
extern char D_00591E74[];

void func_00AADAD0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;
    s32 var_v0;

    if ((func_00AB38D0(arg0) == 4) && (M2C_FIELD(arg0, u8 *, 0x221) & 1)) {
        if ((arg1 & 0xFFFF) != 0x2AC) {
            var_v0 = arg2 - ((((arg3 != 0) ? -1 : 1) << 0xE) & 0xFFFF);
        } else {
            var_v0 = arg2 + ((((arg3 != 0) ? -1 : 1) << 0xE) & 0xFFFF);
        }
        temp_s1 = var_v0 & 0xFFFF;
        (*(f32 *)D_00591E6C) += (f32) func_00BBB990(temp_s1, 0x10);
        (*(f32 *)D_00591E74) += (f32) func_00BBB9C0(temp_s1, 0x10);
    }
}

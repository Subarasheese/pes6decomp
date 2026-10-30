/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0063B680(s32 *);                           /* extern */
s32 func_0063B6A0(s32);                             /* extern */
s32 func_0063B6C0();                                /* extern */
M2C_UNK func_00654AC0();                            /* extern */
M2C_UNK func_00654AD0(M2C_UNK);                     /* extern */
M2C_UNK func_00654AE0(f32);                         /* extern */
M2C_UNK func_006557C0();                            /* extern */
extern u16 D_003EA110;
extern char D_0065C308[];

void func_00628DF0(void) {
    f32 var_f0;
    f32 var_f1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;

    if ((*(s32 *)D_0065C308) != 0) {
        (*(s32 *)D_0065C308) = 0;
        temp_s0 = func_0063B6A0(func_0063B680(((void *)D_0065C308)) & 0xFF) & 0xFFFF;
        var_s1 = func_0063B6C0() & 0xFFFF;
        temp_v0 = temp_s0 & 0xFFFF;
        if (temp_v0 < var_s1) {
            var_s1 = temp_v0;
        }
        if (var_s1 & 0xFFFF) {
            if (D_003EA110 == 0) {
                func_006557C0();
                func_00654AC0();
            }
            if (var_s1 < 0) {
                var_f1 = 2.0f * (f32) (((u32) var_s1 >> 1) | (var_s1 & 1));
            } else {
                var_f1 = (f32) var_s1;
            }
            if (temp_s0 < 0) {
                var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
            } else {
                var_f0 = (f32) temp_s0;
            }
            func_00654AE0(var_f1 / var_f0);
        } else {
            func_00654AD0(0);
        }
        D_003EA110 = (u16) var_s1;
    }
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12FD0(s32, s32, s32, M2C_UNK);          /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132C0(s32);                             /* extern */
s32 func_00C136E0(s32, M2C_UNK);                    /* extern */
s32 func_00C13740(s32, M2C_UNK);                    /* extern */
s32 func_00C137F0();                                /* extern */
s32 func_00C13840();                                /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern char D_003DA424[];
extern s8 D_003E9D50;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

u8 func_002C5B60(s8 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    u8 var_s1;

    temp_v1 = arg0 & 0xFF;
    var_s1 = 0xFF;
    if ((func_00C17E10((temp_v1 >> 5) & 1, temp_v1 & 0x1F) & 0xFF) == 0xFF) {
        var_s0 = -1;
    } else {
        temp_s0 = func_00C13840();
        temp_a1 = func_00C137F0();
        D_003E9D53 = 0xFF;
        D_003E9D50 = arg0;
        D_003E9D52 = 0;
        var_v0 = func_00C12FD0(temp_s0, temp_a1, (*(s32 *)D_003DA424), 1);
        if (var_v0 == -1) {
            var_v0 = temp_s0;
        }
        var_s0 = var_v0;
    }
    if (var_s0 != -1) {
        if ((func_00C132C0(var_s0) & 0xFF) != 1) {
            var_s0 = func_00C136E0(var_s0, 1);
            if (var_s0 == -1) {
                var_s0 = func_00C13840();
                if ((func_00C132C0(var_s0) & 0xFF) != 1) {
                    var_s0 = func_00C13740(var_s0, 1);
                }
            }
        }
        var_s1 = M2C_FIELD(func_00C13280(var_s0), u8 *, 1);
    }
    return var_s1;
}

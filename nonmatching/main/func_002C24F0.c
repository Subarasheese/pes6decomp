/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12C40();                                /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0(s32);                             /* extern */
s32 func_00C136E0(s32, M2C_UNK);                    /* extern */
s32 func_00C13740();                                /* extern */
s32 func_00C13840();                                /* extern */
s32 func_00C18DC0(u8);                              /* extern */
extern s32 (*D_005E3410)(s32, s32, f32);
extern char D_005E3414[];

s32 func_002C24F0(s32 arg0) {
    s32 temp_a1;
    s32 temp_hi;
    s32 var_s0;
    s32 var_s2;
    u8 temp_s0;
    void *temp_v0;

    var_s2 = arg0;
    var_s0 = 0;
    if (func_00C12C40() != 0) {
        if ((*(u8 *)D_005E3414) == (((s32) (func_00C132B0(var_s2) & 0xFF) >> 5) & 1)) {
            temp_v0 = func_00C13280(var_s2);
            if (M2C_FIELD(temp_v0, u8 *, 5) & 0x30) {
                temp_s0 = (*(u8 *)D_005E3414);
                if ((func_00C132C0(var_s2) & 0xFF) != 1) {
                    var_s2 = func_00C136E0(var_s2, 1);
                    if (var_s2 == -1) {
                        var_s2 = func_00C13840();
                        if ((func_00C132C0(var_s2) & 0xFF) == 1) {

                        } else {
                            var_s2 = func_00C13740();
                        }
                    }
                }
                temp_a1 = ((s32) ((func_00C18DC0(M2C_FIELD(func_00C13280(var_s2), u8 *, 1)) & 0xFF) + (temp_s0 & 0xFF)) % 2) * 2;
                temp_hi = (s32) M2C_FIELD(temp_v0, u16 *, 2) % 312;
                var_s0 = D_005E3410(temp_hi, temp_a1, (f32) (1 - temp_a1) * ((86.59164f * (f32) temp_hi) - 13465.0f));
            }
        }
    }
    return var_s0;
}

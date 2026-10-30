/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00949020(void *, s32, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00952910(void *, u16);                     /* extern */
M2C_UNK func_00961800(void *);                      /* extern */
s32 func_00962A70(void *);                          /* extern */
M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B3480(void *, f32, M2C_UNK);            /* extern */

s32 func_00C0A140(void *arg0) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 1;
    temp_a0 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF;
    if ((M2C_FIELD(arg0, u8 *, 0x16) == 2) && (M2C_FIELD(arg0, u16 *, 0x18) == 0x32)) {
        var_s0 = 0;
    }
    if ((temp_a0 & 0xFFFF) >= 0x6001) {
        var_s0 = 0;
    }
    func_0096D0A0(arg0, func_00952910(arg0, M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF, 0);
    if (var_s0 != 0) {
        if ((func_00962A70(arg0) != 0) && (func_00949020(arg0, func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0xE0), 0), 0x14, 0x3000) != 0)) {

        } else {
            func_00961800(arg0);
        }
        return 4;
    }
    return 2;
}

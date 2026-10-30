/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
void func_00A008A0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    u16 var_v1;

    temp_s0 = arg1 & 0xFFFF;
    if (temp_s0 >= (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x2C)) & 0xFFFF)) {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x2C);
    } else if (arg2 != 0) {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x26) - ((temp_s0 * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF);
    } else {
        var_v1 = M2C_FIELD(arg0, u16 *, 0x26) + ((temp_s0 * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = var_v1;
}

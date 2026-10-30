/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001161E8(s16, s16, s32, s32, s32, s32, s32 *, s32 *); /* extern */
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern char D_00538234[];
extern char D_00538238[];
extern char D_0053823C[];
extern char D_00538240[];

s32 func_00215A20(void *arg0) {
    s16 temp_a1;
    s16 temp_t3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_s0;
    s32 var_a0;
    s32 var_v0;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_t3 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC0);
    var_v0 = 0;
    temp_a5 = M2C_FIELD(arg0, s32 *, 0xBC);
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_t3;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    (*(s32 *)D_00538234) = temp_a2;
    (*(s32 *)D_00538238) = temp_a3;
    (*(s32 *)D_0053823C) = temp_s0;
    (*(s32 *)D_00538240) = temp_a5;
    if ((temp_t3 != -1) && (temp_a1 != -1)) {
        var_v0 = func_001161E8(temp_t3, temp_a1, temp_a2, temp_a3, temp_s0, temp_a5, ((void *)D_00538234), ((void *)D_00538230));
    }
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (var_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = temp_s0;
    return var_a0;
}

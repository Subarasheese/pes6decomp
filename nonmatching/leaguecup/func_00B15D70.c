/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00B15E90();                                /* extern */
s32 func_00B15F50();                                /* extern */
s32 func_00B16300(M2C_UNK, s32, s32, s32);          /* extern */
s32 func_00B199C0(s32, s32, s32);                   /* extern */
extern s32 D_003E77B4;
extern void *D_003EAD78;

s32 func_00B15D70(s32 arg0) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    u8 temp_a1;
    void *temp_s4;

    temp_s4 = D_003EAD78;
    if (temp_s4 == NULL) {
        return 0;
    }
    temp_s2 = func_00B15F50() & 0xFF;
    temp_s1 = func_00B15E90() & 0xFF;
    temp_v1 = M2C_FIELD(temp_s4, s32 *, 0xE00);
    temp_s0 = func_00B199C0(arg0, temp_s2, temp_s1) & 0xFF;
    if ((temp_v1 != 9) && (temp_v1 != 4)) {
        var_v0 = func_00B16300(1, arg0, temp_s2, temp_s1);
    } else {
        var_v0 = func_00B16300(2, arg0, temp_s2, temp_s1);
    }
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    temp_a2 = arg0 & 0xFF;
    temp_a1 = M2C_FIELD((((temp_s0 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4ABA);
    temp_v1_2 = (temp_a1 - temp_a2) * 3;
    if ((var_v0 < temp_v1_2) || (temp_a1 != temp_a2)) {
        if (temp_v1_2 >= var_v0) {
            return 0;
        }
        goto block_13;
    }
block_13:
    return 1;
}

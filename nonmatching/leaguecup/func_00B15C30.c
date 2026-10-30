/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00B15E90();                                /* extern */
s32 func_00B15F50();                                /* extern */
s32 func_00B16300(M2C_UNK, s32, s32, s32);          /* extern */
s32 func_00B199C0(s32, s32, s32);                   /* extern */
extern s32 D_003E77B4;
extern s32 D_003EAD78;

s32 func_00B15C30(s32 arg0) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_v0;
    u8 temp_a1;

    if (D_003EAD78 == 0) {
        goto block_14;
    }
    temp_s3 = func_00B15F50() & 0xFF;
    temp_s0 = func_00B15E90() & 0xFF;
    temp_s2 = func_00B199C0(arg0, temp_s3, temp_s0) & 0xFF;
    var_s0 = func_00B16300(0, arg0, temp_s3, temp_s0);
    var_v0 = func_00B16300(2, arg0, temp_s3, temp_s0);
    if (var_s0 < 0) {
        var_s0 = -var_s0;
    }
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    temp_a2 = arg0 & 0xFF;
    temp_a1 = M2C_FIELD((((temp_s2 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4ABA);
    if (temp_a1 == temp_a2) {
        temp_v1 = (temp_a1 - temp_a2) * 3;
        if (var_s0 >= temp_v1) {
            if (var_v0 >= temp_v1) {
                return 1;
            }
            goto block_11;
        }
    }
block_11:
    temp_v1_2 = (temp_a1 - temp_a2) * 3;
    if ((temp_v1_2 < var_s0) && (temp_v1_2 < var_v0)) {
        return 1;
    }
block_14:
    return 0;
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
void func_008BD2E0(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_s3;
    u8 *var_a0;
    u8 *var_s2;
    u8 temp_a0;
    u8 var_s4;
    u8 var_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s1;

    var_s3 = 0;
    var_s2 = arg0;
    var_s4 = *arg0;
    do {
        temp_s1 = arg0 + var_s3;
        if ((arg1 & 0xFF) == (func_002937A0(M2C_FIELD(temp_s1, u8 *, 0x4A)) & 0xFF)) {
            temp_a2 = var_s4 & 0xFF;
            M2C_FIELD((arg0 + temp_a2), u8 *, 0x15) = (u8) M2C_FIELD(temp_s1, u8 *, 0x4A);
            if (temp_a2 > 0) {
                temp_a1 = arg0 + (temp_a2 * 2);
                M2C_FIELD(temp_a1, u8 *, -1) = (u8) M2C_FIELD(var_s2, u8 *, 0x34);
                M2C_FIELD(temp_a1, u8 *, 0) = (u8) M2C_FIELD(var_s2, u8 *, 0x35);
            }
            temp_a1_2 = arg0 + temp_a2;
            M2C_FIELD(temp_a1_2, u8 *, 0x20) = (u8) M2C_FIELD(temp_s1, u8 *, 0x55);
            M2C_FIELD(temp_a1_2, u8 *, 0x2B) = (u8) M2C_FIELD(temp_s1, u8 *, 0x60);
            temp_a0 = M2C_FIELD(temp_s1, u8 *, 0x4A);
            switch (temp_a0) {                      /* irregular */
            case 16:
            case 23:
                var_a0 = arg0 + (temp_a2 * 2);
                if ((s32) *var_a0 < 0x4A) {
                    var_v1 = 0x4A;
block_14:
                    *var_a0 = var_v1;
                }
                break;
            case 15:
            case 22:
                var_a0 = arg0 + (temp_a2 * 2);
                if ((s32) *var_a0 >= 0x1F) {
                    var_v1 = 0x1E;
                    goto block_14;
                }
                break;
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        }
        var_s3 += 1;
        var_s2 += 2;
    } while (var_s3 < 0xB);
    *arg0 = var_s4;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0016A070(void *);
void func_00159A30(void *arg0) {
    s16 *temp_a0_2;
    s16 *temp_a1_2;
    s16 *temp_a7;
    s16 *var_a1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 temp_a6;
    s32 temp_v1;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_v1;
    u8 *temp_v0_2;
    u8 temp_v0;
    void *temp_s1;
    void *temp_s2;
    void *var_a3;

    temp_s1 = arg0 + 0x48;
    var_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_s2 = M2C_FIELD(arg0, void **, 0x48);
    if (var_v1 == 1) {
        if (func_0016A070(M2C_FIELD(arg0, void **, 8)) != 0) {
            var_v1 = M2C_FIELD(arg0, s32 *, 4);
        } else {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, void *, void *), 0x78)(M2C_FIELD(arg0, s32 *, 0x7C), arg0 + 0x68, arg0 + 0x6C, arg0 + 0x70);
            temp_a3 = M2C_FIELD(temp_s1, s32 *, 0x20);
            temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x24);
            temp_a5 = M2C_FIELD(temp_s1, s32 *, 0x18) - temp_a3;
            temp_a1 = M2C_FIELD(temp_s1, s32 *, 4);
            temp_a5_2 = (temp_v1 < temp_a5) ? temp_v1 : temp_a5;
            temp_a6 = M2C_FIELD(temp_s1, s32 *, 0x14);
            temp_a5_3 = (temp_a1 < temp_a5_2) ? temp_a1 : temp_a5_2;
            temp_a7 = temp_a6 + (temp_a3 * 2);
            if (M2C_FIELD(arg0, s8 *, 0xE) == 2) {
                var_a4 = 0;
                if (temp_a5_3 > 0) {
                    var_a3 = temp_s2;
                    do {
                        temp_a0 = var_a4 * 2;
                        temp_a1_2 = temp_a0 + temp_a7;
                        temp_a0_2 = temp_a0 + (temp_a6 + ((M2C_FIELD(temp_s1, s32 *, 0x1C) + temp_a3) * 2));
                        var_a4 += 1;
                        *temp_a1_2 = (M2C_FIELD(var_a3, u8 *, 0) + 0xFF80) << 8;
                        temp_v0 = M2C_FIELD(var_a3, u8 *, 1);
                        var_a3 += 2;
                        *temp_a0_2 = (temp_v0 + 0xFF80) << 8;
                    } while (var_a4 < temp_a5_3);
                }
            } else {
                var_a4_2 = 0;
                if (temp_a5_3 > 0) {
                    var_a1 = temp_a7;
                    do {
                        temp_v0_2 = temp_s2 + var_a4_2;
                        var_a4_2 += 1;
                        *var_a1 = (*temp_v0_2 + 0xFF80) << 8;
                        var_a1 += 2;
                    } while (var_a4_2 < temp_a5_3);
                }
            }
            var_v1 = 2;
            M2C_FIELD(arg0, s32 *, 4) = 2;
            M2C_FIELD(arg0, s32 *, 0x90) = temp_a5_3;
            M2C_FIELD(arg0, s32 *, 0x94) = (s32) (temp_a5_3 * (s8) (u8) M2C_FIELD(arg0, s8 *, 0xE));
        }
    }
    if (var_v1 == 2) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32), 0x80)(M2C_FIELD(arg0, s32 *, 0x84), M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x90));
        M2C_FIELD(arg0, s32 *, 4) = 3;
    }
}

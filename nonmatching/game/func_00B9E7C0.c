/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
void **func_00B2A420(u8);                           /* extern */
u16 func_00B39C00(void **);                         /* extern */
M2C_UNK func_00B89C70(void **);                     /* extern */
M2C_UNK func_00BD3BE0(void **, M2C_UNK);            /* extern */
extern char D_00CBCD8D[];

void func_00B9E7C0(void) {
    M2C_UNK var_a1;
    s32 var_s0;
    u16 temp_a0_3;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 temp_a0;
    u8 temp_a0_2;
    void **temp_v0;
    void **var_s1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;

    temp_v0 = func_00B2A420(func_00BF6270());
    var_s1 = func_00B2A420((((s64) ((s64) M2C_FIELD(*temp_v0, u8 *, 0x13) << 0x30) >> 0x30) * 0xB) + 1);
    var_s0 = 0;
    do {
        temp_a3 = M2C_FIELD(var_s1, void **, 0);
        if ((M2C_FIELD(temp_a3, u8 *, 0x16) == 0x33) && (M2C_FIELD(M2C_FIELD(temp_a3, void **, 4), u8 *, 0x2C) != 0) && (var_s1 != temp_v0)) {
            temp_a2 = M2C_FIELD(var_s1, void **, 4);
            if (M2C_FIELD(temp_a2, u8 *, 0x50) != 0) {
                if ((M2C_FIELD(temp_a2, u8 *, 0x51) == 0) && (M2C_FIELD(temp_a3, u8 *, 0x12) == M2C_FIELD(*temp_v0, u8 *, 0x12))) {
                    M2C_FIELD(temp_a3, u16 *, 0x1A) = 0xC0U;
                }
            } else {
                temp_a0 = M2C_FIELD(temp_a2, u32 *, 0x38);
                if (temp_a0 >= 0x600U) {
                    if (temp_a0 < 0xA00U) {
                        if (M2C_FIELD(temp_a2, u8 *, 0x51) != 0xFF) {
                            temp_v1 = M2C_FIELD(temp_a3, u16 *, 0x18);
                            if ((temp_v1 != 0x7F) && (temp_v1 != 0x80)) {
                                temp_v1_2 = M2C_FIELD(temp_a3, u16 *, 0x1A);
                                if ((temp_v1_2 != 0x7F) && (temp_v1_2 != 0x80)) {
                                    goto block_17;
                                }
                            }
                        }
                    } else {
                        goto block_17;
                    }
                } else {
                    temp_a0_2 = M2C_FIELD(temp_a2, u8 *, 0x51);
                    if (temp_a0_2 != 0xFF) {
                        if (temp_a0_2 != 0) {
                            func_00B89C70(var_s1);
                            (*(s8 *)D_00CBCD8D) = 0;
                        } else {
block_17:
                            if (M2C_FIELD(temp_a2, u8 *, 0x51) == 0) {

                            } else {
                                M2C_FIELD(temp_a2, u8 *, 0x51) = 0U;
                                (*(s8 *)D_00CBCD8D) = 0;
                                M2C_FIELD(M2C_FIELD(var_s1, void **, 0), u16 *, 0x18) = func_00B39C00(var_s1);
                                M2C_FIELD(M2C_FIELD(var_s1, void **, 0), s8 *, 0x66) = 0;
                                temp_a0_3 = M2C_FIELD(M2C_FIELD(var_s1, void **, 0), u16 *, 0x18);
                                switch (temp_a0_3) { /* irregular */
                                case 7:
                                    var_a1 = 4;
                                    break;
                                default:
                                case 8:
                                    var_a1 = 3;
                                    break;
                                case 9:
                                    var_a1 = 2;
                                    break;
                                case 10:
                                    var_a1 = 1;
                                    break;
                                }
                                func_00BD3BE0(var_s1, var_a1);
                            }
                            temp_a1 = M2C_FIELD(var_s1, void **, 0);
                            if (M2C_FIELD(temp_a1, u8 *, 0x12) == M2C_FIELD(*temp_v0, u8 *, 0x12)) {
                                M2C_FIELD(temp_a1, u16 *, 0x1A) = 0xC0U;
                            }
                        }
                    }
                }
            }
        }
        var_s0 += 1;
        var_s1 += 8;
    } while (var_s0 < 0xB);
}

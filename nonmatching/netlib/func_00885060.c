/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DE450(s32, s32, s32);
extern void func_001D7D80(void *, s16);
s32 func_00151EA0(M2C_UNK);                         /* extern */
void *func_00858B20(M2C_UNK *, s32);                /* extern */
M2C_UNK func_008864F0(void **, s32, s32, s8 *);     /* extern */
extern char D_008B21C0[];
extern char D_008B2534[];
extern char D_008B2550[];

s32 func_00885060(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp4C;
    s8 sp4D;
    s8 sp4E;
    s8 sp4F;
    f32 temp_f1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_a1;
    u8 var_a0_2;
    void **var_a0;
    void **var_s0;
    void *temp_v0;

    temp_v0 = func_00858B20(((void *)D_008B21C0), arg0);
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s8 *, 8) != 3) {
            if (arg3 == 9) {
                if (M2C_FIELD(temp_v0, u8 *, 0xB) != 0) {
                    sp4C = 0xF9;
                    sp4D = 0xAD;
                    sp4E = 0x81;
                } else {
                    sp4C = 0x83;
                    sp4D = 0xD6;
                    sp4E = 0xF6;
                }
                sp4F = 0xEF;
            } else {
                sp4F = 0xEF;
                sp4C = 0xFF;
                sp4D = 0xFF;
                sp4E = 0xFF;
            }
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0) + 9;
            if (temp_a1 >= 0xEU) {
                var_a0 = NULL;
            } else {
                var_a0 = (*(s32 *)D_008B2534) + (temp_a1 * 0x60);
                M2C_FIELD(var_a0, u8 *, 0x54) = temp_a1;
            }
            if (var_a0 != NULL) {
                if (*var_a0 != NULL) {
                    var_v0 = 1;
                } else {
                    goto block_25;
                }
            } else {
block_25:
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                func_008864F0(var_a0, arg1, arg2, &sp4C);
            }
        } else {
            if (((s32) (*(u16 *)D_008B2550) >> 5) & 1) {
                if (((s32) (*(u16 *)D_008B2550) >> 7) & 1) {
                    if (func_00151EA0(2) == 0) {
                        var_a0_2 = 7;
                    } else {
                        var_a0_2 = 5;
                    }
                } else {
                    var_a0_2 = 7;
                }
            } else {
                var_a0_2 = 5;
            }
            if (var_a0_2 >= 0xEU) {
                var_s0 = NULL;
            } else {
                var_s0 = (*(s32 *)D_008B2534) + (var_a0_2 * 0x60);
                M2C_FIELD(var_s0, u8 *, 0x54) = var_a0_2;
            }
            if (var_s0 != NULL) {
                if (M2C_FIELD(var_s0, void **, 0) != NULL) {
                    var_v0_2 = 1;
                } else {
                    goto block_50;
                }
            } else {
block_50:
                var_v0_2 = 0;
            }
            if (var_v0_2 != 0) {
                if (M2C_FIELD(var_s0, s32 *, 8) != 0) {
                    temp_f1 = M2C_FIELD(var_s0, f32 *, 0x38);
                    if (temp_f1 >= 2.1474836e9f) {
                        var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
                    } else {
                        var_a2 = (s32) temp_f1;
                    }
                    var_v0_3 = func_001DE450(arg2, 0x21, var_a2 & 0xFFFF) & 0xFF;
                    if (var_v0_3 > 0) {
                        if (var_v0_3 >= 3) {
                            var_v0_3 = 2;
                        }
                    } else {
                        var_v0_3 = 1;
                    }
                    func_001D7D80(M2C_FIELD(var_s0, void **, 0), (s16) ((s64) (((var_v0_3 & 0xFF) - 1) << 0x30) >> 0x30));
                }
                func_008864F0(var_s0, arg1, arg2, NULL);
            }
        }
        return 0;
    }
    return -1;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022BAC0(s32);
extern s32 func_0022BB90(s32);
extern void * func_0022C1E0(void);
extern s32 func_0022C140(s32);
void *func_0022BD00(u8, M2C_UNK, s32);              /* extern */
void *func_0022BFF0(u8, u8);                        /* extern */
s32 func_0099FB10();                                /* extern */
s32 func_0099FBB0(u8);                              /* extern */
void *func_0099FD80(u8);                            /* extern */
extern void *D_003E7B0C;
extern void *D_003EA994;

void func_0099FE60(void) {
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s5_2;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a1;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s6;
    s32 var_v0;
    s32 var_v1;
    s8 var_a1_2;
    u8 *var_a1_3;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_s4;
    u8 temp_s5;
    u8 temp_s6;
    u8 temp_v0_5;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_s0_2;
    u8 var_s2_3;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_s2_2;

    temp_s3 = D_003EA994;
    if (temp_s3 != NULL) {
        temp_v0 = func_0022C1E0();
        if (temp_v0 != NULL) {
            temp_s5 = M2C_FIELD(D_003E7B0C, u8 *, 0x28);
            M2C_FIELD(temp_s3, u8 *, 0x27) = temp_s5;
            temp_v0_2 = func_0022C140((s32) temp_s5);
            if (temp_v0_2 != 0) {
                M2C_FIELD(temp_s3, s32 *, 0x41C) = temp_v0_2;
                M2C_FIELD(temp_s3, s8 *, 4) = 0;
                func_0022BFF0(temp_s5, 0U);
                if (M2C_FIELD(temp_v0_2, u8 *, 0xB) == 1) {
                    M2C_FIELD(temp_s3, void **, 0x4A0) = func_0022BFF0(temp_s5, (M2C_FIELD(temp_v0_2, u8 *, 5) - 1) & 0xFF);
                }
                M2C_FIELD(temp_s3, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 9);
                M2C_FIELD(temp_s3, s32 *, 0) = 0;
                temp_a0 = M2C_FIELD(temp_s3, u8 *, 5);
                M2C_FIELD(temp_s3, u8 *, 6) = 1U;
                var_a1 = 1;
                if ((temp_a0 - 1) >= 2) {
                    do {
                        var_a1 = ((var_a1 & 0xFF) * 2) & 0xFF;
                        M2C_FIELD(temp_s3, u8 *, 6) = (u8) (M2C_FIELD(temp_s3, u8 *, 6) + 1);
                    } while (var_a1 < (temp_a0 - var_a1));
                }
                var_a2 = M2C_FIELD(temp_s3, u8 *, 6) - 1;
                var_a1_2 = 1;
                if (var_a2 >= 0) {
                    do {
                        temp_v1 = M2C_FIELD(temp_s3, u8 *, 5);
                        temp_a0_2 = var_a1_2 & 0xFF;
                        if ((s32) temp_v1 < (temp_a0_2 * 2)) {
                            M2C_FIELD((temp_s3 + var_a2), s8 *, 7) = (s8) (temp_v1 - temp_a0_2);
                        } else {
                            M2C_FIELD((temp_s3 + var_a2), s8 *, 7) = var_a1_2;
                        }
                        var_a2 -= 1;
                        var_a1_2 = ((var_a1_2 & 0xFF) * 2) & 0xFF;
                    } while (var_a2 >= 0);
                }
                var_s4 = 0;
                var_s6 = 0;
                var_s2 = 0;
                if ((s32) M2C_FIELD(temp_s3, u8 *, 5) > 0) {
                    do {
                        temp_v0_3 = func_0022BD00(temp_s5, 1, var_s4);
                        if (temp_v0_3 != NULL) {
                            if (var_s6 != 0) {
                                var_a0 = temp_s3 + var_s2;
                                var_a1_3 = var_a0 + 0x68;
                                M2C_FIELD((temp_s3 + (var_s2 * 2)), s16 *, 0x28) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 6));
                                var_s6 = 0;
                                var_s4 = (var_s4 + 1) & 0xFF;
                                M2C_FIELD(var_a0, u8 *, 0x68) = (u8) M2C_FIELD(temp_v0_3, u8 *, 6);
                            } else {
                                var_a0 = temp_s3 + var_s2;
                                var_a1_3 = var_a0 + 0x68;
                                M2C_FIELD((temp_s3 + (var_s2 * 2)), s16 *, 0x28) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 5));
                                var_s6 = 1;
                                M2C_FIELD(var_a0, u8 *, 0x68) = (u8) M2C_FIELD(temp_v0_3, u8 *, 5);
                            }
                            if (var_s2 > 0) {
                                if (M2C_FIELD(var_a0, u8 *, 0x67) != *var_a1_3) {
                                    var_s2 += 1;
                                }
                            } else {
                                var_s2 += 1;
                            }
                        }
                    } while (var_s2 < (s32) M2C_FIELD(temp_s3, u8 *, 5));
                }
                var_v1 = 0;
                var_a0_2 = temp_s3;
                do {
                    M2C_FIELD(var_a0_2, s32 *, 0x420) = 0;
                    var_v1 += 8;
                    M2C_FIELD(var_a0_2, s32 *, 0x424) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x428) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x42C) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x430) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x434) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x438) = 0;
                    M2C_FIELD(var_a0_2, s32 *, 0x43C) = 0;
                    var_a0_2 += 0x20;
                } while (var_v1 < 0x20);
                var_s4_2 = 0;
                var_s0 = 0;
                if ((s32) M2C_FIELD(temp_v0_2, u8 *, 7) > 0) {
                    var_s2_2 = temp_s3;
                    do {
                        temp_v0_4 = func_0022BFF0(temp_s5, M2C_FIELD((temp_v0 + var_s0 + M2C_FIELD(temp_v0_2, u8 *, 6)), u8 *, 2));
                        if ((temp_v0_4 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_4, u8 *, 0x16) << 0x3E) >> 0x3F) != 1)) {
                            var_a1_4 = 0;
                            if (var_s4_2 > 0) {
                                var_a0_3 = temp_s3;
loop_32:
                                if (M2C_FIELD(var_a0_3, s32 *, 0x420) != temp_v0_4) {
                                    var_a1_4 += 1;
                                    var_a0_3 += 4;
                                    if (var_a1_4 >= var_s4_2) {

                                    } else {
                                        goto loop_32;
                                    }
                                }
                            }
                            if (var_a1_4 >= var_s4_2) {
                                M2C_FIELD(var_s2_2, void **, 0x420) = temp_v0_4;
                                var_s4_2 += 1;
                                var_s2_2 += 4;
                            }
                        }
                        var_s0 += 1;
                    } while (var_s0 < (s32) M2C_FIELD(temp_v0_2, u8 *, 7));
                }
                M2C_FIELD(temp_s3, s32 *, 0x88) = func_0099FBB0(M2C_FIELD(temp_s3, u8 *, 5));
                temp_v1_2 = M2C_FIELD(temp_s3, u8 *, 5);
                switch (temp_v1_2) {                /* irregular */
                case 8:
                    var_v0 = func_0099FBB0(0x10U);
                    break;
                default:
                    var_v0 = -1;
                    break;
                case 16:
                    var_v0 = func_0099FBB0(8U);
                    break;
                }
                M2C_FIELD(temp_s3, s32 *, 0x8C) = var_v0;
                M2C_FIELD(temp_s3, s32 *, 0x90) = func_0099FB10();
                var_s0_2 = 0;
                temp_v0_5 = M2C_FIELD(temp_s3, u8 *, 5) - 2;
                M2C_FIELD(temp_s3, u8 *, 0x418) = temp_v0_5;
                temp_s4 = temp_v0_5 & 0xFF;
                temp_s6 = (temp_s4 + 1) & 0xFF;
loop_48:
                temp_v0_6 = func_0099FD80(var_s0_2);
                if ((temp_v0_6 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_6, u8 *, 0x16) << 0x3A) >> 0x3F) == 0) && ((temp_s2 = func_0022BB90((s32) M2C_FIELD(temp_v0_6, u8 *, 5)) & 0xFF, temp_v1_3 = func_0022BB90((s32) M2C_FIELD(temp_v0_6, u8 *, 6)) & 0xFF, ((temp_s2 & 0xFF) > 0)) || ((temp_v1_3 & 0xFF) > 0))) {
                    M2C_FIELD(temp_s3, u8 *, 0x418) = var_s0_2;
                } else {
                    var_s0_2 = (var_s0_2 + 1) & 0xFF;
                    if ((s32) var_s0_2 >= 0x20) {

                    } else {
                        goto loop_48;
                    }
                }
                if (M2C_FIELD(temp_v0_2, u8 *, 0xB) == 1) {
                    temp_a0_3 = M2C_FIELD(temp_s3, u8 *, 0x418);
                    if (temp_s4 == temp_a0_3) {
                        temp_v0_7 = func_0099FD80(temp_a0_3);
                        if ((temp_v0_7 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_7, u8 *, 0x16) << 0x3A) >> 0x3F) == 0)) {
                            temp_v0_8 = func_0099FD80(temp_s6);
                            if ((temp_v0_8 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_8, u8 *, 0x16) << 0x3A) >> 0x3F) == 0) && ((temp_s0 = func_0022BB90((s32) M2C_FIELD(temp_v0_8, u8 *, 5)) & 0xFF, temp_v1_4 = func_0022BB90((s32) M2C_FIELD(temp_v0_8, u8 *, 6)) & 0xFF, ((temp_s0 & 0xFF) > 0)) || ((temp_v1_4 & 0xFF) > 0))) {
                                M2C_FIELD(temp_s3, u8 *, 0x418) = temp_s6;
                            }
                        }
                    }
                }
                if (temp_s4 == M2C_FIELD(temp_s3, u8 *, 0x418)) {
                    temp_v0_9 = func_0099FD80(temp_s4);
                    if ((temp_v0_9 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0_9, u8 *, 0x16) << 0x3A) >> 0x3F) == 1)) {
                        var_s0_3 = 0;
                        var_s2_3 = temp_s4 & 0xFF;
                        if ((s32) temp_s4 >= 0) {
loop_68:
                            temp_v0_10 = func_0099FD80(var_s2_3);
                            if ((temp_v0_10 != NULL) && ((temp_s5_2 = func_0022BB90((s32) M2C_FIELD(temp_v0_10, u8 *, 5)) & 0xFF, temp_v1_5 = func_0022BB90((s32) M2C_FIELD(temp_v0_10, u8 *, 6)) & 0xFF, ((temp_s5_2 & 0xFF) > 0)) || ((temp_v1_5 & 0xFF) > 0))) {
                                M2C_FIELD(temp_s3, u8 *, 0x418) = var_s2_3;
                            } else {
                                var_s0_3 += 1;
                                var_s2_3 = (var_s2_3 - 1) & 0xFF;
                                if ((s32) temp_s4 < var_s0_3) {

                                } else {
                                    goto loop_68;
                                }
                            }
                        }
                        if ((M2C_FIELD(temp_v0_2, u8 *, 0xB) == 1) && (temp_s4 != M2C_FIELD(temp_s3, u8 *, 0x418))) {
                            temp_v0_11 = func_0099FD80(temp_s6);
                            if ((temp_v0_11 != NULL) && ((temp_s0_2 = func_0022BB90((s32) M2C_FIELD(temp_v0_11, u8 *, 5)) & 0xFF, temp_v1_6 = func_0022BB90((s32) M2C_FIELD(temp_v0_11, u8 *, 6)) & 0xFF, ((temp_s0_2 & 0xFF) > 0)) || ((temp_v1_6 & 0xFF) > 0))) {
                                M2C_FIELD(temp_s3, u8 *, 0x418) = temp_s6;
                            }
                        }
                    }
                }
                if (func_0099FD80(M2C_FIELD(temp_s3, u8 *, 0x418)) == NULL) {
                    M2C_FIELD(temp_s3, u8 *, 0x418) = 0U;
                }
            }
        }
    }
}

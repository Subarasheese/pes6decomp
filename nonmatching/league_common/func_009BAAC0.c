/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA9C0;

void func_009BAAC0(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a0;
    u64 temp_a5_2;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a4_2;
    u8 temp_a4_3;
    u8 temp_a5;
    u8 temp_a5_3;
    u8 temp_a5_4;
    u8 temp_a6_2;
    u8 temp_a6_3;
    u8 temp_a6_4;
    u8 temp_a7_2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t1;
    u8 temp_v1;
    u8 temp_v1_3;
    void *temp_a0_2;
    void *temp_a2_2;
    void *temp_a4;
    void *temp_a4_4;
    void *temp_a6;
    void *temp_a7;
    void *temp_v1_2;
    void *var_v1;

    if (D_003EA9C0 != 0) {
        temp_a2 = arg1 & 0xFF;
        temp_a1 = temp_a2 * 4;
        temp_a6 = temp_a1 + D_003EA9C0;
        if (M2C_FIELD(temp_a6, u16 *, 0x7C) != 0xFFFF) {
            if (M2C_FIELD(temp_a6, u16 *, 0x7E) != 0xFFFF) {
                temp_a5 = M2C_FIELD(arg0, u8 *, 0x16);
                if ((((u64) ((s64) temp_a5 << 0x3B) >> 0x3F) == 1) && (((u64) ((s64) temp_a5 << 0x39) >> 0x3F) == 0)) {
                    M2C_FIELD(temp_a6, s32 *, 0xB8) = 1;
                    return;
                }
                temp_a6_2 = M2C_FIELD(arg0, u8 *, 0x16);
                temp_a5_2 = (u64) ((s64) temp_a6_2 << 0x3D) >> 0x3F;
                if ((temp_a5_2 == 1) && (((u64) ((s64) temp_a6_2 << 0x38) >> 0x3F) == 1)) {
                    if (M2C_FIELD((temp_a2 + D_003EA9C0), u8 *, 0xE3) != 1) {
                        temp_a4 = (temp_a2 * 6) + D_003EA9C0;
                        temp_a0 = M2C_FIELD(temp_a4, u8 *, 6);
                        if (temp_a0 == 0) {
                            if (M2C_FIELD(temp_a4, u8 *, 9) == 0) {
                                temp_v1 = M2C_FIELD(temp_a4, u8 *, 5);
                                if (temp_v1 == 0) {
                                    temp_t1 = M2C_FIELD(temp_a4, u8 *, 8);
                                    if (temp_t1 == 0) {
                                        temp_a7 = (temp_a2 * 2) + D_003EA9C0;
                                        temp_t0 = M2C_FIELD(temp_a4, u8 *, 7);
                                        temp_a5_3 = M2C_FIELD(temp_a4, u8 *, 4);
                                        temp_a6_3 = M2C_FIELD(temp_a7, u8 *, 0x41);
                                        temp_a4_2 = M2C_FIELD(temp_a7, u8 *, 0x40);
                                        if ((temp_a4_2 + temp_a5_3) != (temp_a6_3 + temp_t0)) {
                                            if ((s32) M2C_FIELD(temp_a7, u8 *, 0x55) >= (s32) M2C_FIELD(temp_a7, u8 *, 0x54)) {
                                                var_v1 = temp_a1 + D_003EA9C0;
                                                var_a0 = 0xF;
                                            } else {
                                                var_v1 = temp_a1 + D_003EA9C0;
                                                var_a0 = 0xE;
                                            }
                                        } else if ((temp_t1 + (temp_t0 + (temp_a6_3 * 2))) >= (temp_a4_2 + ((temp_a5_3 + temp_v1) * 2))) {
                                            var_v1 = temp_a1 + D_003EA9C0;
                                            var_a0 = 0x11;
                                        } else {
                                            var_v1 = temp_a1 + D_003EA9C0;
                                            var_a0 = 0x10;
                                        }
                                    } else {
                                        goto block_32;
                                    }
                                } else {
block_32:
                                    temp_a0_2 = (temp_a2 * 2) + D_003EA9C0;
                                    temp_a2_2 = (temp_a2 * 6) + D_003EA9C0;
                                    temp_a7_2 = M2C_FIELD(temp_a0_2, u8 *, 0x41);
                                    temp_a4_3 = M2C_FIELD(temp_a0_2, u8 *, 0x40);
                                    temp_t0_2 = M2C_FIELD(temp_a2_2, u8 *, 7);
                                    temp_a6_4 = M2C_FIELD(temp_a2_2, u8 *, 8);
                                    temp_a5_4 = M2C_FIELD(temp_a2_2, u8 *, 4);
                                    if ((temp_v1 + (temp_a4_3 + temp_a5_4)) != (temp_a6_4 + (temp_a7_2 + temp_t0_2))) {
                                        if ((s32) temp_a6_4 >= (s32) temp_v1) {
                                            var_v1 = temp_a1 + D_003EA9C0;
                                            var_a0 = 0x13;
                                        } else {
                                            var_v1 = temp_a1 + D_003EA9C0;
                                            var_a0 = 0x12;
                                        }
                                    } else if ((temp_a6_4 + (temp_t0_2 + (temp_a7_2 * 2))) >= (temp_a4_3 + ((temp_a5_4 + temp_v1) * 2))) {
                                        var_v1 = temp_a1 + D_003EA9C0;
                                        var_a0 = 0x11;
                                    } else {
                                        var_v1 = temp_a1 + D_003EA9C0;
                                        var_a0 = 0x10;
                                    }
                                }
                            } else {
                                goto block_23;
                            }
                        } else {
block_23:
                            if ((s32) M2C_FIELD(((temp_a2 * 6) + D_003EA9C0), u8 *, 9) >= (s32) temp_a0) {
                                var_v1 = temp_a1 + D_003EA9C0;
                                var_a0 = 0x15;
                            } else {
                                var_v1 = temp_a1 + D_003EA9C0;
                                var_a0 = 0x14;
                            }
                        }
                    } else if (M2C_FIELD(((temp_a2 * 6) + D_003EA9C0), u8 *, 4) == 0) {
                        var_v1 = temp_a1 + D_003EA9C0;
                        var_a0 = 0xF;
                    } else {
                        var_v1 = temp_a1 + D_003EA9C0;
                        var_a0 = 0xE;
                    }
                } else if ((temp_a5_2 == 1) && (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x39) >> 0x3F) == 1)) {
                    temp_v1_2 = (temp_a2 * 2) + D_003EA9C0;
                    temp_a0_3 = M2C_FIELD(temp_v1_2, u8 *, 0x41);
                    temp_v1_3 = M2C_FIELD(temp_v1_2, u8 *, 0x40);
                    if ((s32) temp_a0_3 < (s32) temp_v1_3) {
                        var_v1 = temp_a1 + D_003EA9C0;
                        var_a0 = 0xB;
                    } else if (temp_v1_3 != temp_a0_3) {
                        var_v1 = temp_a1 + D_003EA9C0;
                        var_a0 = 0xD;
                    } else {
                        var_v1 = temp_a1 + D_003EA9C0;
                        var_a0 = 0xC;
                    }
                } else {
                    temp_a4_4 = (temp_a2 * 6) + D_003EA9C0;
                    temp_a0_4 = M2C_FIELD(temp_a4_4, u8 *, 6);
                    if (temp_a0_4 == 0) {
                        if (M2C_FIELD(temp_a4_4, u8 *, 9) == 0) {
                            temp_a0_5 = M2C_FIELD(temp_a4_4, u8 *, 5);
                            if (temp_a0_5 == 0) {
                                if (M2C_FIELD(temp_a4_4, u8 *, 8) == 0) {
                                    if ((s32) M2C_FIELD(temp_a4_4, u8 *, 7) >= (s32) M2C_FIELD(temp_a4_4, u8 *, 4)) {
                                        var_v1 = temp_a1 + D_003EA9C0;
                                        var_a0 = 6;
                                    } else {
                                        var_v1 = temp_a1 + D_003EA9C0;
                                        var_a0 = 5;
                                    }
                                } else {
                                    goto block_80;
                                }
                            } else {
block_80:
                                if ((s32) M2C_FIELD(((temp_a2 * 6) + D_003EA9C0), u8 *, 8) >= (s32) temp_a0_5) {
                                    var_v1 = temp_a1 + D_003EA9C0;
                                    var_a0 = 8;
                                } else {
                                    var_v1 = temp_a1 + D_003EA9C0;
                                    var_a0 = 7;
                                }
                            }
                        } else {
                            goto block_71;
                        }
                    } else {
block_71:
                        if ((s32) M2C_FIELD(((temp_a2 * 6) + D_003EA9C0), u8 *, 9) >= (s32) temp_a0_4) {
                            var_v1 = temp_a1 + D_003EA9C0;
                            var_a0 = 0xA;
                        } else {
                            var_v1 = temp_a1 + D_003EA9C0;
                            var_a0 = 9;
                        }
                    }
                }
                M2C_FIELD(var_v1, s32 *, 0xB8) = var_a0;
            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD((temp_a1 + D_003EA9C0), s32 *, 0xB8) = 0;
        }
    }
}

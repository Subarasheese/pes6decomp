/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
void func_00B4A1D0(s32 arg0) {
    s32 temp_a3_4;
    s32 temp_a4_3;
    s32 temp_a5;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 var_v1_2;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        var_a1 = 0;
        var_a0 = 0;
        var_v1 = 0;
        temp_a4 = (M2C_FIELD(temp_v0, u8 *, 0x520) + 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x318) != 0) {
            return;
        }
        if (arg0 < 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x5CC) != 1) {
                temp_a2 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                if ((s32) temp_a2 <= 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = 0U;
                } else {
                    temp_a5 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a2 + temp_a5);
                    temp_a4_2 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                    temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                    if ((s32) temp_a3 >= (s32) temp_a4_2) {
                        if ((temp_a4_2 == 0xB) && (temp_a3 == 0xB)) {
                            var_a0 = -arg0;
                            M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a3 + temp_a5);
                            M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + temp_a5);
                        } else if (temp_a3 == 0xB) {
                            M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5B0) - 1);
                        }
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a4_2 + temp_a5);
                        temp_a3_2 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                        var_a0 = -arg0;
                        if (temp_a3_2 == 0xB) {
                            var_v1 = 1;
                            M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a3_2 - 1);
                            M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + temp_a5);
                        }
                    }
                    temp_a2_2 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                    if (temp_a2_2 == 0) {
                        M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a2_2 + 1);
                        M2C_FIELD(temp_v0, s32 *, 0x5CC) = 1;
                    } else {
                        goto block_43;
                    }
                }
                goto block_44;
            }
        } else {
            if (arg0 > 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0x5CC) != 1) {
                    temp_a3_3 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                    if ((s32) temp_a3_3 >= (temp_a4 & 0xFF)) {
                        M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a4;
                    } else {
                        temp_a4_3 = arg0 & 0xFF;
                        M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a3_3 + temp_a4_3);
                        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                        temp_a2_3 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                        temp_a3_4 = temp_a1 + 5;
                        if (temp_a3_4 >= (s32) temp_a2_3) {
                            if ((temp_a3_4 == 0xB) && (temp_a2_3 == 0xB)) {
                                var_a0 = -arg0;
                                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a2_3 + 1);
                                M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + temp_a4_3);
                            } else if (temp_a2_3 == 0xB) {
                                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5B0) + 1);
                            }
                        } else {
                            M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a1 + temp_a4_3);
                            temp_a2_4 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                            var_a0 = -arg0;
                            if (temp_a2_4 == 0xB) {
                                var_v1 = 1;
                                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a2_4 + 1);
                                M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + temp_a4_3);
                            }
                        }
block_43:
                        var_a1 = 1;
                    }
                    goto block_44;
                }
                M2C_FIELD(temp_v0, s32 *, 0x5CC) = 0;
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                if (temp_a0 != 0) {
                    if (temp_a0 != 0xB) {
                        M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a0;
                    } else {
                        goto block_28;
                    }
                } else {
block_28:
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a0 + 1);
                }
                var_v1_2 = 2;
                goto block_56;
            }
block_44:
            if (var_a0 == 0) {
                if ((var_a1 & 0xFF) != 1) {
                    if (M2C_FIELD(temp_v0, s32 *, 0x5CC) == 1) {
                        var_v1_2 = 4;
                        goto block_56;
                    }
                } else {
                    var_v1_2 = 2;
                    goto block_56;
                }
            } else {
                M2C_FIELD(temp_v0, s16 *, 0x5AC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x5A4);
                M2C_FIELD(temp_v0, s16 *, 0x5AE) = -0x10;
                if (var_v1 == 1) {
                    M2C_FIELD(temp_v0, s16 *, 0x5AC) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x5AC) + M2C_FIELD(temp_v0, s16 *, 0x5A4));
                }
                M2C_FIELD(temp_v0, s32 *, 0x5A8) = var_a0;
                var_v1_2 = 3;
block_56:
                M2C_FIELD(temp_v0, u8 *, 0x318) = var_v1_2;
            }
        }
    }
}

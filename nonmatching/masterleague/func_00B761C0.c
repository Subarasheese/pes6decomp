/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B74990(u8);                          /* extern */

void func_00B761C0(s32 arg0) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_s2;
    s32 var_s3;
    s8 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_s0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;

    temp_v0 = func_00B76A10();
    if ((temp_v0 != 0) && (temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x7A1), ((s32) temp_a0 > 0))) {
        temp_s0 = (temp_a0 - 1) & 0xFF;
        var_s3 = 0;
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xBA4);
        var_s2 = 0;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0xBA5) >= (s32) temp_a0) {
                M2C_FIELD(temp_v0, u8 *, 0xBA5) = temp_s0;
            }
            if (arg0 < 0) {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xBA5);
                if ((s32) temp_v0_2 <= 0) {
                    M2C_FIELD(temp_v0, u8 *, 0xBA5) = 0U;
                } else {
                    temp_a0_2 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0xBA5) = (u8) (temp_v0_2 + temp_a0_2);
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0x7C2);
                    if ((s32) M2C_FIELD(temp_v0, u8 *, 0xBA5) >= (s32) temp_v0_3) {
                        var_s3 = 1;
                    } else {
                        var_s2 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x7C2) = (u8) (temp_v0_3 + temp_a0_2);
                        var_s3 = 1;
                    }
                }
            } else if (arg0 > 0) {
                temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0xBA5);
                if ((s32) temp_v1_2 >= (temp_s0 & 0xFF)) {
                    func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x7D4), 0);
                    M2C_FIELD(temp_v0, u8 *, 0xBA4) = 1U;
                    M2C_FIELD(temp_v0, s8 *, 0x79C) = 1;
                    func_0026E840(0x8400F802);
                    M2C_FIELD(temp_v0, u8 *, 0xBA5) = temp_s0;
                } else {
                    temp_a1 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0xBA5) = (u8) (temp_v1_2 + temp_a1);
                    temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x7C2);
                    if ((temp_v1_3 + 0xA) >= (s32) M2C_FIELD(temp_v0, u8 *, 0xBA5)) {
                        var_s3 = 1;
                    } else {
                        var_s2 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x7C2) = (u8) (temp_v1_3 + temp_a1);
                        var_s3 = 1;
                    }
                }
            }
            func_00B74990(M2C_FIELD(temp_v0, u8 *, 0xBA5));
            if (var_s2 == 0) {
                var_v1 = 1;
                if ((var_s3 & 0xFF) == 1) {
                    goto block_31;
                }
            } else {
                var_v1 = 2;
                M2C_FIELD(temp_v0, s16 *, 0x7CC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x7C4);
                M2C_FIELD(temp_v0, s16 *, 0x7CE) = -9;
                M2C_FIELD(temp_v0, s32 *, 0x7C8) = var_s2;
block_31:
                M2C_FIELD(temp_v0, s8 *, 0x79C) = var_v1;
            }
            if (M2C_FIELD(temp_v0, u8 *, 0xBA4) != 1) {
                if (M2C_FIELD(temp_v0, u8 *, 0x998) != 1) {
                    temp_v1_4 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0xBA5) + temp_v0), u8 *, 0xB84);
                    switch (temp_v1_4) {            /* switch 2; irregular */
                    case 1:                         /* switch 2 */
                        func_00958000(0x36);
                        return;
                    case 0:                         /* switch 2 */
                        func_00958000(0x35);
                        return;
                    }
                } else {
                    func_00958000(0x38);
                    return;
                }
            } else {
                func_00958000(0x37);
                return;
            }
            break;
        case 1:                                     /* switch 1 */
            if (arg0 < 0) {
                func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x7D4), 1);
                M2C_FIELD(temp_v0, u8 *, 0xBA4) = 0U;
                M2C_FIELD(temp_v0, u8 *, 0xBA5) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x7C2) + 0xA);
                func_00B74990(M2C_FIELD(temp_v0, u8 *, 0xBA5));
                M2C_FIELD(temp_v0, s8 *, 0x79C) = 1;
                if (M2C_FIELD(temp_v0, u8 *, 0x998) != 1) {
                    temp_v1_5 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0xBA5) + temp_v0), u8 *, 0xB84);
                    switch (temp_v1_5) {            /* switch 3; irregular */
                    case 1:                         /* switch 3 */
                        func_00958000(0x36);
                        return;
                    case 0:                         /* switch 3 */
                        func_00958000(0x35);
                        break;
                    }
                } else {
                    func_00958000(0x38);
                    return;
                }
            }
            break;
        }
    }
}

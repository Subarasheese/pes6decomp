/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00228960();                              /* extern */
void *func_00970870(s32);                           /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B26810(s32 arg0) {
    s32 temp_v0_3;
    s32 var_s2;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a4;
    u8 temp_a5;
    u8 temp_a6;
    u8 temp_a7;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00970870(arg0);
        if (temp_v0_2 != NULL) {
            var_s2 = 0;
            temp_v0_3 = func_00B275D0(1);
            switch (temp_v0_3) {                    /* switch 1; irregular */
            case 2:                                 /* switch 1 */
                return 1;
            case 1:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
                if (M2C_FIELD(temp_v0, u8 *, 0x34) != 0) {
                    temp_v0_4 = M2C_FIELD(temp_v0, u8 *, 0x41);
                    switch (temp_v0_4) {            /* switch 2; irregular */
                    case 2:                         /* switch 2 */
                        if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x38) >> 0x3E) == 2) {
                            var_s2 = 1;
                        }
                        break;
                    case 1:                         /* switch 2 */
                        if (!(M2C_FIELD(temp_v0_2, u8 *, 0) & 1)) {
                            if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x38) >> 0x3E) == 1) {
                                var_s2 = 1;
                            }
                        } else if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x38) >> 0x3E) == 0) {
                            var_s2 = 1;
                        }
                        break;
                    case 0:                         /* switch 2 */
                        if (!(M2C_FIELD(temp_v0_2, u8 *, 0) & 1)) {
                            if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x38) >> 0x3E) == 0) {
                                var_s2 = 1;
                            }
                        } else if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x38) >> 0x3E) == 1) {
                            var_s2 = 1;
                        }
                        break;
                    }
                    if (var_s2 == 0) {
                        goto block_93;
                    }
                    goto block_43;
                }
block_43:
                temp_t1 = M2C_FIELD(temp_v0, u8 *, 0x35);
                if ((temp_t1 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0xD) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_t0 = M2C_FIELD(temp_v0, u8 *, 0x36);
                if ((temp_t0 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0xC) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a7 = M2C_FIELD(temp_v0, u8 *, 0x37);
                if ((temp_a7 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0xB) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a6 = M2C_FIELD(temp_v0, u8 *, 0x38);
                if ((temp_a6 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0xA) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a5 = M2C_FIELD(temp_v0, u8 *, 0x39);
                if ((temp_a5 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 9) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a4 = M2C_FIELD(temp_v0, u8 *, 0x3A);
                if ((temp_a4 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 8) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x3B);
                if ((temp_a3 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 7) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a2 = M2C_FIELD(temp_v0, u8 *, 0x3C);
                if ((temp_a2 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 6) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x3D);
                if ((temp_a1 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 5) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3E);
                if ((temp_a0 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 4) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3F);
                if ((temp_v1 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 3) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                temp_v0_5 = M2C_FIELD(temp_v0, u8 *, 0x40);
                if ((temp_v0_5 != 0) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 2) << 0x38) >> 0x3F) != 0)) {
                    return 1;
                }
                if ((var_s2 != 0) && !(temp_t1 & 0xFF) && !(temp_t0 & 0xFF) && !(temp_a7 & 0xFF) && !(temp_a6 & 0xFF) && !(temp_a5 & 0xFF) && !(temp_a4 & 0xFF) && !(temp_a3 & 0xFF) && !(temp_a2 & 0xFF) && !(temp_a1 & 0xFF) && !(temp_a0 & 0xFF) && !(temp_v1 & 0xFF) && !(temp_v0_5 & 0xFF)) {
                    return 1;
                }
                goto block_93;
            }
        } else {
            goto block_93;
        }
    } else {
block_93:
        return 0;
    }
}

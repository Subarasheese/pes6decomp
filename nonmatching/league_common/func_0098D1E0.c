/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226240(s32);                             /* extern */
s32 func_00226710();                                /* extern */
extern void *D_003E77B4;

void func_0098D1E0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u8 temp_v1;
    u8 temp_v1_10;
    u8 temp_v1_11;
    u8 temp_v1_12;
    u8 temp_v1_13;
    u8 temp_v1_14;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;

    temp_a0 = func_00226710() & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0x24:                                      /* switch 1 */
        temp_v1 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1 < 8) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1 + 1);
            return;
        }
        return;
    case 0x25:                                      /* switch 1 */
        temp_v1_2 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_2 < 0xC) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_2 + 1);
            return;
        }
        break;
    case 0x10:                                      /* switch 1 */
        temp_v1_3 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_3 < 5) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_3 + 1);
            return;
        }
        break;
    case 0x28:                                      /* switch 1 */
        temp_v1_4 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_4 < -1) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_4 + 1);
            return;
        }
        break;
    case 0x29:                                      /* switch 1 */
        temp_v1_5 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_5 <= 0) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_5 + 1);
            return;
        }
        break;
    case 0x2C:                                      /* switch 1 */
        temp_v1_6 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_6 < 9) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_6 + 1);
            return;
        }
        break;
    case 0x2F:                                      /* switch 1 */
        temp_v1_7 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_7 <= 0) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_7 + 1);
            return;
        }
        break;
    case 0x32:                                      /* switch 1 */
        temp_v1_8 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_8 < 7) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_8 + 1);
            return;
        }
        break;
    case 0x33:                                      /* switch 1 */
        temp_v1_9 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        if ((s32) temp_v1_9 < 9) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_9 + 1);
            return;
        }
        break;
    case 0x38:                                      /* switch 1 */
        temp_a0_2 = func_00226240(temp_a0) & 0xFF;
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_v1_10 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
            if ((s32) temp_v1_10 < 9) {
                M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_10 + 1);
                return;
            }
            break;
        case 1:                                     /* switch 2 */
            temp_v1_11 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
            if ((s32) temp_v1_11 < 0x11) {
                M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_11 + 1);
                return;
            }
            break;
        case 2:                                     /* switch 2 */
            temp_v1_12 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
            if ((s32) temp_v1_12 < 8) {
                M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_12 + 1);
                return;
            }
            break;
        case 3:                                     /* switch 2 */
            temp_v1_13 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
            if ((s32) temp_v1_13 < 8) {
                M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_13 + 1);
                return;
            }
            break;
        case 4:                                     /* switch 2 */
            temp_v1_14 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
            if ((s32) temp_v1_14 < 9) {
                M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (temp_v1_14 + 1);
                return;
            }
            break;
        }
        break;
    default:                                        /* switch 1 */
        if ((s32) M2C_FIELD(D_003E77B4, u8 *, 0x1363) < 2) {
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = 0U;
            return;
        }
        M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) (M2C_FIELD(D_003E77B4, u8 *, 0x16F1) + 1);
        M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = (u8) ((u8) M2C_FIELD(D_003E77B4, u8 *, 0x16F1) % (u8) M2C_FIELD(D_003E77B4, u8 *, 0x1363));
        break;
    }
}

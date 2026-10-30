/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */

void func_00B54D90(void *arg0) {
    s16 var_a0;
    s32 temp_v1_2;
    u16 temp_v0;
    u8 temp_a0_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_v1, s32 *, 0x1C) > 0) {
        M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_a0_2 = M2C_FIELD(temp_a0, u8 *, 0x4E);
    if (temp_a0_2 != 0xFF) {
        if (temp_a0_2 != 0) {
            M2C_FIELD(temp_a0, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_a0, u8 *, 0x4E) - 1);
        }
        temp_a0_3 = M2C_FIELD(arg0, void **, 0);
        if ((s32) M2C_FIELD(temp_a0_3, u8 *, 0x4E) <= 0) {
            temp_v1_2 = M2C_FIELD(temp_a0_3, u16 *, 0x26) + 0x4000;
            temp_v0 = temp_v1_2 & 0xFFFF;
            if ((temp_v1_2 < 0) && (temp_v0 != 0)) {

            }
            M2C_FIELD(temp_a0_3, u16 *, 0x2C) = temp_v0;
            temp_s1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_s1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x2C), 0x500));
            temp_s1_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_s1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1_2, u16 *, 0x2C), 0x500));
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x39U;
            temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
            switch (temp_v1_3) {                    /* switch 1; irregular */
            case 0x2D:                              /* switch 1 */
            case 0x55:                              /* switch 1 */
            case 0x56:                              /* switch 1 */
            case 0x51:                              /* switch 1 */
            case 0x52:                              /* switch 1 */
            case 0x42:                              /* switch 1 */
            case 0x41:                              /* switch 1 */
            case 0x36:                              /* switch 1 */
            case 0x31:                              /* switch 1 */
            case 0x1B:                              /* switch 1 */
            case 0x2C:                              /* switch 1 */
            case 0x2B:                              /* switch 1 */
            case 0x2A:                              /* switch 1 */
            case 0x18:                              /* switch 1 */
            case 0x38:                              /* switch 1 */
            case 0xF:                               /* switch 1 */
            case 0x1C:                              /* switch 1 */
                var_a0 = 0xF;
                goto block_37;
            case 0x3A:                              /* switch 1 */
            case 0x39:                              /* switch 1 */
            case 0x30:                              /* switch 1 */
            case 0x12:                              /* switch 1 */
            case 0x7:                               /* switch 1 */
            case 0x5:                               /* switch 1 */
            case 0x4:                               /* switch 1 */
                var_a0 = 0x11;
                goto block_37;
            case 0x13:                              /* switch 1 */
                var_a0 = 0x14;
                goto block_37;
            }
        }
    } else if (func_00BBB8C0(0x64) < 6) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x31U;
        temp_v1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        switch (temp_v1_4) {                        /* switch 2; irregular */
        case 0x2D:                                  /* switch 2 */
        case 0x55:                                  /* switch 2 */
        case 0x56:                                  /* switch 2 */
        case 0x51:                                  /* switch 2 */
        case 0x52:                                  /* switch 2 */
        case 0x42:                                  /* switch 2 */
        case 0x41:                                  /* switch 2 */
        case 0x36:                                  /* switch 2 */
        case 0x31:                                  /* switch 2 */
        case 0x1B:                                  /* switch 2 */
        case 0x2C:                                  /* switch 2 */
        case 0x2B:                                  /* switch 2 */
        case 0x2A:                                  /* switch 2 */
        case 0x18:                                  /* switch 2 */
        case 0x38:                                  /* switch 2 */
        case 0xF:                                   /* switch 2 */
        case 0x1C:                                  /* switch 2 */
            var_a0 = 0xF;
block_37:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
            break;
        case 0x3A:                                  /* switch 2 */
        case 0x39:                                  /* switch 2 */
        case 0x30:                                  /* switch 2 */
        case 0x12:                                  /* switch 2 */
        case 0x7:                                   /* switch 2 */
        case 0x5:                                   /* switch 2 */
        case 0x4:                                   /* switch 2 */
            var_a0 = 0x11;
            goto block_37;
        case 0x13:                                  /* switch 2 */
            var_a0 = 0x14;
            goto block_37;
        }
    }
}

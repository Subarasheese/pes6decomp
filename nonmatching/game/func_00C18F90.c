/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B3070(u16, u16, void *);            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BBB990(u16, M2C_UNK, void *);            /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00C18F90(void *arg0) {
    s16 var_a0;
    s32 temp_a0;
    u16 temp_a0_2;
    u8 temp_a0_3;
    void *temp_a2;
    void *temp_s1;
    void *temp_s1_2;

    temp_a0 = func_009E1C90(1) & 0xFF;
    if ((temp_a0 != 0xE) && (temp_a0 != 1)) {
        temp_a2 = M2C_FIELD(arg0, void **, 0);
        temp_a0_2 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u16 *, 0x30);
        switch (temp_a0_2) {                        /* switch 1; irregular */
        case 0x489:                                 /* switch 1 */
        case 0x1BF:                                 /* switch 1 */
            func_009B3070(M2C_FIELD(temp_a2, u16 *, 0x26), M2C_FIELD(temp_a2, u16 *, 0x2C), temp_a2);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x39U;
            temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
            switch (temp_a0_3) {                    /* switch 2; irregular */
            case 0x58:                              /* switch 2 */
            case 0x57:                              /* switch 2 */
            case 0x37:                              /* switch 2 */
            case 0x36:                              /* switch 2 */
            case 0x35:                              /* switch 2 */
            case 0x34:                              /* switch 2 */
            case 0x33:                              /* switch 2 */
            case 0x32:                              /* switch 2 */
            case 0x21:                              /* switch 2 */
            case 0x20:                              /* switch 2 */
            case 0x1F:                              /* switch 2 */
            case 0x16:                              /* switch 2 */
                var_a0 = 2;
block_25:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
                break;
            case 0x3A:                              /* switch 2 */
            case 0x39:                              /* switch 2 */
                var_a0 = 4;
                goto block_25;
            }
            break;
        case 0x48E:                                 /* switch 1 */
        case 0x38C:                                 /* switch 1 */
            M2C_FIELD(temp_a2, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a2, u16 *, 0x26);
            temp_s1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_s1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x26), 0x800, temp_a2));
            temp_s1_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_s1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1_2, u16 *, 0x26), 0x800));
            func_00BD4040(arg0, 1);
            var_a0 = 1;
            goto block_25;
        }
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x16) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
}

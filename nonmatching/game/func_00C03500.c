/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern void func_00207BE0(void *);
extern s32 func_00207AC0(s32, s32, s32);
extern void func_00299FB0(void *, s16, s32);
extern s32 func_00297D40(void *);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00AFB7C0(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00C036F0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_00C03500(void *arg0) {
    s32 temp_s0_2;
    s32 temp_v0;
    u16 temp_s0;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_s0_3;
    void *temp_s1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_s1 = M2C_FIELD(arg0, void **, 0xC);
        temp_v1 = M2C_FIELD(temp_s1, u16 *, 0x10);
        if ((s32) temp_v1 >= 0x59A) {
            if (func_00297D40(temp_s1) != 0) {
                temp_s0 = M2C_FIELD(func_00208310((s32) M2C_FIELD(temp_s1, u16 *, 0x10)), u16 *, 6);
                temp_s0_2 = temp_s0 & 0xFFFF;
                func_00299FB0(temp_s1, (s16) temp_s0_2, func_00207AC0(temp_s0_2, (s32) M2C_FIELD(func_00208310((s32) M2C_FIELD(temp_s1, u16 *, 0x10)), u16 *, 4), 0));
            }
block_39:
        default:                                    /* switch 1 */
            return 0;
        }
        if (temp_v1 == 0x48E) {
            func_00C036F0(0, 0x44, 0xFF);
        }
        return 1;
    case 0:                                         /* switch 1 */
        temp_s0_3 = M2C_FIELD(arg0, void **, 0xC);
        temp_v0_2 = (u16) M2C_FIELD(temp_s0_3, f32 *, 0x18);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_00207BE0(M2C_FIELD(temp_s0_3, void **, 4));
            temp_v1_2 = M2C_FIELD(M2C_FIELD(temp_s0_3, void **, 4), u16 *, 0x30);
            switch (temp_v1_2) {                    /* switch 3; irregular */
            case 0x409:                             /* switch 3 */
                func_00AFB7C0(temp_s0_3, 0xD00, M2C_FIELD(temp_s0_3, u8 *, 0x5C) + 0x20);
                break;
            case 0x48E:                             /* switch 3 */
                func_00AFB7C0(temp_s0_3, 0x500, 0x20);
                break;
            case 0x40C:                             /* switch 3 */
            case 0x40B:                             /* switch 3 */
            case 0x40A:                             /* switch 3 */
            case 0x2BD:                             /* switch 3 */
                func_00AFB7C0(temp_s0_3, 0x1100, M2C_FIELD(temp_s0_3, u8 *, 0x5C) + 0x20);
                break;
            }
            return 1;
        case 0:                                     /* switch 2 */
            temp_a0 = M2C_FIELD(temp_s0_3, void **, 4);
            if ((M2C_FIELD(temp_a0, f32 *, 0x38) > 1.0f) && (func_00207D10(temp_a0) != 0)) {
                func_00208610(M2C_FIELD(temp_s0_3, void **, 4));
                M2C_FIELD(temp_s0_3, f32 *, 0x18) = (s16) ((u16) M2C_FIELD(temp_s0_3, f32 *, 0x18) + 1);
            }
            goto block_39;
        }
        break;
    }
}

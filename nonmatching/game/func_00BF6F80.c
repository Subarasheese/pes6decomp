/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B33F0(void *, M2C_UNK *);               /* extern */
M2C_UNK func_00B2A420(u8);                          /* extern */
s32 func_00B5C480();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCDE2[];

s32 func_00BF6F80(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    s32 temp_s1;
    u16 temp_v1;
    u8 temp_s0;
    void *temp_a0;

    func_00B2A420(M2C_FIELD(arg0, u8 *, 0));
    temp_s1 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), func_009B33F0(arg0, ((void *)Pes6MatchPlayers))) & 0xFFFF;
    if ((func_00B5C480() & 0xFF) != 1) {
        if ((func_009B3070(temp_s1 & 0xFFFF, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x2001) {
            temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
            if ((temp_s0 == ((((M2C_FIELD(arg0, u16 *, 0x26) - (func_009B33F0(arg0, ((void *)Pes6MatchPlayers)) & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001)) && (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00CBCDE2))) {
                temp_f1 = M2C_FIELD(arg0, f32 *, 0xE8);
                if (!(temp_f1 <= 4364.5f)) {
                    if (temp_s1 >= 0x8000) {
                        goto block_51;
                    }
                    goto block_47;
                }
block_47:
                if ((temp_f1 < -4364.5f) && (temp_s1 < 0x8001)) {
                    goto block_51;
                }
                goto block_3;
            }
            goto block_41;
        }
block_41:
        goto block_51;
    }
block_3:
    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00CBCDE2)) {
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 0x2D5:
            if (M2C_FIELD(arg0, u8 *, 0x16) != 0x32) {
                temp_f1_2 = M2C_FIELD(temp_a0, f32 *, 0x38);
                if (!(temp_f1_2 < 30.0f) && (temp_f1_2 <= 50.0f)) {
                    return 1;
                }
                goto block_37;
            }
            temp_f1_3 = M2C_FIELD(temp_a0, f32 *, 0x38);
            if (!(temp_f1_3 < 30.0f) && (temp_f1_3 <= 54.0f)) {
                return 1;
            }
block_37:
        default:
            return 0;
        case 0x2DA:
        case 0x2D9:
            if (M2C_FIELD(arg0, u8 *, 0x16) != 0x32) {
                if (M2C_FIELD(temp_a0, f32 *, 0x38) <= 36.0f) {
                    return 1;
                }
                goto block_37;
            }
            if (M2C_FIELD(temp_a0, f32 *, 0x38) <= 40.0f) {
                return 1;
            }
            goto block_37;
        case 0x2DE:
        case 0x2DD:
            if (M2C_FIELD(arg0, u8 *, 0x16) != 0x32) {
                temp_f1_4 = M2C_FIELD(temp_a0, f32 *, 0x38);
                if (!(temp_f1_4 < 30.0f) && (temp_f1_4 <= 36.0f)) {
                    return 1;
                }
                goto block_37;
            }
            temp_f1_5 = M2C_FIELD(temp_a0, f32 *, 0x38);
            if (!(temp_f1_5 < 30.0f) && (temp_f1_5 <= 40.0f)) {
                return 1;
            }
            goto block_37;
        }
    } else {
block_51:
        return 0;
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BDC580(void);
extern u8 func_00BDC570(void);
s32 func_009B3070(u16, s32);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B33F0(void *, M2C_UNK *);               /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BA87B0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern char Pes6MatchPlayers[];

void func_00BDDA10(void *arg0) {
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s2;
    s16 var_v1_2;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 temp_f1_3;
    s32 var_a0;
    s32 var_v1;
    u8 temp_a0_5;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if ((func_009E1C90(3) & 0xFF) == 3) {
        if (func_00BDC580() != 0xFF) {
            var_a0 = func_00BDC580() % 23;
        } else {
            var_a0 = 1;
        }
        temp_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00BDC570() != 0xFF) {
            var_v1 = func_00BDC570() % 23;
        } else {
            var_v1 = 1;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        temp_s1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
        temp_f1 = (s32) (M2C_FIELD(temp_a0, f32 *, 0xE0) - M2C_FIELD(temp_s2, f32 *, 0xE0));
        temp_f0 = (s32) (M2C_FIELD(temp_a0, f32 *, 0xE8) - M2C_FIELD(temp_s2, f32 *, 0xE8));
        if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) >= 0x400001) {
            goto block_8;
        }
        if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B33F0(temp_a0, temp_s2)) & 0xFFFF) >= 0x3001) {
block_8:
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            temp_f1_2 = (s32) (M2C_FIELD(temp_a0_2, f32 *, 0xE0) - M2C_FIELD(temp_s1, f32 *, 0xE0));
            temp_f0_2 = (s32) (M2C_FIELD(temp_a0_2, f32 *, 0xE8) - M2C_FIELD(temp_s1, f32 *, 0xE8));
            if (((temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2)) >= 0x400001) {
                goto block_9;
            }
            if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B33F0(temp_a0_2, temp_s1)) & 0xFFFF) >= 0x3001) {
block_9:
                temp_a0_3 = M2C_FIELD(arg0, void **, 0);
                temp_f1_3 = (s32) (M2C_FIELD(temp_a0_3, f32 *, 0xE0) - M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE0));
                temp_f0_3 = (s32) (M2C_FIELD(temp_a0_3, f32 *, 0xE8) - M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE8));
                if ((((temp_f1_3 * temp_f1_3) + (temp_f0_3 * temp_f0_3)) < 0x400001) && ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B33F0(temp_a0_3, ((void *)Pes6MatchPlayers))) & 0xFFFF) < 0x3001)) {
                    goto block_11;
                }
            } else {
                goto block_11;
            }
        } else {
block_11:
            if (func_00BA87B0(arg0, 2) != 0) {
                temp_a1 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a1, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a1, u16 *, 0x26);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 2U;
                temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
                switch (temp_v1) {                  /* switch 1; irregular */
                case 2:                             /* switch 1 */
                case 1:                             /* switch 1 */
                case 0:                             /* switch 1 */
                    var_v1_2 = 7;
block_19:
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_v1_2;
                    break;
                case 3:                             /* switch 1 */
                    var_v1_2 = 9;
                    goto block_19;
                }
            }
        }
    }
    temp_a0_4 = M2C_FIELD(arg0, void **, 0);
    if (func_009B33A0(temp_a0_4, (s32) M2C_FIELD(temp_a0_4, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_4, f32 *, 0x70)) >= 0x90001U) {

    } else if (func_00BA87B0(arg0, 2) != 0) {
        temp_a2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a2, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a2, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 2U;
        temp_a0_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        switch (temp_a0_5) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 7;
            break;
        case 3:                                     /* switch 2 */
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
            break;
        }
    }
}

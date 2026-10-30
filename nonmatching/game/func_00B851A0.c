/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern void func_0027A5B0(void *, s8);
extern s32 func_00207D10(void *);
extern u8 func_00B364C0(void);
extern u8 func_00BF6270(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
s32 func_00BD4590(s32);                             /* extern */
s32 func_00BD45B0(u16);                             /* extern */

void func_00B851A0(void *arg0) {
    f32 temp_f1;
    s32 temp_a0_3;
    s32 temp_s0_2;
    s32 temp_v0;
    u16 temp_v1;
    u16 temp_v1_4;
    u32 temp_s1;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s2 = func_00B364C0();
    func_0027A5B0(M2C_FIELD(arg0, void **, 0), func_00BF6270() & 0xFF);
    func_00B2ACF0(arg0);
    func_00209820();
    temp_v1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30);
    if ((temp_v1 != 0x4C3) && (temp_v1 != 0x4C2) && (temp_v1 != 0x567) && (temp_v1 != 0x566) && (temp_v1 != 0x565) && (temp_v1 != 0x52B) && (temp_v1 != 0x4C1) && (temp_v1 != 0x56B) && (temp_v1 != 0x56A) && (temp_v1 != 0x569) && (temp_v1 != 0x52A) && (temp_v1 != 0x4C5) && (temp_v1 != 0x4C4) && (temp_v1 != 0x529) && (temp_v1 != 0x4C0)) {

    } else {
        temp_s0 = M2C_FIELD(arg0, void **, 0);
        temp_s1 = M2C_FIELD(((func_00BF6270() * 4) + temp_s0), u32 *, 0x158);
        temp_s0_2 = func_009B3070(M2C_FIELD(temp_s0, u16 *, 0x26), M2C_FIELD(((func_00BF6270() * 2) + temp_s0), u16 *, 0x128)) & 0xFFFF;
        if ((temp_s2 == 3) && (temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), temp_v1_2 = M2C_FIELD(temp_a0, void **, 4), temp_f1 = M2C_FIELD(temp_a0, f32 *, 0x38), !(temp_f1 < (f32) (M2C_FIELD(temp_v1_2, u8 *, 1) * 2))) && (temp_v0 = M2C_FIELD(temp_v1_2, u8 *, 2) * 2, (temp_f1 < (f32) temp_v0))) {
            func_00209A00(temp_a0, M2C_FIELD(temp_a0, u16 *, 0x30), temp_v0 & 0xFFFF);
            func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
        } else {
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if ((func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) && (temp_s1 >= 0x90001U) && (temp_s1 < 0x400000U) && ((temp_s0_2 & 0xFFFF) < 0x1001) && (func_00BBB8C0(0xA) != 0)) {
                temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
                M2C_FIELD(temp_v1_3, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), u8 *, 1) * 2);
            }
        }
    }
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        temp_v1_4 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30);
        if ((temp_v1_4 != 0x541) && (temp_v1_4 != 0x540) && (temp_v1_4 != 0x53F) && (temp_v1_4 != 0x53E) && (temp_v1_4 != 0x55C) && (temp_v1_4 != 0x53D) && (temp_v1_4 != 0x53C) && (temp_v1_4 != 0x575) && (temp_v1_4 != 0x53B)) {
            goto block_43;
        }
        if (temp_s2 != 0) {
            if (temp_s2 == 2) {
                goto block_40;
            }
block_43:
            M2C_FIELD(temp_a1, s16 *, 0x18) = 0x7F;
        } else {
block_40:
            M2C_FIELD(temp_a1, s16 *, 0x18) = 9;
            func_00BD4040(arg0, 2);
        }
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 0;
        temp_a0_3 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30)) & 0xFF;
        if (temp_a0_3 != 7) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = func_00BD4590(temp_a0_3);
        }
    }
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001165C8(void *, void *, s8, M2C_UNK *, void *); /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F89D0[];
extern char D_005F8A28[];
extern char D_005F8B60[];
extern void *D_006024A8;
extern s32 D_006024B8;
extern s32 D_006024BC;
extern char D_011C79B0[];
extern char D_011C8498[];

void func_00115404(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 temp_a2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1_5;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F89D0), 0x211, ((void *)D_005F8A28));
    }
    if (arg1 == NULL) {
        func_001AD620(((void *)D_005F89D0), 0x212, ((void *)D_005F8B60));
    }
    if ((*(u8 *)0x456FD0 != 0) && (temp_v1 = M2C_FIELD(arg0, s32 *, 0xE4), (temp_v1 != 0)) && (temp_v1 != 2) && (temp_v1 != 3) && (M2C_FIELD(D_006024A8, u16 *, 0) != 0) && (M2C_FIELD(arg1, s8 *, 0) != 0)) {
        temp_a2 = M2C_FIELD(arg1, s8 *, 3);
        temp_v1_2 = M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAE8) + M2C_FIELD(arg1, s8 *, 2);
        temp_v0 = M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAEC) + temp_a2;
        M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAE8) = temp_v1_2;
        M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAEC) = temp_v0;
        temp_a1 = M2C_FIELD(arg1, s8 *, 1) & 1;
        if (temp_v1_2 < 0) {
            M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAE8) = 0;
        }
        if (temp_v0 < 0) {
            M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAEC) = 0;
        }
        temp_v1_3 = M2C_FIELD(D_006024A8, u32 *, 0xD8);
        if (temp_v1_3 < (u32) M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAE8)) {
            M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAE8) = (s32) temp_v1_3;
        }
        temp_v1_4 = M2C_FIELD(D_006024A8, u32 *, 0xDC);
        if (temp_v1_4 < (u32) M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAEC)) {
            M2C_FIELD(((void *)D_011C79B0), s32 *, 0xAEC) = (s32) temp_v1_4;
        }
        if (M2C_FIELD(D_006024A8, u8 *, 1) != 0) {
            if (temp_a1 != 0) {
                M2C_FIELD(D_006024A8, u8 *, 1) = 0U;
                M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32, s8, M2C_UNK *, void *), 0x24)(0, temp_a1, temp_a2, ((void *)D_011C79B0), D_006024A8);
                M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(arg0, 1);
                return;
            }
            goto block_28;
        }
        temp_s0 = ((void *)D_011C79B0) + 0xAE8;
        if (temp_a1 != 0) {
            temp_v0_2 = func_001165C8(arg0, temp_s0, temp_a2, ((void *)D_011C79B0), D_006024A8);
            if (temp_v0_2 == 0xF) {
                M2C_FIELD(arg0, M2C_UNK (**)(void *, void *), 0x24)(arg0, temp_s0);
            } else if (D_006024BC == 0) {
                D_006024B8 = temp_v0_2;
                D_006024BC = 0;
            } else {
                D_006024B8 = ((D_006024B8 ^ temp_v0_2) != 0) ? 0xF : D_006024B8;
            }
            temp_v1_5 = ((void *)D_011C79B0) + 0x79B0;
            M2C_FIELD(temp_v1_5, s32 *, 0xAE0) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0xAE0) | 1);
        } else {
block_28:
            temp_a1_2 = ((void *)D_011C79B0) + 0x79B0;
            temp_s0_2 = temp_a1_2 + 0xAE8;
            if (M2C_FIELD(temp_a1_2, s32 *, 0xAE0) & 1) {
                temp_v0_3 = func_001165C8(arg0, temp_s0_2, temp_a2, ((void *)D_011C79B0), D_006024A8);
                if (temp_v0_3 == 0xF) {
                    M2C_FIELD(arg0, M2C_UNK (**)(void *, void *), 0x28)(arg0, temp_s0_2);
                } else {
                    if (D_006024B8 == temp_v0_3) {
                        M2C_FIELD(D_006024A8, M2C_UNK (**)(s8), 0x28)((s8) temp_v0_3);
                    }
                    D_006024BC = 0;
                }
                temp_a0 = ((void *)D_011C79B0) + 0x79B0;
                M2C_FIELD(temp_a0, s32 *, 0xAE0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xAE0) & ~1);
            }
        }
        M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK *), 0x20)(arg0, ((void *)D_011C8498));
    }
}

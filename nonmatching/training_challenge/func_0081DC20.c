/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern s32 func_00154410(s32, s32);
extern s32 func_00154490(s32, s32);
M2C_UNK func_0081D5A0(void *);                      /* extern */
extern char D_00591730[];

void func_0081DC20(void *arg0) {
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = M2C_FIELD(arg0, void **, 0x6C);
    if ((M2C_FIELD(temp_a0, s16 *, 0x1B0) == M2C_FIELD(temp_a0, s16 *, 0x1B4)) && (M2C_FIELD(temp_a0, s16 *, 0x1B2) == M2C_FIELD(temp_a0, s16 *, 0x1B6))) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), s8 *, 0x40) = 0;
    } else {
        if (func_00154410(0, 0x80) != 0) {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
            M2C_FIELD(temp_a0_2, u8 *, 0x40) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 0x40) - 1);
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
            if (M2C_FIELD(temp_v1, u8 *, 0x40) == 0xFF) {
                M2C_FIELD(temp_v1, u8 *, 0x40) = 2U;
            }
            func_0081D5A0(arg0);
        }
        if (func_00154410(0, 0x20) != 0) {
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
            M2C_FIELD(temp_v1_2, u8 *, 0x40) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0x40) + 1);
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x40) >= 3) {
                M2C_FIELD(temp_v0, u8 *, 0x40) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x17078) = 1;
            func_0081D5A0(arg0);
        }
    }
    if ((func_00154490(0, 0x8000) != 0) && ((temp_a2 = M2C_FIELD(arg0, void **, 0x6C), (M2C_FIELD(temp_a2, s16 *, 0x1B0) != M2C_FIELD(temp_a2, s16 *, 0x1B4))) || (M2C_FIELD(temp_a2, s16 *, 0x1B2) != M2C_FIELD(temp_a2, s16 *, 0x1B6)))) {
        M2C_FIELD(temp_a2, s16 *, 0x1B0) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s16 *, 0x1B2) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s16 *, 0x1B4) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s16 *, 0x1B6) = 0;
        temp_v0_2 = M2C_FIELD(arg0, void **, 0x6C);
        temp_v1_3 = M2C_FIELD(temp_v0_2, s16 *, 0x1B0) + M2C_FIELD(temp_v0_2, s16 *, 0x1B4);
        var_v0 = temp_v1_3 >> 1;
        if (temp_v1_3 < 0) {
            var_v0 = (s32) (temp_v1_3 + 1) >> 1;
        }
        M2C_FIELD(((void *)D_00591730), s32 *, 0xE4) = 0;
        M2C_FIELD(((void *)D_00591730), f32 *, 0xE0) = (f32) var_v0;
        temp_v0_3 = M2C_FIELD(arg0, void **, 0x6C);
        temp_v1_4 = M2C_FIELD(temp_v0_3, s16 *, 0x1B2) + M2C_FIELD(temp_v0_3, s16 *, 0x1B6);
        var_v0_2 = temp_v1_4 >> 1;
        if (temp_v1_4 < 0) {
            var_v0_2 = (s32) (temp_v1_4 + 1) >> 1;
        }
        M2C_FIELD(((void *)D_00591730), s16 *, 0x26) = 0x7FFF;
        M2C_FIELD(((void *)D_00591730), f32 *, 0xE8) = (f32) var_v0_2;
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x6C);
        if ((M2C_FIELD(temp_a0_3, s16 *, 0x1B0) == M2C_FIELD(temp_a0_3, s16 *, 0x1B4)) && (M2C_FIELD(temp_a0_3, s16 *, 0x1B2) == M2C_FIELD(temp_a0_3, s16 *, 0x1B6))) {
            M2C_FIELD(M2C_FIELD(((void *)D_00591730), void **, 4), u8 *, 0x2C) = 0U;
        } else {
            M2C_FIELD(M2C_FIELD(((void *)D_00591730), void **, 4), u8 *, 0x2C) = 1U;
        }
        func_001A58E0(M2C_FIELD(M2C_FIELD(((void *)D_00591730), void **, 4), void **, 0), (s8) M2C_FIELD(M2C_FIELD(((void *)D_00591730), void **, 4), u8 *, 0x2C));
        func_0081D5A0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1707C) = 1;
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A5B0(void *, s8);
extern s32 func_00208210(s32);
extern s32 func_001A5F20(s32);
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */

void func_00B577E0(void **arg0) {
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;

    temp_a1 = *arg0;
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x18);
    switch (temp_v1) {                              /* irregular */
    case 5:
        if ((func_00208210(func_001A5F20(5)) == 0x60) && (temp_a0 = *arg0, temp_a1_2 = M2C_FIELD(temp_a0, void **, 4), (M2C_FIELD(temp_a1_2, u16 *, 0x30) == 0x5A1)) && !(M2C_FIELD(temp_a1_2, f32 *, 0x38) < 86.0f)) {
            func_0027A5B0(temp_a0, 0);
            func_0027A600(*arg0, 2);
        } else if ((func_00208210(func_001A5F20(5)) == 0x67) && (temp_a0_2 = *arg0, temp_a1_3 = M2C_FIELD(temp_a0_2, void **, 4), (M2C_FIELD(temp_a1_3, u16 *, 0x30) == 0x5A9)) && !(M2C_FIELD(temp_a1_3, f32 *, 0x38) < 100.0f)) {
            func_0027A5B0(temp_a0_2, 0);
            func_0027A600(*arg0, 2);
        } else if ((func_00208210(func_001A5F20(5)) == 0x67) && (temp_a0_3 = *arg0, temp_a1_4 = M2C_FIELD(temp_a0_3, void **, 4), (M2C_FIELD(temp_a1_4, u16 *, 0x30) == 0x5AA)) && !(M2C_FIELD(temp_a1_4, f32 *, 0x38) < 84.0f)) {
            func_0027A5B0(temp_a0_3, 0);
            func_0027A600(*arg0, 2);
        } else if ((func_00208210(func_001A5F20(5)) == 0x67) && (temp_a0_4 = *arg0, temp_a1_5 = M2C_FIELD(temp_a0_4, void **, 4), (M2C_FIELD(temp_a1_5, u16 *, 0x30) == 0x5AB)) && !(M2C_FIELD(temp_a1_5, f32 *, 0x38) < 84.0f)) {
            func_0027A5B0(temp_a0_4, 0);
            func_0027A600(*arg0, 2);
        } else {
            temp_a0_5 = *arg0;
            temp_a1_6 = M2C_FIELD(temp_a0_5, void **, 4);
            if ((M2C_FIELD(temp_a1_6, u16 *, 0x30) == 0x47C) && (M2C_FIELD(temp_a1_6, f32 *, 0x38) <= 6.0f)) {
                func_0027A5B0(temp_a0_5, 0);
                func_0027A600(*arg0, 2);
            } else {
                func_0027A600(temp_a0_5, 0);
            }
        }
        break;
    case 4:
        func_0027A5B0(temp_a1, 0);
        func_0027A600(*arg0, 2);
        break;
    default:
        func_0027A600(temp_a1, 0);
        break;
    }
}

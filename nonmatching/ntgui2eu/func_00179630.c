/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00179630(void *arg0) {
    s32 var_a1;
    void *temp_a6;
    void *temp_a7;
    void *temp_a7_2;
    void *temp_a7_3;
    void *temp_a7_4;
    void *temp_a7_5;
    void *temp_t0;
    void *var_a7;

    temp_a6 = arg0 + 0x910;
    temp_t0 = temp_a6 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0);
    var_a7 = temp_t0 + 0x70;
    if (M2C_FIELD(temp_a6, s32 *, 0x33B0) != 0) {
        M2C_FIELD(temp_t0, u8 *, 0x70) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A0);
        M2C_FIELD(var_a7, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A1);
        M2C_FIELD(var_a7, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A2);
        M2C_FIELD(var_a7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33A3)) / 255);
        temp_a7 = temp_t0 + 0x90;
        M2C_FIELD(temp_t0, u8 *, 0x90) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A0);
        M2C_FIELD(temp_a7, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A1);
        M2C_FIELD(temp_a7, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A2);
        M2C_FIELD(temp_a7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33A3)) / 255);
        temp_a7_2 = temp_t0 + 0xB0;
        M2C_FIELD(temp_t0, u8 *, 0xB0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A4);
        M2C_FIELD(temp_a7_2, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A5);
        M2C_FIELD(temp_a7_2, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A6);
        M2C_FIELD(temp_a7_2, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33A7)) / 255);
        temp_a7_3 = temp_t0 + 0xD0;
        M2C_FIELD(temp_t0, u8 *, 0xD0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A4);
        M2C_FIELD(temp_a7_3, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A5);
        M2C_FIELD(temp_a7_3, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A6);
        M2C_FIELD(temp_a7_3, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33A7)) / 255);
        temp_a7_4 = temp_t0 + 0xF0;
        M2C_FIELD(temp_t0, u8 *, 0xF0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A8);
        M2C_FIELD(temp_a7_4, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A9);
        M2C_FIELD(temp_a7_4, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33AA);
        M2C_FIELD(temp_a7_4, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33AB)) / 255);
        temp_a7_5 = temp_t0 + 0x110;
        M2C_FIELD(temp_t0, u8 *, 0x110) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A8);
        M2C_FIELD(temp_a7_5, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A9);
        M2C_FIELD(temp_a7_5, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33AA);
        M2C_FIELD(temp_a7_5, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33AB)) / 255);
        return;
    }
    var_a1 = 5;
    do {
        var_a1 -= 1;
        M2C_FIELD(var_a7, u8 *, 0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A0);
        M2C_FIELD(var_a7, u8 *, 1) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A1);
        M2C_FIELD(var_a7, u8 *, 2) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33A2);
        M2C_FIELD(var_a7, s8 *, 3) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a6, u8 *, 0x33A3)) / 255);
        var_a7 += 0x20;
    } while (var_a1 >= 0);
}

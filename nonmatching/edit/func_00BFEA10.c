/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CEB95C[];
extern char D_00CEB960[];
extern char D_00CEB961[];
extern char D_00CEB962[];
extern char D_00CEB963[];
extern char D_00CEB994[];

void func_00BFEA10(void *arg0) {
    M2C_UNK *var_v1;
    s32 temp_a2;
    s32 var_a1;
    void *temp_a1;
    void *temp_t0;

    if (arg0 != NULL) {
        var_a1 = 0xD;
        var_v1 = ((void *)D_00CEB994);
        do {
            var_a1 -= 6;
            M2C_FIELD(var_v1, u8 *, 0) = (u8) M2C_FIELD(var_v1, u8 *, -4);
            M2C_FIELD(var_v1, u8 *, 1) = (u8) M2C_FIELD(var_v1, u8 *, -3);
            M2C_FIELD(var_v1, u8 *, 2) = (u8) M2C_FIELD(var_v1, u8 *, -2);
            M2C_FIELD(var_v1, u8 *, 3) = (u8) M2C_FIELD(var_v1, u8 *, -1);
            M2C_FIELD(var_v1, u8 *, -4) = (u8) M2C_FIELD(var_v1, u8 *, -8);
            M2C_FIELD(var_v1, u8 *, -3) = (u8) M2C_FIELD(var_v1, u8 *, -7);
            M2C_FIELD(var_v1, u8 *, -2) = (u8) M2C_FIELD(var_v1, u8 *, -6);
            M2C_FIELD(var_v1, u8 *, -1) = (u8) M2C_FIELD(var_v1, u8 *, -5);
            M2C_FIELD(var_v1, u8 *, -8) = (u8) M2C_FIELD(var_v1, u8 *, -0xC);
            M2C_FIELD(var_v1, u8 *, -7) = (u8) M2C_FIELD(var_v1, u8 *, -0xB);
            M2C_FIELD(var_v1, u8 *, -6) = (u8) M2C_FIELD(var_v1, u8 *, -0xA);
            M2C_FIELD(var_v1, u8 *, -5) = (u8) M2C_FIELD(var_v1, u8 *, -9);
            M2C_FIELD(var_v1, u8 *, -0xC) = (u8) M2C_FIELD(var_v1, u8 *, -0x10);
            M2C_FIELD(var_v1, u8 *, -0xB) = (u8) M2C_FIELD(var_v1, u8 *, -0xF);
            M2C_FIELD(var_v1, u8 *, -0xA) = (u8) M2C_FIELD(var_v1, u8 *, -0xE);
            M2C_FIELD(var_v1, u8 *, -9) = (u8) M2C_FIELD(var_v1, u8 *, -0xD);
            M2C_FIELD(var_v1, u8 *, -0x10) = (u8) M2C_FIELD(var_v1, u8 *, -0x14);
            M2C_FIELD(var_v1, u8 *, -0xF) = (u8) M2C_FIELD(var_v1, u8 *, -0x13);
            M2C_FIELD(var_v1, u8 *, -0xE) = (u8) M2C_FIELD(var_v1, u8 *, -0x12);
            M2C_FIELD(var_v1, u8 *, -0xD) = (u8) M2C_FIELD(var_v1, u8 *, -0x11);
            M2C_FIELD(var_v1, u8 *, -0x14) = (u8) M2C_FIELD(var_v1, u8 *, -0x18);
            M2C_FIELD(var_v1, u8 *, -0x13) = (u8) M2C_FIELD(var_v1, u8 *, -0x17);
            M2C_FIELD(var_v1, u8 *, -0x12) = (u8) M2C_FIELD(var_v1, u8 *, -0x16);
            M2C_FIELD(var_v1, u8 *, -0x11) = (u8) M2C_FIELD(var_v1, u8 *, -0x15);
            var_v1 -= 0x18;
        } while (var_a1 >= 7);
        temp_a2 = var_a1 * 4;
        temp_a1 = ((void *)D_00CEB95C) + temp_a2;
        temp_t0 = ((void *)D_00CEB960) + temp_a2;
        M2C_FIELD(temp_t0, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0);
        M2C_FIELD(temp_t0, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 1);
        M2C_FIELD(temp_t0, u8 *, 2) = (u8) M2C_FIELD(temp_a1, u8 *, 2);
        M2C_FIELD(temp_t0, u8 *, 3) = (u8) M2C_FIELD(temp_a1, u8 *, 3);
        (*(u8 *)D_00CEB960) = M2C_FIELD(arg0, u8 *, 0);
        (*(u8 *)D_00CEB961) = M2C_FIELD(arg0, u8 *, 1);
        (*(u8 *)D_00CEB962) = M2C_FIELD(arg0, u8 *, 2);
        (*(u8 *)D_00CEB963) = M2C_FIELD(arg0, u8 *, 3);
    }
}

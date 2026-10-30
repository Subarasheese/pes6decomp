/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
extern u16 D_003EAE08;
extern u16 D_003EAE0C;
extern u16 D_003EAE10;
extern u16 D_003EAE18;
extern u16 D_003EAE1C;

void func_00B210D0(void) {
    s32 temp_v0_5;
    s32 var_v0_10;
    s32 var_v0_9;
    s32 var_v1;
    u16 *var_v0;
    u16 temp_s0;
    u16 var_v0_2;
    u16 var_v0_4;
    u16 var_v0_6;
    u16 var_v0_8;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_v0_3;
    void *var_v0_5;
    void *var_v0_7;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        var_v0 = temp_v0 + 0x19B18;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    D_003EAE18 = var_v0_2;
    temp_v0_2 = func_002260A0();
    if (temp_v0_2 != NULL) {
        var_v0_3 = temp_v0_2 + 0x19B18;
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0_3, u16 *, 2);
    } else {
        var_v0_4 = 0;
    }
    D_003EAE10 = var_v0_4;
    temp_v0_3 = func_002260A0();
    if (temp_v0_3 != NULL) {
        var_v0_5 = temp_v0_3 + 0x19B18;
    } else {
        var_v0_5 = NULL;
    }
    if (var_v0_5 != NULL) {
        var_v0_6 = M2C_FIELD(var_v0_5, u16 *, 4);
    } else {
        var_v0_6 = 0;
    }
    D_003EAE0C = var_v0_6;
    temp_v0_4 = func_002260A0();
    if (temp_v0_4 != NULL) {
        var_v0_7 = temp_v0_4 + 0x19B18;
    } else {
        var_v0_7 = NULL;
    }
    if (var_v0_7 != NULL) {
        var_v0_8 = M2C_FIELD(var_v0_7, u16 *, 6);
    } else {
        var_v0_8 = 0;
    }
    D_003EAE08 = var_v0_8;
    D_003EAE1C = (var_v0_8 & 0xFFFF) + (D_003EAE0C + (D_003EAE18 + D_003EAE10));
    temp_v0_5 = func_002260F0(func_00225820() & 0xFF);
    if (temp_v0_5 != 0) {
        var_v0_9 = M2C_FIELD(temp_v0_5, s32 *, 0x34);
    } else {
        var_v0_9 = 0;
    }
    temp_s0 = D_003EAE1C;
    if ((temp_s0 + var_v0_9) >= 0xF4240) {
        var_v0_10 = func_002260F0(func_00225820() & 0xFF);
        if (var_v0_10 != 0) {
            var_v1 = 0xF423F;
            goto block_45;
        }
    } else {
        var_v0_10 = func_002260F0(func_00225820() & 0xFF);
        if (var_v0_10 != 0) {
            var_v1 = M2C_FIELD(var_v0_10, s32 *, 0x34) + temp_s0;
block_45:
            M2C_FIELD(var_v0_10, s32 *, 0x34) = var_v1;
        }
    }
}

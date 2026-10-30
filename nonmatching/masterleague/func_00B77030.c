/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00229DF0(void);
extern s32 func_00226000(void);
u8 *func_00224520(s32, s32);                        /* extern */
s16 func_00225720();                                /* extern */
s8 func_00225E10();                                 /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
M2C_UNK func_00B76EB0();                            /* extern */
extern void *D_003EAF08;

void func_00B77030(void) {
    s32 temp_s0;
    s32 temp_s0_3;
    s32 var_s1;
    s32 var_s4;
    u8 *temp_v0;
    u8 temp_a0;
    u8 temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    temp_s2 = D_003EAF08;
    temp_s3 = func_00229DF0();
    if (temp_s2 != NULL) {
        M2C_FIELD(temp_s2, s8 *, 0x3CC) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x3CD) = 0;
        M2C_FIELD(temp_s2, u8 *, 0x3D0) = func_00225820();
        M2C_FIELD(temp_s2, s16 *, 0x3CE) = func_00225720();
        M2C_FIELD(temp_s2, s8 *, 0x3D1) = func_00225E10();
        M2C_FIELD(temp_s2, s8 *, 0x3D2) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x3F3) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x3F4) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x3F8) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x3FC) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x3FE) = 0;
        temp_s1 = D_003EAF08;
        if (temp_s1 != NULL) {
            temp_s0 = func_00225820() & 0xFF;
            var_s4 = 0;
            if ((s32) M2C_FIELD(temp_s1, u8 *, 0x3D1) > 0) {
                do {
                    M2C_FIELD((temp_s1 + var_s4), u8 *, 0x508) = (u8) M2C_FIELD(func_00224520(temp_s0 & 0xFF, func_002243B0(temp_s0 & 0xFF, var_s4 & 0xFF) & 0xFF), u8 *, 2);
                    var_s4 += 1;
                } while (var_s4 < (s32) M2C_FIELD(temp_s1, u8 *, 0x3D1));
            }
        }
        temp_s0_2 = M2C_FIELD(temp_s3, u8 *, 3);
        if ((temp_s0_2 == (func_0099B570(0) & 0xFF)) && ((M2C_FIELD(func_00226000(), u8 *, 0xD3) + 0x7D6) == 0x7D6)) {
            temp_s0_3 = func_00225820() & 0xFF;
            if (D_003EAF08 != NULL) {
                var_s1 = 0;
                do {
                    temp_v0 = func_00224520(temp_s0_3 & 0xFF, func_002243B0(temp_s0_3 & 0xFF, var_s1 & 0xFF) & 0xFF);
                    temp_a0 = *temp_v0;
                    var_s1 += 1;
                    *temp_v0 = (temp_a0 & ~0xF0) | ((0 & 0xF) * 0x10);
                } while (var_s1 < 0x20);
            }
        }
        func_00B76EB0();
        M2C_FIELD(temp_s2, s8 *, 0x630) = 1;
    }
}

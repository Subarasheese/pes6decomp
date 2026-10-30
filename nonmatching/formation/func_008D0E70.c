/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
extern void func_001EEE60(void *, void *);
void *func_008C5050(M2C_UNK, s32, s32, s32);        /* extern */
extern char D_008EDA98[];
extern char D_008EDAA0[];
extern char D_008EDAA8[];
extern char D_008EDAB0[];
extern char D_008EDAB8[];

void func_008D0E70(void *arg0, s32 arg1) {
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    u8 spBC;                                        /* compiler-managed */
    u8 spBD;
    u8 spBE;
    u8 spBF;
    f32 var_f0;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_s6;
    s32 var_s4;
    u8 temp_a0;
    u8 var_v1;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_v0;
    void *var_s1;
    void *var_s2;
    void *var_s3;

    temp_s0 = M2C_FIELD(arg0, void **, 0x34);
    if (temp_s0 != NULL) {
        temp_s6 = func_002DB830(M2C_FIELD(arg0, void **, 0x1D4));
        temp_a0 = M2C_FIELD(arg0, u8 *, 5);
        var_s4 = -(s32) temp_a0;
        temp_fp = func_002DB940(M2C_FIELD(arg0, void **, 0x1D4));
        if (var_s4 < (M2C_FIELD(arg0, u8 *, 4) + temp_a0)) {
            var_s2 = arg0 + temp_s6 + var_s4;
            var_s3 = temp_s0 + temp_s6 + var_s4;
            var_s1 = arg0 + ((s32) temp_a0 * -4);
            spB8 = (*(f32 *)D_008EDA98);
            spB4 = (*(f32 *)D_008EDAA0);
            spB0 = (*(f32 *)D_008EDAA8);
            spAC = (*(f32 *)D_008EDAB0);
            spA8 = (*(f32 *)D_008EDAB8);
            do {
                temp_a3 = temp_s6 + var_s4;
                if ((temp_a3 >= 0) && (temp_a3 < (s32) M2C_FIELD(temp_s0, u8 *, 0x21))) {
                    temp_a2 = temp_a3 & 0xFF;
                    if (temp_a3 < 0xB) {
                        var_v1 = M2C_FIELD(var_s3, u8 *, 0xC5);
                    } else {
                        var_v1 = 1;
                    }
                    temp_a1 = var_v1 & 0xFF;
                    if ((M2C_FIELD(var_s2, u8 *, 0xD) != 0) && (temp_a0_2 = temp_s0 + (M2C_FIELD(var_s3, u8 *, 1) & 0xFF), (M2C_FIELD(temp_a0_2, u8 *, 0x85) != 0)) && (M2C_FIELD(temp_a0_2, u8 *, 0xA5) != 0) && (temp_a1 != 0)) {
                        if ((M2C_FIELD(arg0, u8 *, 0xB) != 0) && (arg1 == 0) && (temp_fp == temp_a3)) {
                            temp_v0 = func_008C5050(0, temp_a1, temp_a2, temp_a3);
                            spBC = M2C_FIELD(temp_v0, u8 *, 0);
                            spBD = M2C_FIELD(temp_v0, u8 *, 1);
                            spBE = M2C_FIELD(temp_v0, u8 *, 2);
                            spBF = M2C_FIELD(temp_v0, u8 *, 3);
                        } else {
                            temp_a0_3 = temp_a2 & 0xFF;
                            if (temp_a0_3 < 0xB) {
                                var_f0 = spB8;
                            } else if (temp_a0_3 < (s32) M2C_FIELD(temp_s0, u8 *, 0x22)) {
                                var_f0 = spB4;
                            } else {
                                var_f0 = spB0;
                            }
                            goto block_28;
                        }
                    } else {
                        if ((temp_a2 & 0xFF) < 0xB) {
                            var_f0 = spAC;
                        } else {
                            var_f0 = spA8;
                        }
block_28:
                        spBC = var_f0;
                    }
                    temp_a0_4 = M2C_FIELD(var_s1, void **, 0x15C);
                    if (temp_a0_4 != NULL) {
                        func_001EEE60(temp_a0_4, &spBC);
                    }
                }
                var_s4 += 1;
                var_s3 += 1;
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s4 < (M2C_FIELD(arg0, u8 *, 4) + M2C_FIELD(arg0, u8 *, 5)));
        }
    }
}

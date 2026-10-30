/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void * func_002E1540(void *, void *);
extern void func_001BC040(s32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001BBFD0(s32);                         /* extern */
M2C_UNK func_00212570(void *, f32 *);               /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */

void *func_00214290(void *arg0) {
    f32 sp60;
    f32 var_f0;
    f32 var_f1;
    s32 var_s2;
    s32 var_s2_2;
    s8 var_v0;
    s8 var_v1;
    void **temp_s0_2;
    void **temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void **var_s1;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s3;
    void *temp_v0;
    void *var_s1_2;
    void *var_s1_3;

    if (arg0 == NULL) {
        goto block_45;
    }
    var_s1 = M2C_FIELD(arg0, s32 **, 4);
    if (var_s1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_s1, void **, 0);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s32 *, 4) = 0;
            }
            temp_v0_2 = M2C_FIELD(var_s1, void ***, 4);
            if (temp_v0_2 != NULL) {
                *temp_v0_2 = NULL;
            }
            func_002DF960(M2C_FIELD(var_s1, s32 *, 0x5A0));
            func_001F1EA0(M2C_FIELD(var_s1, void **, 0x590));
            temp_s0_2 = M2C_FIELD(var_s1, void ***, 4);
            func_001BC040(M2C_FIELD(var_s1, s32 *, 0x5A4));
            func_001BBFD0(M2C_FIELD(var_s1, s32 *, 0x5A4));
            var_s1 = temp_s0_2;
        } while (temp_s0_2 != NULL);
    }
    temp_s0_3 = M2C_FIELD(arg0, void **, 0);
    if (temp_s0_3 != NULL) {
        var_s2 = 0;
        var_s1_2 = temp_s0_3;
        do {
            func_001F3D10(M2C_FIELD(var_s1_2, s32 *, 0x594), 1U);
            var_s2 += 1;
            var_s1_2 += 4;
        } while (var_s2 < 2);
        var_v1 = M2C_FIELD(temp_s0_3, s8 *, 0xD);
        if ((temp_s0_3 != NULL) && (M2C_FIELD(temp_s0_3, u8 *, 9) != 0)) {
            var_v0 = M2C_FIELD(temp_s0_3, s8 *, 0xC) - 1;
            if (var_v0 < var_v1) {

            } else {
                if (var_v1 < 0) {
                    var_v1 = 0;
                }
                var_v0 = var_v1;
            }
            M2C_FIELD(temp_s0_3, s8 *, 0xD) = var_v0;
            M2C_FIELD(temp_s0_3, u8 *, 8) = (u8) (M2C_FIELD(temp_s0_3, u8 *, 8) | 2);
            if (M2C_FIELD(temp_s0_3, u8 *, 9) == 1) {
                var_s2_2 = 0;
                var_s1_3 = temp_s0_3;
                do {
                    temp_s3 = var_s1_3 + 0x10;
                    func_002E1540(temp_s3 + 0x28, &sp60);
                    if (var_s2_2 == M2C_FIELD(temp_s0_3, s8 *, 0xD)) {
                        if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                            var_f1 = 10.0f;
                        } else {
                            var_f1 = 0.0f;
                        }
                        sp60 = var_f1 - 5.0f;
                        M2C_FIELD(var_s1_3, s8 *, 0x10) = 2;
                    } else {
                        if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                            var_f0 = 10.0f;
                        } else {
                            var_f0 = 0.0f;
                        }
                        sp60 = var_f0;
                        M2C_FIELD(var_s1_3, s8 *, 0x10) = 0;
                    }
                    func_00212570(temp_s3, &sp60);
                    var_s2_2 += 1;
                    var_s1_3 += 0x7C;
                } while (var_s2_2 < 0xB);
            }
        }
        M2C_FIELD(temp_s0_3, u8 *, 9) = 5U;
        temp_s0 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(arg0, u8 *, 9) != 2) {
            if (temp_s0 != NULL) {
                M2C_FIELD(temp_s0, s32 *, 4) = 0;
            }
            temp_v0_3 = M2C_FIELD(arg0, void ***, 4);
            if (temp_v0_3 != NULL) {
                *temp_v0_3 = NULL;
            }
            func_002DF960(M2C_FIELD(arg0, s32 *, 0x5A0));
            func_001F1EA0(M2C_FIELD(arg0, void **, 0x590));
            func_001BC040(M2C_FIELD(arg0, s32 *, 0x5A4));
            func_001BBFD0(M2C_FIELD(arg0, s32 *, 0x5A4));
        } else {
            M2C_FIELD(arg0, u8 *, 9) = 7U;
        }
        return temp_s0;
    }
    if (temp_s0_3 != NULL) {
        M2C_FIELD(temp_s0_3, s32 *, 4) = 0;
    }
    temp_v0_4 = M2C_FIELD(arg0, void ***, 4);
    if (temp_v0_4 != NULL) {
        *temp_v0_4 = NULL;
    }
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x5A0));
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x590));
    func_001BC040(M2C_FIELD(arg0, s32 *, 0x5A4));
    func_001BBFD0(M2C_FIELD(arg0, s32 *, 0x5A4));
block_45:
    return NULL;
}

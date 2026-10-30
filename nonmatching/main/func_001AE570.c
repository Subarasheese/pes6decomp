/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00145460(s32);
extern s32 func_001454C0(s32);
extern unsigned short func_001454B0(void *);
extern void func_001453E0(s32);
extern unsigned short func_001454A0(void *);
M2C_UNK func_00150400(void *, s32, s64, M2C_UNK, s16 *); /* extern */
s32 func_001AF920(M2C_UNK, s8 *, M2C_UNK);          /* extern */
extern char D_00397FF0[];
extern char D_00398050[];

void func_001AE570(s32 arg0, s8 *arg1, s32 arg2) {
    s16 spA8;
    s16 spAA;
    s16 spAC;
    s16 spAE;
    s16 var_a3;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s8 *temp_s0_2;
    s8 *var_a1;
    s8 temp_v1;
    u16 temp_s0;
    void *temp_v0;
    void *temp_v0_3;

    var_s4 = 0;
    temp_v0 = func_001454C0(arg0);
    temp_s0 = func_001454B0(temp_v0);
    func_001454A0(temp_v0);
    func_00145460((s32) temp_v0);
    temp_v0_2 = temp_s0 - func_001AF920(0, arg1, 0);
    var_s1 = temp_v0_2 >> 1;
    if (temp_v0_2 < 0) {
        var_s1 = (s32) (temp_v0_2 + 1) >> 1;
    }
    var_s3 = 0;
    if (*arg1 != 0) {
        do {
            temp_s0_2 = &arg1[var_s3];
            temp_v1 = M2C_FIELD(temp_s0_2, s8 *, 0);
            if (temp_v1 == 0x5F) {
                var_v0 = 0x1B;
            } else if (temp_v1 != 0x2E) {
                if ((temp_v1 >= 0x41) && (temp_v1 < 0x5B)) {
                    var_v0 = temp_v1 - 0x41;
                } else if ((temp_v1 >= 0x30) && (temp_v1 < 0x3A)) {
                    var_v0 = temp_v1 - 0x13;
                } else {
                    var_v0 = 0x1A;
                }
            } else {
                var_v0 = 0x1C;
            }
            temp_v0_3 = ((void *)D_00398050) + (var_v0 * 8);
            spA8 = M2C_FIELD(temp_v0_3, s16 *, 0);
            spAA = M2C_FIELD(temp_v0_3, s16 *, 2);
            spAC = M2C_FIELD(temp_v0_3, s16 *, 4);
            spAE = M2C_FIELD(temp_v0_3, s16 *, 6);
            func_00150400(temp_v0, func_001454C0(arg2), (s64) ((var_s1 + var_s4) << 0x30) >> 0x30, 0, &spA8);
            var_a3 = spAC;
            var_a2 = 0;
            if ((*(s8 *)D_00397FF0) != 0) {
                var_a1 = ((void *)D_00397FF0);
loop_17:
                if ((((s64) ((s64) M2C_FIELD(temp_s0_2, s8 *, 0) << 0x38) >> 0x38) == M2C_FIELD(var_a1, s8 *, 0)) && (((s64) ((s64) M2C_FIELD(temp_s0_2, s8 *, 1) << 0x38) >> 0x38) == M2C_FIELD(var_a1, s8 *, 1))) {
                    var_a3 = (s16) M2C_FIELD((((void *)D_00397FF0) + (var_a2 * 3)), s8 *, 2);
                } else {
                    var_a1 += 3;
                    var_a2 += 1;
                    if (*var_a1 != 0) {
                        goto loop_17;
                    }
                }
            }
            var_s3 += 1;
            var_s4 += var_a3;
        } while (arg1[var_s3] != 0);
    }
    func_001453E0(arg0);
}

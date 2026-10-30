/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
s32 func_00292F30(void *, s32);                     /* extern */
extern char D_008EDFD0[];

void func_008E2AB0(void *arg0, void *arg1) {
    s32 spA8;
    s32 spAC;
    s32 *var_s3_2;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    u64 temp_a0;
    u8 *var_s4;
    u8 temp_a0_2;
    void *var_s0;
    void *var_s1;

    if (arg0 != NULL) {
        var_s3 = 0;
        var_s1 = arg0;
        do {
            var_s2 = 0;
            var_s0 = var_s1;
loop_3:
            func_001F3D10(M2C_FIELD(var_s0, s32 *, 0x920), 0U);
            var_s2 += 1;
            var_s0 += 4;
            if (var_s2 < 2) {
                goto loop_3;
            }
            var_s3 += 1;
            var_s1 += 8;
        } while (var_s3 < 0x16);
        M2C_FIELD(arg0, void **, 0x6BC) = arg1;
        if (arg1 != NULL) {
            spA8 = 0;
            temp_a0 = (u64) ((s64) M2C_FIELD(arg1, u8 *, 0x1D) << 0x38) >> 0x3E;
            spAC = 0;
            switch (temp_a0) {                      /* irregular */
            case 1:
                if (!(M2C_FIELD(arg1, u8 *, 0) & 1)) {
                    spA8 = 1;
                } else {
                    spAC = 1;
                }
                break;
            case 0:
                if (!(M2C_FIELD(arg1, u8 *, 0) & 1)) {
                    spAC = 1;
                } else {
                    spA8 = 1;
                }
                break;
            case 2:
                spA8 = 1;
                spAC = 1;
                break;
            }
            var_s6 = 0;
            var_s4 = ((void *)D_008EDFD0);
            do {
                if (func_00292F30(arg1, var_s6 & 0xFF) != 0) {
                    var_s1_2 = 0;
                    var_s3_2 = &spA8;
                    var_s2_2 = 0;
                    do {
                        if ((var_s6 != 0xA) && (var_s6 != 8) && (var_s6 != 6) && (var_s6 != 4)) {
                            goto block_33;
                        }
                        if (*var_s3_2 != 0) {
block_33:
                            var_s5 = 0;
                            if (*var_s4 != 0xFF) {
                                do {
                                    temp_a0_2 = var_s4[var_s5];
                                    if ((temp_a0_2 != 5) || (*var_s3_2 != 0)) {
                                        func_001F3D10(M2C_FIELD((arg0 + var_s2_2 + ((temp_a0_2 & 0xFF) * 8)), s32 *, 0x920), 1U);
                                    }
                                    var_s5 += 1;
                                } while (var_s4[var_s5] != 0xFF);
                            }
                        }
                        var_s1_2 += 1;
                        var_s3_2 += 4;
                        var_s2_2 += 4;
                    } while (var_s1_2 < 2);
                }
                var_s6 += 1;
                var_s4 += 8;
            } while (var_s6 < 0xD);
        }
    }
}

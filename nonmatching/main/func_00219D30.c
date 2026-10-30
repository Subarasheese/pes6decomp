/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
extern int func_00115898(int, int, void *, int);
s32 func_001C7E10(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
extern char D_003A9190[];
extern char D_003A91B0[];
extern char D_003A91B4[];
extern char D_003A91B6[];
extern char D_003D4538[];
extern char D_00537B60[];
extern void *D_00538200;
extern char D_00538204[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern M2C_UNK *D_00538234;
extern char D_00538238[];
extern char D_00538250[];
extern char D_0053825E[];
extern M2C_UNK func_002187C0;
extern M2C_UNK func_00219A80;

s32 func_00219D30(void *arg0) {
    s16 sp8C;
    s16 sp8E;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a1_2;
    s16 temp_s4;
    s16 temp_s6;
    s16 temp_v1;
    s32 *var_a1_3;
    s32 *var_a2_3;
    s32 *var_a2_4;
    s32 *var_a3_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a5;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s0;
    void *var_a3;
    void *var_s1;

    var_a3 = NULL;
    temp_s4 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_s6 = M2C_FIELD(arg0, s16 *, 0xC);
    var_s3 = M2C_FIELD(arg0, s32 *, 0xB8);
    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    sp8C = M2C_FIELD(arg0, s16 *, 0xC);
    sp8E = M2C_FIELD(arg0, s16 *, 0xE);
    if ((*(s32 *)D_00538204) > 0) {
        var_a3 = D_00538200;
    }
    var_s1 = NULL;
    var_a2 = 0;
    if (D_00538200 != NULL) {
        var_a2 = (*(s32 *)D_00538204);
    }
    if (sp8C != -1) {
        temp_v1 = sp8E;
        if (temp_v1 != -1) {
            var_a1 = 0;
            if (var_a2 > 0) {
loop_6:
                if ((M2C_FIELD(var_a3, s16 *, 2) == temp_v1) && (M2C_FIELD(var_a3, s16 *, 0) == sp8C)) {
                    var_s1 = var_a3;
                } else {
                    var_a1 += 1;
                    var_a3 += 0x10;
                    if (var_a1 < var_a2) {
                        goto loop_6;
                    }
                }
            }
        }
    }
    var_a2_2 = var_s3 << 5;
loop_11:
    if (var_s3 < M2C_FIELD(arg0, s32 *, 0x1C)) {
        var_a3_2 = 0;
        if (M2C_FIELD((M2C_FIELD(temp_s0, s32 *, 0x1C) + var_a2_2), s32 *, 0x18) != 0) {
            var_a3_2 = 1;
        }
        if (var_a3_2 != 0) {
            if (var_s3 >= M2C_FIELD(arg0, s32 *, 0x1C)) {
                goto block_23;
            }
            func_001C7F58(((void *)D_00537B60), ((void *)D_003D4538), var_a2_2, var_a3_2);
            var_a0 = 0;
            if (M2C_FIELD(var_s1, s16 *, 4) == 3) {
                var_a0 = 1;
            }
            if (var_a0 == 0) {
                func_00121430(((void *)D_00537B60));
                func_00121430(((void *)D_00537B60));
            }
            if (M2C_FIELD(temp_s0, s32 *, 0x1C) != 0) {

            }
            func_00121430(((void *)D_00537B60));
            temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x1C);
            var_a1_2 = NULL;
            if (temp_v1_2 != 0) {
                var_a1_2 = temp_v1_2 + (var_s3 << 5);
            }
            if (func_001C7E10(((void *)D_003A9190), var_a1_2) == 0) {
                if ((M2C_FIELD(arg0, s16 *, 0xE) == *(s16 *)0x3A91B6) && (M2C_FIELD(arg0, s16 *, 0xC) == (*(s16 *)D_003A91B4))) {
                    var_s1_2 = 3;
                } else {
                    goto block_43;
                }
            } else {
block_43:
                var_s1_2 = 2;
            }
            if ((M2C_FIELD(arg0, s32 *, 0xB4) != 0) || ((M2C_FIELD(arg0, s32 *, 0x34) & 0x100) != 0x100)) {
                var_s1_2 |= 0x200;
            }
            temp_v1_3 = M2C_FIELD(temp_s0, s32 *, 0x1C);
            var_a0_2 = NULL;
            if (temp_v1_3 != 0) {
                var_a0_2 = temp_v1_3 + (var_s3 << 5);
            }
            if ((*(s16 *)D_0053825E) == (*(s16 *)D_003A91B6)) {
                if (M2C_FIELD(((void *)D_00538250), s16 *, 0xC) == *(s16 *)0x3A91B4) {
                    if ((*(s32 *)D_003A91B0) < 0) {
                        goto block_50;
                    }
                    if (func_001C7E10(var_a0_2, ((void *)D_003A9190)) == 0) {
                        var_v0_2 = 1;
                    } else {
block_50:
                        goto block_51;
                    }
                } else {
                    goto block_51;
                }
            } else {
block_51:
                var_v0_2 = 0;
            }
            if ((var_v0_2 != 0) && ((M2C_FIELD(arg0, s32 *, 0x34) & 0x100) == 0x100)) {
                var_a4 = 0;
                M2C_FIELD(arg0, s32 *, 0x84) = (s32) (*(s32 *)D_003A91B0);
                var_a2_3 = M2C_FIELD(arg0, s32 **, 0xA8);
                temp_v1_4 = M2C_FIELD(arg0, s32 *, 0xAC);
                temp_a0 = *var_a2_3;
                var_a3_3 = 0;
                if (temp_a0 != temp_v1_4) {
                    var_a1_3 = var_a2_3;
                    do {
                        var_a1_3 += 4;
                        var_a4 += 1;
                    } while (*var_a1_3 != temp_v1_4);
                }
                if (temp_a0 != &func_00219A80) {
                    do {
                        var_a2_3 += 4;
                        var_a3_3 += 1;
                    } while (*var_a2_3 != &func_00219A80);
                }
                var_v0 = var_a3_3 - var_a4;
            } else {
                (*(s32 *)D_00538228) = 0;
                (*(s32 *)D_0053822C) = (s32) temp_s6;
                (*(s32 *)D_00538230) = (s32) temp_s4;
                D_00538234 = ((void *)D_00537B60);
                (*(s32 *)D_00538238) = var_s1_2;
                var_v0_3 = 0;
                if ((temp_s6 != -1) && (temp_s4 != -1)) {
                    var_v0_3 = func_00115898((s32) temp_s6, (s32) temp_s4, ((void *)D_00537B60), var_s1_2);
                }
                var_a0_3 = 0;
                (*(s32 *)D_00538224) = 0;
                if (var_v0_3 != 0) {

                } else {
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    var_a0_3 = -0x7F;
                }
                var_v0 = var_a0_3;
            }
        } else {
block_23:
            var_s3 += 1;
            var_a2_2 += 0x20;
            M2C_FIELD(arg0, s32 *, 0xB8) = var_s3;
            goto loop_11;
        }
    } else {
        var_a5 = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        var_a3_4 = M2C_FIELD(arg0, s32 **, 0xA8);
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_v1_5 = *var_a3_4;
        var_a4_2 = 0;
        if (temp_v1_5 != temp_a0_2) {
            var_a2_4 = var_a3_4;
            do {
                var_a2_4 += 4;
                var_a5 += 1;
            } while (*var_a2_4 != temp_a0_2);
        }
        if (temp_v1_5 != &func_002187C0) {
            do {
                var_a3_4 += 4;
                var_a4_2 += 1;
            } while (*var_a3_4 != &func_002187C0);
        }
        var_v0 = var_a4_2 - var_a5;
    }
    return var_v0;
}

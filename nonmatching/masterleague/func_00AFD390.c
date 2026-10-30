/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00238330(s32);
extern u8 func_00225820(void);
extern s32 func_0022C140(s32);
extern void * func_0022C1E0(void);
s32 func_0099B4B0();                                /* extern */
s32 func_00AFD280(s8, void *);                      /* extern */
extern s32 D_003E77AC;

void func_00AFD390(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 temp_a0_3;
    void *temp_a1;
    void *temp_s5;
    void *var_a0;
    void *var_a1;

    var_s4 = arg1;
    if (func_0099B4B0() != 1) {
        if ((var_s4 & 0xFF) != 0xFF) {
            temp_s1 = func_00238330(var_s4) & 0xFF;
            if (temp_s1 != (func_00238330(func_00225820()) & 0xFF)) {
                var_s4 = 0xFF;
            }
        }
        var_s3 = 0;
        var_s1 = 0;
        temp_s0 = var_s4 & 0xFF;
        do {
            var_s2 = 0;
            temp_a1 = D_003E77AC + var_s1;
            var_a0 = temp_a1;
loop_6:
            if ((arg0 & 0xFFFF) == M2C_FIELD(var_a0, u16 *, 0x477A)) {
                if (temp_s0 == 0xFF) {
                    temp_a0 = var_s2 * 8;
                    M2C_FIELD((temp_a1 + temp_a0), s16 *, 0x477A) = 0;
                    M2C_FIELD((D_003E77AC + var_s1 + temp_a0), s16 *, 0x477E) = 0;
                    M2C_FIELD((D_003E77AC + var_s1 + temp_a0), s16 *, 0x4780) = 0;
                } else {
                    switch (var_s3) {               /* irregular */
                    case 1:
                    case 0:
                        M2C_FIELD((temp_a1 + (var_s2 * 8)), s8 *, 0x477C) = (s8) var_s4;
                        break;
                    case 2:
                        if (func_00AFD280((s8) var_s4, temp_a1) == 1) {
                            M2C_FIELD((D_003E77AC + var_s1 + (var_s2 * 8)), s8 *, 0x477C) = (s8) var_s4;
                        } else {
                            temp_a0_2 = var_s2 * 8;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_2), s16 *, 0x477A) = 0;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_2), s16 *, 0x477E) = 0;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_2), s16 *, 0x4780) = 0;
                        }
                        break;
                    case 3:
                        temp_s5 = func_0022C1E0();
                        temp_v0 = func_0022C140(5);
                        if (temp_v0 == 0) {
                            var_a0_2 = 0;
                        } else {
                            temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 9);
                            var_a2 = 0;
                            if ((s32) temp_a0_3 > 0) {
                                var_a1 = temp_s5 + (M2C_FIELD(temp_v0, u8 *, 8) & 0xFF);
loop_25:
                                if (M2C_FIELD(var_a1, u8 *, 0xC4) == temp_s0) {
                                    var_a0_2 = 1;
                                } else {
                                    var_a2 += 1;
                                    var_a1 += 1;
                                    if (var_a2 >= (s32) temp_a0_3) {
                                        goto block_29;
                                    }
                                    goto loop_25;
                                }
                            } else {
block_29:
                                var_a0_2 = 0;
                            }
                        }
                        if (var_a0_2 == 1) {
                            M2C_FIELD((D_003E77AC + var_s1 + (var_s2 * 8)), s8 *, 0x477C) = (s8) var_s4;
                        } else {
                            temp_a0_4 = var_s2 * 8;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_4), s16 *, 0x477A) = 0;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_4), s16 *, 0x477E) = 0;
                            M2C_FIELD((D_003E77AC + var_s1 + temp_a0_4), s16 *, 0x4780) = 0;
                        }
                        break;
                    }
                }
            } else {
                var_s2 += 1;
                var_a0 += 8;
                if (var_s2 < 0x190) {
                    goto loop_6;
                }
            }
            var_s3 += 1;
            var_s1 += 0xC82;
        } while (var_s3 < 4);
    }
}

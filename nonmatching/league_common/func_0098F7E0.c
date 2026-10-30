/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
extern void * func_00229460(void);
s32 func_00228F20(s32);                             /* extern */
extern void *D_003E77B4;
extern char D_00591C09[];

void func_0098F7E0(void) {
    s32 temp_a4;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s8 var_a1;
    s8 var_s0_2;
    u8 temp_a1_2;
    u8 var_a5;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;

    var_a2 = 0;
    var_a1 = 0;
    var_a0 = D_003E77B4;
loop_2:
    if ((s32) M2C_FIELD(var_a0, u8 *, 0x4AC1) > 0) {
        if (var_a2 < 0x14) {
            var_a0 += 0xC;
            var_a2 += 1;
            var_a1 = (var_a1 + 1) & 0xFF;
            goto loop_2;
        }
    }
    M2C_FIELD(D_003E77B4, s8 *, 0x1363) = var_a1;
    var_s0 = 0;
    var_s2 = 0;
    var_s1 = 0;
loop_36:
    if (var_s0 < (var_a1 & 0xFF)) {
        if (var_s0 < 0x14) {
            temp_a1 = D_003E77B4 + var_s1;
            var_a5 = M2C_FIELD(temp_a1, u8 *, 0x4AC1);
            if (((s32) var_a5 % 2) == 0) {
                var_a5 = (var_a5 - 1) & 0xFF;
            }
            temp_a1_2 = M2C_FIELD(temp_a1, u8 *, 0x4AC1);
            temp_a4 = (var_s0 & 0xFF) * 0xC;
            M2C_FIELD((D_003E77B4 + temp_a4), u8 *, 0x4AB8) = temp_a1_2;
            M2C_FIELD((D_003E77B4 + temp_a4), u8 *, 0x4AB9) = var_a5;
            M2C_FIELD((D_003E77B4 + temp_a4), s8 *, 0x4ABB) = (s8) (temp_a1_2 >> 1);
            M2C_FIELD((D_003E77B4 + temp_a4), s8 *, 0x4ABC) = 2;
            M2C_FIELD((D_003E77B4 + temp_a4), u8 *, 0x4ABD) = (u8) M2C_FIELD(temp_a1, u8 *, 0x4ABE);
            temp_a2 = D_003E77B4 + temp_a4;
            M2C_FIELD(temp_a2, s8 *, 0x4ABA) = (s8) (M2C_FIELD(temp_a2, u8 *, 0x4AB9) * M2C_FIELD(temp_a2, u8 *, 0x4ABD));
            switch ((*(u8 *)D_00591C09)) {                   /* irregular */
            case 1:
                if (var_s0 == 0) {
                    var_s4 = 0;
                    M2C_FIELD((D_003E77B4 + var_s1), s8 *, 0x4ABF) = 0;
loop_21:
                    if (var_s4 < (s32) M2C_FIELD((var_s1 + D_003E77B4), u8 *, 0x4AB8)) {
                        if (var_s0 >= 0x14) {

                        } else {
                            if (func_00228F20(var_s2 & 0xFF) & 0xFF) {
                                temp_v1 = var_s1 + D_003E77B4;
                                M2C_FIELD(temp_v1, u8 *, 0x4ABF) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4ABF) + 1);
                            }
                            var_s4 += 1;
                            var_s2 += 1;
                            goto loop_21;
                        }
                    }
                }
                break;
            case 14:
            case 2:
                var_s4_2 = 0;
                M2C_FIELD((D_003E77B4 + var_s1), s8 *, 0x4ABF) = 0;
loop_30:
                if (var_s4_2 < (s32) M2C_FIELD((var_s1 + D_003E77B4), u8 *, 0x4AB8)) {
                    if (var_s0 >= 0x14) {

                    } else {
                        if (func_00228F20(var_s2 & 0xFF) & 0xFF) {
                            temp_v1_2 = var_s1 + D_003E77B4;
                            M2C_FIELD(temp_v1_2, u8 *, 0x4ABF) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0x4ABF) + 1);
                        }
                        var_s4_2 += 1;
                        var_s2 += 1;
                        goto loop_30;
                    }
                }
                break;
            case 4:
                M2C_FIELD(D_003E77B4, s8 *, 0x4B57) = 1;
                break;
            }
            var_s1 += 0xC;
            var_s0 += 1;
            goto loop_36;
        }
    }
    var_s0_2 = 0;
loop_45:
    if ((var_s0_2 < (s32) M2C_FIELD(D_003E77B4, u8 *, 0x1364)) && (var_s0_2 < 0x20)) {
        if ((func_00228F20(var_s0_2 & 0xFF) & 0xFF) <= 0) {
            var_s0_2 += 1;
            goto loop_45;
        }
        M2C_FIELD(D_003E77B4, s8 *, 0x1362) = var_s0_2;
    }
    temp_s0 = func_00229460();
    temp_v0 = func_002293F0();
    if ((temp_v0 != 0) && (temp_s0 != NULL) && ((*(u8 *)D_00591C09) == 2)) {
        M2C_FIELD(temp_s0, u8 *, 0x4616) = (u8) M2C_FIELD(temp_v0, u8 *, 0x1363);
        M2C_FIELD(temp_s0, s8 *, 0x4617) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x4618) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x4619) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x461A) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x461B) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x461C) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x461D) = 0;
    }
}

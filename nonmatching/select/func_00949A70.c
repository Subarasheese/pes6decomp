/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B2980(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_00949C10(s32, s32);                    /* extern */
M2C_UNK func_00949ED0(s32, s32);                    /* extern */
extern char D_00967F20[];

void func_00949A70(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s8 *var_s0_3;
    s8 *var_s4;
    s8 *var_s4_2;

    switch ((*(s8 *)D_00967F20)) {                           /* irregular */
    case 0:
        var_s0 = 0;
        var_s2 = 0;
        var_s1 = 0;
        do {
            var_s3 = 0;
            var_s4 = &(((void *)D_00967F20))[var_s2];
loop_22:
            func_008B2980(var_s3 + var_s1, 1, M2C_FIELD(var_s4, u16 *, 0x144C), 1);
            func_00949C10(var_s3, var_s0);
            func_00949ED0(var_s3, var_s0);
            var_s3 += 1;
            var_s4 += 0x80;
            if (var_s3 < 2) {
                goto loop_22;
            }
            var_s0 += 1;
            var_s2 += 8;
            var_s1 += 2;
        } while (var_s0 < 0x10);
        return;
    case 2:
        var_s0_2 = 0;
        var_s2_2 = 0;
        var_s1_2 = 0;
        do {
            var_s3_2 = 0;
            var_s4_2 = &(((void *)D_00967F20))[var_s2_2];
loop_17:
            func_008B2980(var_s3_2 + var_s1_2, 1, M2C_FIELD(var_s4_2, u16 *, 0x164C), 1);
            func_00949C10(var_s3_2, var_s0_2);
            func_00949ED0(var_s3_2, var_s0_2);
            var_s3_2 += 1;
            var_s4_2 += 0x50;
            if (var_s3_2 < 2) {
                goto loop_17;
            }
            var_s0_2 += 1;
            var_s2_2 += 8;
            var_s1_2 += 2;
        } while (var_s0_2 < 0xA);
        return;
    case 1:
        var_s2_3 = 0;
        var_s1_3 = 0;
        do {
            var_s3_3 = 0;
            var_s0_3 = &(((void *)D_00967F20))[var_s1_3];
loop_12:
            func_008B2980(var_s3_3 + var_s1_3, 1, M2C_FIELD(var_s0_3, u16 *, 0x124C), 1);
            func_00949C10(var_s3_3, var_s2_3);
            var_s3_3 += 1;
            var_s0_3 += 0x20;
            if (var_s3_3 < 8) {
                goto loop_12;
            }
            var_s2_3 += 1;
            var_s1_3 += 8;
        } while (var_s2_3 < 4);
        return;
    }
}

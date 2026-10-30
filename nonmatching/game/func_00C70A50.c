/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00C8B210(void);
extern void func_001EF900(void *, s8);
M2C_UNK func_002F9F20(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C711D0(s32, u16);                    /* extern */
M2C_UNK func_00C71510(s32, u16);                    /* extern */
extern char D_00591E0C[];
extern char D_00CCBCD0[];
extern char D_00CCBD14[];
extern char D_00CCBD1D[];
extern char D_00CCBD1E[];
extern char D_00CCBD1F[];
extern char D_00CCBD20[];
extern char D_00CCBD21[];
extern char D_00CCBD22[];
extern char D_00CCCE30[];
extern void *D_00CCCF74;
extern void *D_00CCCF88;
extern void *D_00CCCF98;
extern void *D_00CCCFB0;

void func_00C70A50(void) {
    M2C_UNK *var_s1_10;
    M2C_UNK *var_s2_4;
    M2C_UNK *var_s2_6;
    M2C_UNK *var_s3;
    M2C_UNK *var_s3_4;
    M2C_UNK *var_s3_5;
    s32 temp_s6;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s0_6;
    s32 var_s1_13;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s1_9;
    s32 var_s2;
    s32 var_s2_10;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_5;
    s32 var_s2_7;
    s32 var_s2_8;
    s32 var_s2_9;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s5_4;
    u16 temp_s0_2;
    u16 temp_s1;
    u16 temp_s1_2;
    u8 temp_s0;
    u8 var_s1;
    void **var_s0;
    void **var_s0_3;
    void **var_s0_5;
    void **var_s0_7;
    void **var_s1_11;
    void **var_s1_12;
    void **var_s1_3;
    void **var_s1_5;
    void **var_s1_6;
    void **var_s1_7;
    void **var_s1_8;

    var_s1 = (*(u8 *)D_00CCBD20) & (*(u8 *)D_00CCBD22) & (func_00C8B210() == 0);
    if ((var_s1 != 0) && ((*(s32 *)D_00591E0C) == 0) && ((s32) (*(u16 *)D_00CCBD14) < 2)) {
        var_s1 = 2;
    }
    temp_s0 = (*(u8 *)D_00CCBD1D) & (*(u8 *)D_00CCBD1F) & (func_00C8B210() == 0);
    if ((var_s1 != (*(u8 *)D_00CCBD21)) || (temp_s0 != (*(u8 *)D_00CCBD1E))) {
        (*(u8 *)D_00CCBD21) = var_s1;
        (*(u8 *)D_00CCBD1E) = temp_s0;
        if ((var_s1 == 0) && (temp_s0 == 0)) {
            var_s1_2 = 0;
            var_s0 = &D_00CCCF98;
            do {
                func_001EF900(*var_s0, 0);
                var_s1_2 += 1;
                var_s0 += 4;
            } while (var_s1_2 < 6);
            func_001EF900(D_00CCCFB0, 0);
            var_s5 = 0;
            var_s3 = ((void *)D_00CCBCD0);
            var_s2 = 0x4B;
            do {
                if (((M2C_FIELD(var_s3, u16 *, 0x34) / 10) + ((u16) M2C_FIELD(var_s3, u16 *, 0x34) >> 0x1F)) == 0) {
                    var_s0_2 = 1;
                } else {
                    var_s0_2 = 2;
                }
                var_s4 = 0;
                var_s1_3 = ((void *)D_00CCCE30) + (var_s2 * 4) + 0x1C;
                if (var_s0_2 > 0) {
                    do {
                        func_001EF900(*var_s1_3, 0);
                        var_s4 += 1;
                        var_s1_3 += 4;
                    } while (var_s4 < var_s0_2);
                }
                var_s5 += 1;
                var_s3 += 4;
                var_s2 += 2;
            } while (var_s5 < 2);
            var_s1_4 = 0;
            var_s0_3 = &D_00CCCF88;
            do {
                func_001EF900(*var_s0_3, 0);
                var_s1_4 += 1;
                var_s0_3 += 4;
            } while (var_s1_4 < 4);
            func_001EF900(D_00CCCF74, 0);
            return;
        }
        switch (var_s1) {                           /* irregular */
        case 0:
            var_s2_2 = 0;
            var_s1_5 = &D_00CCCF98;
            do {
                func_001EF900(*var_s1_5, 0);
                var_s2_2 += 1;
                var_s1_5 += 4;
            } while (var_s2_2 < 6);
            func_001EF900(D_00CCCFB0, 0);
            break;
        case 1:
            var_s2_3 = 0;
            var_s1_6 = &D_00CCCF98;
            do {
                func_001EF900(*var_s1_6, 1);
                var_s2_3 += 1;
                var_s1_6 += 4;
            } while (var_s2_3 < 6);
            func_001EF900(D_00CCCFB0, 0);
            var_s3_2 = 0;
            var_s2_4 = ((void *)D_00CCBCD0);
            do {
                temp_s1 = M2C_FIELD(var_s2_4, u16 *, 0x3C);
                func_00C71510(var_s3_2, temp_s1);
                var_s3_2 += 1;
                M2C_FIELD(var_s2_4, u16 *, 0x3E) = temp_s1;
                var_s2_4 += 4;
            } while (var_s3_2 < 3);
            break;
        case 2:
            var_s2_5 = 0;
            var_s1_7 = &D_00CCCF98;
            do {
                func_001EF900(*var_s1_7, 0);
                var_s2_5 += 1;
                var_s1_7 += 4;
            } while (var_s2_5 < 6);
            func_001EF900(D_00CCCFB0, 1);
            var_s3_3 = 0;
            var_s2_6 = ((void *)D_00CCBCD0);
            do {
                temp_s1_2 = M2C_FIELD(var_s2_6, u16 *, 0x3C);
                func_00C71510(var_s3_3, temp_s1_2);
                var_s3_3 += 1;
                M2C_FIELD(var_s2_6, u16 *, 0x3E) = temp_s1_2;
                var_s2_6 += 4;
            } while (var_s3_3 < 3);
            break;
        }
        if (temp_s0 != 0) {
            var_s5_2 = 0;
            var_s3_4 = ((void *)D_00CCBCD0);
            var_s2_7 = 0x4B;
            do {
                if (((M2C_FIELD(var_s3_4, u16 *, 0x34) / 10) + ((u16) M2C_FIELD(var_s3_4, u16 *, 0x34) >> 0x1F)) == 0) {
                    var_s0_4 = 1;
                } else {
                    var_s0_4 = 2;
                }
                var_s4_2 = 0;
                var_s1_8 = ((void *)D_00CCCE30) + (var_s2_7 * 4) + 0x1C;
                if (var_s0_4 > 0) {
                    do {
                        func_001EF900(*var_s1_8, 1);
                        var_s4_2 += 1;
                        var_s1_8 += 4;
                    } while (var_s4_2 < var_s0_4);
                }
                var_s5_2 += 1;
                var_s3_4 += 4;
                var_s2_7 += 2;
            } while (var_s5_2 < 2);
            var_s1_9 = 0;
            var_s0_5 = &D_00CCCF88;
            do {
                func_001EF900(*var_s0_5, 1);
                var_s1_9 += 1;
                var_s0_5 += 4;
            } while (var_s1_9 < 4);
            func_001EF900(D_00CCCF74, 1);
            var_s2_8 = 0;
            var_s1_10 = ((void *)D_00CCBCD0);
            do {
                temp_s0_2 = M2C_FIELD(var_s1_10, u16 *, 0x34);
                func_00C711D0(var_s2_8, temp_s0_2);
                var_s2_8 += 1;
                M2C_FIELD(var_s1_10, u16 *, 0x36) = temp_s0_2;
                var_s1_10 += 4;
            } while (var_s2_8 < 2);
            var_s5_3 = 0;
            var_s2_9 = 0;
            temp_s6 = (*(u16 *)D_00CCBD14) & 1;
            do {
                var_s4_3 = 0;
                var_s1_11 = &(&D_00CCCF88)[var_s2_9];
loop_54:
                func_002F9F20(*var_s1_11, var_s5_3 ^ temp_s6, 1, 0, 0, 0);
                var_s4_3 += 1;
                var_s1_11 += 4;
                if (var_s4_3 < 2) {
                    goto loop_54;
                }
                var_s5_3 += 1;
                var_s2_9 += 2;
            } while (var_s5_3 < 2);
            return;
        }
        var_s5_4 = 0;
        var_s3_5 = ((void *)D_00CCBCD0);
        var_s2_10 = 0x4B;
        do {
            if (((M2C_FIELD(var_s3_5, u16 *, 0x34) / 10) + ((u16) M2C_FIELD(var_s3_5, u16 *, 0x34) >> 0x1F)) == 0) {
                var_s0_6 = 1;
            } else {
                var_s0_6 = 2;
            }
            var_s4_4 = 0;
            var_s1_12 = ((void *)D_00CCCE30) + (var_s2_10 * 4) + 0x1C;
            if (var_s0_6 > 0) {
                do {
                    func_001EF900(*var_s1_12, 0);
                    var_s4_4 += 1;
                    var_s1_12 += 4;
                } while (var_s4_4 < var_s0_6);
            }
            var_s5_4 += 1;
            var_s3_5 += 4;
            var_s2_10 += 2;
        } while (var_s5_4 < 2);
        var_s1_13 = 0;
        var_s0_7 = &D_00CCCF88;
        do {
            func_001EF900(*var_s0_7, 0);
            var_s1_13 += 1;
            var_s0_7 += 4;
        } while (var_s1_13 < 4);
        func_001EF900(D_00CCCF74, 0);
    }
}

/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA9968[];
extern char D_00CA9978[];
extern char D_00CA9988[];
extern char D_00CA9998[];
extern char D_00CA99A8[];
extern char D_00CA99B8[];
extern char D_00CA99C8[];
extern char D_00CA99D8[];
extern char D_00CA99E8[];
extern char D_00CA99F8[];
extern char D_00CA9A08[];
extern char D_00CA9A18[];
extern char D_00CA9A28[];
extern char D_00CA9A38[];
extern char D_00CA9A48[];
extern char D_00CA9A58[];
extern char D_00CB52A0[];
extern char D_00CB53BC[];

void func_00953060(s8 arg0) {
    M2C_UNK *var_a6;
    M2C_UNK *var_a7;
    M2C_UNK *var_a7_4;
    M2C_UNK *var_a7_5;
    M2C_UNK *var_t0;
    M2C_UNK *var_t0_3;
    M2C_UNK *var_t0_4;
    M2C_UNK *var_t1;
    M2C_UNK *var_t1_4;
    M2C_UNK *var_t2;
    M2C_UNK *var_t2_2;
    s32 temp_a1;
    s32 var_a6_2;
    s32 var_a6_3;
    s32 var_a6_4;
    s32 var_s2;
    s32 var_t3;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_a3;
    u8 *var_a4;
    u8 *var_a5;
    u8 *var_a6_5;
    u8 *var_a7_2;
    u8 *var_a7_3;
    u8 *var_s3;
    u8 *var_t0_2;
    u8 *var_t0_5;
    u8 *var_t1_2;
    u8 *var_t1_3;
    u8 *var_t3_2;
    u8 *var_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_t2;

    temp_a1 = arg0 & 0xFF;
    switch (temp_a1) {                              /* irregular */
    case 0x0:
        var_t3 = 0;
        (*(s8 *)D_00CB53BC) = arg0;
        var_t2 = ((void *)D_00CA9968);
        var_t1 = ((void *)D_00CB52A0);
        var_t0 = ((void *)D_00CA9988);
        var_a7 = ((void *)D_00CA99A8);
        var_a6 = ((void *)D_00CA99C8);
        do {
            var_t3 += 3;
            M2C_FIELD(var_t1, u8 *, 0x168) = (u8) M2C_FIELD(var_t2, u8 *, 0);
            M2C_FIELD(var_t1, u8 *, 0x171) = (u8) M2C_FIELD(var_t0, u8 *, 0);
            M2C_FIELD(var_t1, u8 *, 0x1B0) = (u8) M2C_FIELD(var_a7, u8 *, 0);
            M2C_FIELD(var_t1, u8 *, 0x1B9) = (u8) M2C_FIELD(var_a6, u8 *, 0);
            M2C_FIELD(var_t1, u8 *, 0x169) = (u8) M2C_FIELD(var_t2, u8 *, 1);
            temp_a3 = M2C_FIELD(var_t2, u8 *, 2);
            temp_a2 = M2C_FIELD(var_t0, u8 *, 2);
            M2C_FIELD(var_t1, u8 *, 0x172) = (u8) M2C_FIELD(var_t0, u8 *, 1);
            temp_a1_2 = M2C_FIELD(var_a7, u8 *, 2);
            temp_a0 = M2C_FIELD(var_a6, u8 *, 2);
            var_t2 += 3;
            var_t0 += 3;
            M2C_FIELD(var_t1, u8 *, 0x1B1) = (u8) M2C_FIELD(var_a7, u8 *, 1);
            var_a7 += 3;
            M2C_FIELD(var_t1, u8 *, 0x1BA) = (u8) M2C_FIELD(var_a6, u8 *, 1);
            M2C_FIELD(var_t1, u8 *, 0x16A) = temp_a3;
            var_a6 += 3;
            M2C_FIELD(var_t1, u8 *, 0x173) = temp_a2;
            M2C_FIELD(var_t1, u8 *, 0x1B2) = temp_a1_2;
            M2C_FIELD(var_t1, u8 *, 0x1BB) = temp_a0;
            var_t1 += 3;
        } while (var_t3 < 9);
        return;
    case 0x1:
        var_a6_2 = 0;
        (*(s8 *)D_00CB53BC) = arg0;
        var_t3_2 = ((void *)D_00CA9978);
        var_t2_2 = ((void *)D_00CB52A0);
        var_t1_2 = ((void *)D_00CA9998);
        var_t0_2 = ((void *)D_00CA99B8);
        var_a7_2 = ((void *)D_00CA99D8);
        do {
            var_a6_2 += 3;
            M2C_FIELD(var_t2_2, u8 *, 0x168) = (u8) M2C_FIELD(var_t3_2, u8 *, 0);
            M2C_FIELD(var_t2_2, u8 *, 0x171) = (u8) M2C_FIELD(var_t1_2, u8 *, 0);
            M2C_FIELD(var_t2_2, u8 *, 0x1B0) = (u8) M2C_FIELD(var_t0_2, u8 *, 0);
            M2C_FIELD(var_t2_2, u8 *, 0x1B9) = (u8) M2C_FIELD(var_a7_2, u8 *, 0);
            M2C_FIELD(var_t2_2, u8 *, 0x169) = (u8) M2C_FIELD(var_t3_2, u8 *, 1);
            temp_a3_2 = M2C_FIELD(var_t3_2, u8 *, 2);
            temp_a2_2 = M2C_FIELD(var_t1_2, u8 *, 2);
            M2C_FIELD(var_t2_2, u8 *, 0x172) = (u8) M2C_FIELD(var_t1_2, u8 *, 1);
            temp_a1_3 = M2C_FIELD(var_t0_2, u8 *, 2);
            temp_a0_2 = M2C_FIELD(var_a7_2, u8 *, 2);
            var_t3_2 += 3;
            var_t1_2 += 3;
            M2C_FIELD(var_t2_2, u8 *, 0x1B1) = (u8) M2C_FIELD(var_t0_2, u8 *, 1);
            var_t0_2 += 3;
            M2C_FIELD(var_t2_2, u8 *, 0x1BA) = (u8) M2C_FIELD(var_a7_2, u8 *, 1);
            M2C_FIELD(var_t2_2, u8 *, 0x16A) = temp_a3_2;
            var_a7_2 += 3;
            M2C_FIELD(var_t2_2, u8 *, 0x173) = temp_a2_2;
            M2C_FIELD(var_t2_2, u8 *, 0x1B2) = temp_a1_3;
            M2C_FIELD(var_t2_2, u8 *, 0x1BB) = temp_a0_2;
            var_t2_2 += 3;
        } while (var_a6_2 < 9);
        return;
    case 0x2:
        var_a6_3 = 0;
        var_t1_3 = ((void *)D_00CA99F8);
        var_t0_3 = ((void *)D_00CB52A0);
        var_a7_3 = ((void *)D_00CA9A18);
        do {
            var_a6_3 += 3;
            M2C_FIELD(var_t0_3, u8 *, 0x19E) = (u8) M2C_FIELD(var_t1_3, u8 *, 0);
            M2C_FIELD(var_t0_3, u8 *, 0x1A7) = (u8) M2C_FIELD(var_a7_3, u8 *, 0);
            M2C_FIELD(var_t0_3, u8 *, 0x19F) = (u8) M2C_FIELD(var_t1_3, u8 *, 1);
            M2C_FIELD(var_t0_3, u8 *, 0x1A8) = (u8) M2C_FIELD(var_a7_3, u8 *, 1);
            M2C_FIELD(var_t0_3, u8 *, 0x1A0) = (u8) M2C_FIELD(var_t1_3, u8 *, 2);
            var_t1_3 += 3;
            M2C_FIELD(var_t0_3, u8 *, 0x1A9) = (u8) M2C_FIELD(var_a7_3, u8 *, 2);
            var_a7_3 += 3;
            var_t0_3 += 3;
        } while (var_a6_3 < 9);
        return;
    case 0x3:
        var_a6_4 = 0;
        var_t1_4 = ((void *)D_00CA99E8);
        var_t0_4 = ((void *)D_00CB52A0);
        var_a7_4 = ((void *)D_00CA9A08);
        do {
            var_a6_4 += 3;
            M2C_FIELD(var_t0_4, u8 *, 0x19E) = (u8) M2C_FIELD(var_t1_4, u8 *, 0);
            M2C_FIELD(var_t0_4, u8 *, 0x1A7) = (u8) M2C_FIELD(var_a7_4, u8 *, 0);
            M2C_FIELD(var_t0_4, u8 *, 0x19F) = (u8) M2C_FIELD(var_t1_4, u8 *, 1);
            M2C_FIELD(var_t0_4, u8 *, 0x1A8) = (u8) M2C_FIELD(var_a7_4, u8 *, 1);
            M2C_FIELD(var_t0_4, u8 *, 0x1A0) = (u8) M2C_FIELD(var_t1_4, u8 *, 2);
            var_t1_4 += 3;
            M2C_FIELD(var_t0_4, u8 *, 0x1A9) = (u8) M2C_FIELD(var_a7_4, u8 *, 2);
            var_a7_4 += 3;
            var_t0_4 += 3;
        } while (var_a6_4 < 9);
        return;
    case 0xFF:
        var_s2 = 0;
        var_t0_5 = ((void *)D_00CA9978);
        var_a7_5 = ((void *)D_00CB52A0);
        var_a6_5 = ((void *)D_00CA9998);
        var_a5 = ((void *)D_00CA99B8);
        var_a4 = ((void *)D_00CA99D8);
        var_a3 = ((void *)D_00CA99F8);
        var_a2 = ((void *)D_00CA9A18);
        var_a1 = ((void *)D_00CA9A28);
        var_a0 = ((void *)D_00CA9A38);
        var_v1 = ((void *)D_00CA9A48);
        var_s3 = ((void *)D_00CA9A58);
        do {
            var_s2 += 1;
            temp_t2 = *var_a2;
            M2C_FIELD(var_a7_5, u8 *, 0x168) = (u8) *var_t0_5;
            var_t0_5 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x171) = (u8) *var_a6_5;
            var_a6_5 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x1B0) = (u8) *var_a5;
            var_a5 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x1B9) = (u8) *var_a4;
            var_a4 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x19E) = (u8) *var_a3;
            var_a3 += 1;
            var_a2 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x1A7) = temp_t2;
            M2C_FIELD(var_a7_5, u8 *, 0x17A) = (u8) *var_a1;
            var_a1 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x183) = (u8) *var_a0;
            var_a0 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x18C) = (u8) *var_v1;
            var_v1 += 1;
            M2C_FIELD(var_a7_5, u8 *, 0x195) = (u8) *var_s3;
            var_s3 += 1;
            var_a7_5 += 1;
        } while (var_s2 < 9);
        return;
    }
}

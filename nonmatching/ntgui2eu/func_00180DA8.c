/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00181270();                            /* extern */
M2C_UNK func_00181488(void *);                      /* extern */
M2C_UNK func_00181658(void *, s64, s64, s64, s64);  /* extern */
M2C_UNK func_001818D0(void *, s64, s64, s64, s64, s64, s64); /* extern */
s32 func_0018A3F0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00180DA8(void *arg0) {
    s64 temp_a1;
    s64 temp_a1_4;
    s64 temp_a2;
    s64 temp_a2_5;
    s64 temp_a3;
    s64 temp_a3_2;
    s64 temp_a4;
    s64 temp_a4_2;
    s64 temp_a5;
    s64 temp_a6;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_6;
    void *temp_a2_7;
    void *temp_s1;
    void *var_a0;
    void *var_a0_2;
    void *var_v0;
    void *var_v0_10;
    void *var_v0_11;
    void *var_v0_12;
    void *var_v0_13;
    void *var_v0_14;
    void *var_v0_15;
    void *var_v0_2;
    void *var_v0_3;
    void *var_v0_4;
    void *var_v0_5;
    void *var_v0_6;
    void *var_v0_7;
    void *var_v0_8;
    void *var_v0_9;
    void *var_v1;
    void *var_v1_10;
    void *var_v1_11;
    void *var_v1_12;
    void *var_v1_13;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;
    void *var_v1_5;
    void *var_v1_6;
    void *var_v1_7;
    void *var_v1_8;
    void *var_v1_9;

    func_00181270();
    func_00181488(arg0);
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    M2C_FIELD(arg0, s32 *, 0x918) = 0;
    M2C_FIELD(arg0, s32 *, 0x910) = 0x1000008A;
    M2C_FIELD(arg0, s32 *, 0x91C) = func_0018A3F0(0x50, 0, 0x8A, 0);
    M2C_FIELD(arg0, s32 *, 0x11C0) = 0x60000000;
    var_v0 = arg0 + 0x910;
    var_v1 = arg0 + 0x11D0;
    M2C_FIELD(arg0, s32 *, 0x11C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C8) = 0;
    temp_a0 = var_v1;
    M2C_FIELD(arg0, s32 *, 0x11CC) = 0;
    do {
        temp_a1 = M2C_FIELD(var_v0, s64 *, 0);
        temp_a2 = M2C_FIELD(var_v0, s64 *, 8);
        temp_a3 = M2C_FIELD(var_v0, s64 *, 0x10);
        temp_a4 = M2C_FIELD(var_v0, s64 *, 0x18);
        M2C_FIELD(var_v1, s64 *, 0) = temp_a1;
        M2C_FIELD(var_v1, s64 *, 8) = temp_a2;
        M2C_FIELD(var_v1, s64 *, 0x10) = temp_a3;
        M2C_FIELD(var_v1, s64 *, 0x18) = temp_a4;
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != temp_a0);
    func_00181658(arg0, temp_a1, temp_a2, temp_a3, temp_a4);
    M2C_FIELD(arg0, s32 *, 0x1A94) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A98) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A90) = 0x10000072;
    temp_a2_2 = arg0 + 0x1A90;
    M2C_FIELD(arg0, s32 *, 0x1A9C) = func_0018A3F0(0x50, 0, 0x72, 0);
    var_a0 = arg0 + 0x21D0;
    M2C_FIELD(arg0, s32 *, 0x21C0) = 0x60000000;
    temp_a1_2 = var_a0;
    M2C_FIELD(arg0, s32 *, 0x21C4) = 0;
    var_v0_2 = temp_a2_2;
    M2C_FIELD(arg0, s32 *, 0x21C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x21CC) = 0;
    do {
        M2C_FIELD(var_a0, s64 *, 0) = (s64) M2C_FIELD(var_v0_2, s64 *, 0);
        M2C_FIELD(var_a0, s64 *, 8) = (s64) M2C_FIELD(var_v0_2, s64 *, 8);
        M2C_FIELD(var_a0, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_2, s64 *, 0x10);
        M2C_FIELD(var_a0, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_2, s64 *, 0x18);
        var_v0_2 += 0x20;
        var_a0 += 0x20;
    } while (var_v0_2 != temp_a1_2);
    temp_a0_2 = arg0 + 0x4D50;
    var_v0_3 = temp_a2_2;
    var_v1_2 = temp_a0_2;
    do {
        M2C_FIELD(var_v1_2, s64 *, 0) = (s64) M2C_FIELD(var_v0_3, s64 *, 0);
        M2C_FIELD(var_v1_2, s64 *, 8) = (s64) M2C_FIELD(var_v0_3, s64 *, 8);
        M2C_FIELD(var_v1_2, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_3, s64 *, 0x10);
        M2C_FIELD(var_v1_2, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_3, s64 *, 0x18);
        var_v0_3 += 0x20;
        var_v1_2 += 0x20;
    } while (var_v0_3 != temp_a1_2);
    temp_a2_3 = arg0 + 0x4610;
    var_v0_4 = temp_a0_2;
    var_v1_3 = temp_a2_3;
    temp_s1 = arg0 + 0x5490;
    do {
        M2C_FIELD(var_v1_3, s64 *, 0) = (s64) M2C_FIELD(var_v0_4, s64 *, 0);
        M2C_FIELD(var_v1_3, s64 *, 8) = (s64) M2C_FIELD(var_v0_4, s64 *, 8);
        M2C_FIELD(var_v1_3, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_4, s64 *, 0x10);
        M2C_FIELD(var_v1_3, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_4, s64 *, 0x18);
        var_v0_4 += 0x20;
        var_v1_3 += 0x20;
    } while (var_v0_4 != temp_s1);
    temp_a1_3 = arg0 + 0x3ED0;
    var_v0_5 = temp_a2_3;
    var_v1_4 = temp_a1_3;
    do {
        M2C_FIELD(var_v1_4, s64 *, 0) = (s64) M2C_FIELD(var_v0_5, s64 *, 0);
        M2C_FIELD(var_v1_4, s64 *, 8) = (s64) M2C_FIELD(var_v0_5, s64 *, 8);
        M2C_FIELD(var_v1_4, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_5, s64 *, 0x10);
        M2C_FIELD(var_v1_4, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_5, s64 *, 0x18);
        var_v0_5 += 0x20;
        var_v1_4 += 0x20;
    } while (var_v0_5 != temp_a0_2);
    temp_a0_3 = arg0 + 0x3790;
    var_v0_6 = temp_a1_3;
    var_v1_5 = temp_a0_3;
    do {
        M2C_FIELD(var_v1_5, s64 *, 0) = (s64) M2C_FIELD(var_v0_6, s64 *, 0);
        M2C_FIELD(var_v1_5, s64 *, 8) = (s64) M2C_FIELD(var_v0_6, s64 *, 8);
        M2C_FIELD(var_v1_5, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_6, s64 *, 0x10);
        M2C_FIELD(var_v1_5, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_6, s64 *, 0x18);
        var_v0_6 += 0x20;
        var_v1_5 += 0x20;
    } while (var_v0_6 != temp_a2_3);
    temp_a2_4 = arg0 + 0x3050;
    var_v0_7 = temp_a0_3;
    var_v1_6 = temp_a2_4;
    do {
        temp_a5 = M2C_FIELD(var_v0_7, s64 *, 0x10);
        temp_a6 = M2C_FIELD(var_v0_7, s64 *, 0x18);
        M2C_FIELD(var_v1_6, s64 *, 0) = (s64) M2C_FIELD(var_v0_7, s64 *, 0);
        M2C_FIELD(var_v1_6, s64 *, 8) = (s64) M2C_FIELD(var_v0_7, s64 *, 8);
        M2C_FIELD(var_v1_6, s64 *, 0x10) = temp_a5;
        M2C_FIELD(var_v1_6, s64 *, 0x18) = temp_a6;
        var_v0_7 += 0x20;
        var_v1_6 += 0x20;
    } while (var_v0_7 != temp_a1_3);
    var_v0_8 = temp_a2_4;
    var_v1_7 = arg0 + 0x2910;
    do {
        temp_a1_4 = M2C_FIELD(var_v0_8, s64 *, 0);
        temp_a2_5 = M2C_FIELD(var_v0_8, s64 *, 8);
        temp_a3_2 = M2C_FIELD(var_v0_8, s64 *, 0x10);
        temp_a4_2 = M2C_FIELD(var_v0_8, s64 *, 0x18);
        M2C_FIELD(var_v1_7, s64 *, 0) = temp_a1_4;
        M2C_FIELD(var_v1_7, s64 *, 8) = temp_a2_5;
        M2C_FIELD(var_v1_7, s64 *, 0x10) = temp_a3_2;
        M2C_FIELD(var_v1_7, s64 *, 0x18) = temp_a4_2;
        var_v0_8 += 0x20;
        var_v1_7 += 0x20;
    } while (var_v0_8 != temp_a0_3);
    func_001818D0(arg0, temp_a1_4, temp_a2_5, temp_a3_2, temp_a4_2, temp_a5, temp_a6);
    M2C_FIELD(arg0, s32 *, 0x5494) = 0;
    M2C_FIELD(arg0, s32 *, 0x5498) = 0;
    M2C_FIELD(arg0, s32 *, 0x5490) = 0x10000012;
    M2C_FIELD(arg0, s32 *, 0x549C) = func_0018A3F0(0x50, 0, 0x12, 0);
    M2C_FIELD(arg0, s32 *, 0x55C0) = 0x60000000;
    var_v0_9 = temp_s1;
    var_v1_8 = arg0 + 0x55D0;
    M2C_FIELD(arg0, s32 *, 0x55C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x55C8) = 0;
    temp_a0_4 = var_v1_8;
    M2C_FIELD(arg0, s32 *, 0x55CC) = 0;
    do {
        M2C_FIELD(var_v1_8, s64 *, 0) = (s64) M2C_FIELD(var_v0_9, s64 *, 0);
        M2C_FIELD(var_v1_8, s64 *, 8) = (s64) M2C_FIELD(var_v0_9, s64 *, 8);
        M2C_FIELD(var_v1_8, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_9, s64 *, 0x10);
        M2C_FIELD(var_v1_8, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_9, s64 *, 0x18);
        var_v0_9 += 0x20;
        var_v1_8 += 0x20;
    } while (var_v0_9 != temp_a0_4);
    temp_a1_5 = arg0 + 0x5D50;
    var_v0_10 = temp_s1;
    var_v1_9 = temp_a1_5;
    do {
        M2C_FIELD(var_v1_9, s64 *, 0) = (s64) M2C_FIELD(var_v0_10, s64 *, 0);
        M2C_FIELD(var_v1_9, s64 *, 8) = (s64) M2C_FIELD(var_v0_10, s64 *, 8);
        M2C_FIELD(var_v1_9, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_10, s64 *, 0x10);
        M2C_FIELD(var_v1_9, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_10, s64 *, 0x18);
        var_v0_10 += 0x20;
        var_v1_9 += 0x20;
    } while (var_v0_10 != temp_a0_4);
    temp_a2_6 = arg0 + 0x5C10;
    var_v0_11 = temp_a1_5;
    var_v1_10 = temp_a2_6;
    do {
        M2C_FIELD(var_v1_10, s64 *, 0) = (s64) M2C_FIELD(var_v0_11, s64 *, 0);
        M2C_FIELD(var_v1_10, s64 *, 8) = (s64) M2C_FIELD(var_v0_11, s64 *, 8);
        M2C_FIELD(var_v1_10, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_11, s64 *, 0x10);
        M2C_FIELD(var_v1_10, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_11, s64 *, 0x18);
        var_v0_11 += 0x20;
        var_v1_10 += 0x20;
    } while (var_v0_11 != (arg0 + 0x5E90));
    temp_a0_5 = arg0 + 0x5AD0;
    var_v0_12 = temp_a2_6;
    var_v1_11 = temp_a0_5;
    do {
        M2C_FIELD(var_v1_11, s64 *, 0) = (s64) M2C_FIELD(var_v0_12, s64 *, 0);
        M2C_FIELD(var_v1_11, s64 *, 8) = (s64) M2C_FIELD(var_v0_12, s64 *, 8);
        M2C_FIELD(var_v1_11, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_12, s64 *, 0x10);
        M2C_FIELD(var_v1_11, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_12, s64 *, 0x18);
        var_v0_12 += 0x20;
        var_v1_11 += 0x20;
    } while (var_v0_12 != temp_a1_5);
    temp_a1_6 = arg0 + 0x5990;
    var_v0_13 = temp_a0_5;
    var_v1_12 = temp_a1_6;
    do {
        M2C_FIELD(var_v1_12, s64 *, 0) = (s64) M2C_FIELD(var_v0_13, s64 *, 0);
        M2C_FIELD(var_v1_12, s64 *, 8) = (s64) M2C_FIELD(var_v0_13, s64 *, 8);
        M2C_FIELD(var_v1_12, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_13, s64 *, 0x10);
        M2C_FIELD(var_v1_12, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_13, s64 *, 0x18);
        var_v0_13 += 0x20;
        var_v1_12 += 0x20;
    } while (var_v0_13 != temp_a2_6);
    temp_a2_7 = arg0 + 0x5850;
    var_v0_14 = temp_a1_6;
    var_v1_13 = temp_a2_7;
    do {
        M2C_FIELD(var_v1_13, s64 *, 0) = (s64) M2C_FIELD(var_v0_14, s64 *, 0);
        M2C_FIELD(var_v1_13, s64 *, 8) = (s64) M2C_FIELD(var_v0_14, s64 *, 8);
        M2C_FIELD(var_v1_13, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_14, s64 *, 0x10);
        M2C_FIELD(var_v1_13, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_14, s64 *, 0x18);
        var_v0_14 += 0x20;
        var_v1_13 += 0x20;
    } while (var_v0_14 != temp_a0_5);
    var_a0_2 = arg0 + 0x5710;
    var_v0_15 = temp_a2_7;
    do {
        M2C_FIELD(var_a0_2, s64 *, 0) = (s64) M2C_FIELD(var_v0_15, s64 *, 0);
        M2C_FIELD(var_a0_2, s64 *, 8) = (s64) M2C_FIELD(var_v0_15, s64 *, 8);
        M2C_FIELD(var_a0_2, s64 *, 0x10) = (s64) M2C_FIELD(var_v0_15, s64 *, 0x10);
        M2C_FIELD(var_a0_2, s64 *, 0x18) = (s64) M2C_FIELD(var_v0_15, s64 *, 0x18);
        var_v0_15 += 0x20;
        var_a0_2 += 0x20;
    } while (var_v0_15 != temp_a1_6);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0094BA80();                            /* extern */
s32 func_009614F0();                                /* extern */
extern char D_005927C8[];

void func_0098F220(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_4;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0_2;
    void *var_a0_3;
    void *var_a0_5;
    void *var_a1;

    temp_s0 = func_00229460();
    temp_v0 = func_009614F0();
    if ((temp_s0 != NULL) && (temp_v0 != 0)) {
        (*(s8 *)D_005927C8) = 0;
        func_0094BA80();
        var_a0 = 0;
        do {
            temp_v1 = temp_s0 + var_a0;
            M2C_FIELD(temp_v1, s8 *, 0xE2) = 0;
            var_a0 += 8;
            M2C_FIELD(temp_v1, s8 *, 0xE3) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE4) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE5) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE6) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE7) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE8) = 0;
            M2C_FIELD(temp_v1, s8 *, 0xE9) = 0;
        } while (var_a0 < 0x1280);
        var_v1 = 0;
        var_a0_2 = temp_s0;
        do {
            M2C_FIELD(var_a0_2, s8 *, 0x4AB6) = 0;
            var_v1 += 5;
            M2C_FIELD(var_a0_2, s8 *, 0x4AB7) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AC0) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AC2) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AC3) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4ACC) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4ACE) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4ACF) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AD8) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4ADA) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4ADB) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AE4) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AE6) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AE7) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x4AF0) = 0;
            var_a0_2 += 0x3C;
        } while (var_v1 < 0x14);
        var_v1_2 = 0;
        var_a0_3 = temp_s0;
        do {
            M2C_FIELD(var_a0_3, s32 *, 0x1368) = 0;
            var_v1_2 += 8;
            M2C_FIELD(var_a0_3, s32 *, 0x136C) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x1370) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x1374) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x1378) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x137C) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x1380) = 0;
            M2C_FIELD(var_a0_3, s32 *, 0x1384) = 0;
            var_a0_3 += 0x20;
        } while (var_v1_2 < 0xDA);
        temp_v1_2 = (var_v1_2 * 4) + temp_s0;
        var_a0_4 = 0;
        M2C_FIELD(temp_v1_2, s32 *, 0x1368) = 0;
        var_a1 = temp_s0;
        M2C_FIELD(temp_v1_2, s32 *, 0x136C) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x16F1) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x16F2) = 0xFF;
        M2C_FIELD(temp_s0, s8 *, 0x16F3) = 0xFF;
        do {
            M2C_FIELD(var_a1, s8 *, 0x4BAE) = 0;
            var_a0_4 += 8;
            M2C_FIELD(var_a1, s8 *, 0x4BAF) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BBA) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BBB) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BC6) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BC7) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BD2) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BD3) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BDE) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BDF) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BEA) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BEB) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BF6) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4BF7) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4C02) = 0;
            M2C_FIELD(var_a1, s8 *, 0x4C03) = 0;
            var_a1 += 0x60;
        } while (var_a0_4 < 0x69);
        var_a1_2 = 0;
        var_a0_5 = temp_s0;
        temp_v0_2 = (var_a0_4 * 0xC) + temp_s0;
        M2C_FIELD(temp_v0_2, s8 *, 0x4BAE) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x4BAF) = 0;
        do {
            M2C_FIELD(var_a0_5, s8 *, 0x461E) = 0xFF;
            var_a1_2 += 8;
            M2C_FIELD(var_a0_5, s8 *, 0x461F) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4620) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4621) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4622) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4623) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4624) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4625) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4626) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4627) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4628) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x4629) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x462A) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x462B) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x462C) = 0xFF;
            M2C_FIELD(var_a0_5, s8 *, 0x462D) = 0xFF;
            var_a0_5 += 0x10;
        } while (var_a1_2 < 0x244);
        temp_v0_3 = (var_a1_2 * 2) + temp_s0;
        M2C_FIELD(temp_v0_3, s8 *, 0x461E) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x461F) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4620) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4621) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4622) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4623) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4624) = 0xFF;
        M2C_FIELD(temp_v0_3, s8 *, 0x4625) = 0xFF;
        func_001C48E8(temp_s0 + 0x50F2, 0, 0x64);
        var_a1_3 = 0;
        do {
            temp_a0 = temp_s0 + var_a1_3;
            M2C_FIELD(temp_a0, s8 *, 0x16F4) = 0;
            var_a1_3 += 8;
            M2C_FIELD(temp_a0, s8 *, 0x3CD6) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2974) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16F5) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CD7) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2975) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16F6) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CD8) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2976) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16F7) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CD9) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2977) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16F8) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CDA) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2978) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16F9) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CDB) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x2979) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16FA) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CDC) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x297A) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x16FB) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x3CDD) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x297B) = 0;
        } while (var_a1_3 < 0x940);
    }
}

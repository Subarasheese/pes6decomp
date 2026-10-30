/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DC210(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7F10(void *);
extern void func_002DF6E0(void *, f32);
extern void func_002DB5E0(void *);
extern f32 func_001D79A0(void *, u16);
extern void * func_001D5A10(s32);
extern void func_002DC190(void *, s32, s32);
extern void func_001B9A50(void *, s32);
void *func_001B9BE0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001D7A20(void *, f32 *, u16);          /* extern */
M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
M2C_UNK func_002DB600(s32, f32 *);                  /* extern */
M2C_UNK func_002DF0A0(void *, f32 *);               /* extern */
void *func_002DFC30(M2C_UNK);                       /* extern */
M2C_UNK func_0081D770(s32, void *);                 /* extern */
M2C_UNK func_00824B80(M2C_UNK);                     /* extern */
M2C_UNK *func_0093EDB0(s32);                        /* extern */
M2C_UNK *func_0093EE90(s32);                        /* extern */
s32 func_0093F1F0(s32);                             /* extern */
s8 func_0093F650();                                 /* extern */
void *func_0099AF50(void *, M2C_UNK, M2C_UNK);      /* extern */
s32 func_0099B5D0(void *, M2C_UNK, M2C_UNK *);      /* extern */
s32 func_0099B690(void *, M2C_UNK, s32);            /* extern */
extern char D_009FF820[];
extern char D_00A02B60[];
extern M2C_UNK func_009BA6A0;

void func_009BA2B0(void *arg0) {
    f32 spA0;
    f32 spB0;
    f32 spB4;
    M2C_UNK *var_s0_2;
    M2C_UNK *var_v0;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_v0_4;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s8 temp_v0;
    u16 *var_s1;
    void *temp_s7;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s0;
    void *var_s0_3;
    void *var_s0_4;
    void *var_s2_2;
    void *var_s5;

    var_s5 = arg0;
    M2C_FIELD(var_s5, void **, 4) = func_001D5A10(0x103C2);
    func_00824B80(0);
    M2C_FIELD(var_s5, s8 *, 2) = func_0093F650();
    M2C_FIELD(var_s5, void **, 0x50) = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 2, 1);
    temp_s7 = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 0, 1);
    var_s2 = 0;
    var_s1 = ((void *)D_009FF820);
    var_s0 = var_s5;
    do {
        func_001D7A20(M2C_FIELD(var_s5, void **, 0x50), var_s0 + 0xC8, *var_s1);
        var_s2 += 1;
        var_s1 += 2;
        var_s0 += 0x10;
    } while (var_s2 < 9);
    if (M2C_FIELD(var_s5, s8 *, 2) > 0) {
        M2C_FIELD(var_s5, void **, 0x168) = func_002DFC30(6);
        func_001D7A20(temp_s7, var_s5 + 0x158, 1U);
        func_001D7A20(temp_s7, &spB0, 0U);
        spB0 = M2C_FIELD(var_s5, f32 *, 0x158);
        spB4 = M2C_FIELD(var_s5, f32 *, 0x15C);
        func_002DF0A0(M2C_FIELD(var_s5, void **, 0x168), &spB0);
        func_002DF6E0(M2C_FIELD(var_s5, void **, 0x168), func_001D79A0(temp_s7, 1U));
    }
    temp_v0 = M2C_FIELD(var_s5, s8 *, 2);
    if (temp_v0 >= 9) {
        var_s4 = 9;
    } else {
        var_s4 = temp_v0 + 1;
    }
    var_s1_2 = 0;
    if (var_s4 > 0) {
        var_s2_2 = var_s5;
        do {
            M2C_FIELD(var_s2_2, void **, 8) = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 3, 0);
            func_001D7D80(M2C_FIELD(var_s2_2, void **, 8), (s16) ((s64) ((s64) ((s32) (var_s1_2 + 1) % 2) << 0x30) >> 0x30));
            if (var_s1_2 == 0) {
                var_s3 = 0;
            } else {
                var_s3 = var_s1_2 - 1;
            }
            M2C_FIELD(var_s2_2, void **, 0x2C) = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 5, 0);
            if (func_0093EE90(var_s3) != NULL) {
                var_v0 = func_0093EE90(var_s3);
            } else {
                var_v0 = ((void *)D_00A02B60);
            }
            if (func_0093EDB0(var_s3) != NULL) {
                var_s0_2 = func_0093EDB0(var_s3);
            } else {
                var_s0_2 = ((void *)D_00A02B60);
            }
            M2C_FIELD(var_s2_2, s32 *, 0x54) = func_0099B5D0(M2C_FIELD(var_s2_2, void **, 8), 2, var_v0);
            M2C_FIELD(var_s2_2, s32 *, 0x78) = func_0099B5D0(M2C_FIELD(var_s2_2, void **, 8), 3, var_s0_2);
            M2C_FIELD(var_s2_2, s32 *, 0x9C) = func_0099B690(M2C_FIELD(var_s2_2, void **, 8), 1, func_0093F1F0(var_s3));
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < var_s4);
    }
    if ((var_s4 < 7) && (var_s4 < 8)) {
        var_s0_3 = var_s5 + (var_s4 * 4);
        do {
            M2C_FIELD(var_s0_3, void **, 8) = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 3, 0);
            func_001D7D80(M2C_FIELD(var_s0_3, void **, 8), (s16) ((s64) ((s64) ((s32) (var_s4 + 1) % 2) << 0x30) >> 0x30));
            var_s4 += 1;
            var_s0_3 += 4;
        } while (var_s4 < 8);
    }
    temp_f20 = M2C_FIELD(var_s5, f32 *, 0xDC);
    temp_f21 = temp_f20 - M2C_FIELD(var_s5, f32 *, 0xCC);
    temp_v0_2 = func_0099AF50(M2C_FIELD(var_s5, void **, 4), 1, 1);
    temp_v0_3 = func_001B9BE0(temp_v0_2, 1, 2, 3);
    M2C_FIELD(var_s5, void **, 0xC4) = temp_v0_3;
    func_001B9A50(temp_v0_3, 1);
    func_001D7A20(temp_v0_2, &spA0, 4U);
    temp_v0_4 = func_002DC210();
    M2C_FIELD(var_s5, s32 *, 0xC0) = temp_v0_4;
    func_002DB600(temp_v0_4, &spA0);
    func_001D79A0(temp_v0_2, 4U);
    func_002DB5E0((void *) M2C_FIELD(var_s5, s32 *, 0xC0));
    func_002DB580(M2C_FIELD(var_s5, s32 *, 0xC0), 1);
    func_002DC190((void *) M2C_FIELD(var_s5, s32 *, 0xC0), (s32) &func_009BA6A0, (s32) var_s5);
    func_001D7F10(temp_v0_2);
    var_s1_3 = 0;
    var_s0_4 = var_s5;
    do {
        func_0081D770(M2C_FIELD(var_s0_4, s32 *, 8), var_s5 + 0xC8);
        func_0081D770(M2C_FIELD(var_s0_4, s32 *, 0x2C), var_s5 + 0xC8);
        var_s1_3 += 1;
        var_s5 += 0x10;
        var_s0_4 += 4;
    } while (var_s1_3 < 9);
    func_001D7F10(temp_s7);
}

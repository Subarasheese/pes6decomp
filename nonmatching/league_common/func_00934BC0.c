/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00361A10(void);
extern u8 func_00225820(void);
extern u8 func_002280B0(void);
extern void * func_0022F150(void);
extern s32 func_002260F0(s32);
extern u8 func_002243B0(s32, s32);
M2C_UNK func_001FA5A0();                            /* extern */
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
s32 func_00210DF0();                                /* extern */
s8 func_00224420(u8, u8);                           /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00230410();                                /* extern */
s32 func_00230490();                                /* extern */
s8 func_0024EA00(s32, s32);                         /* extern */
s8 func_0024EAC0(s32, s32);                         /* extern */
M2C_UNK func_00270EE0();                            /* extern */
M2C_UNK func_00361EF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00930770();                            /* extern */
M2C_UNK func_009347D0();                            /* extern */
s8 func_00970190(u8, s32);                          /* extern */
s32 func_00977EC0(s32);                             /* extern */
s32 func_00AFDD10(u16, u8);                         /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BC0[];
extern char D_00591C09[];
extern char Pes6MatchSquads[];

void func_00934BC0(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    M2C_UNK var_fp;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s5;
    s32 var_s6;
    u16 temp_a0;
    u8 temp_s0;
    u8 temp_s3;
    void *temp_s0_3;
    void *var_s0;

    if (func_0022F150() != NULL) {
        func_001FAF40(0, (*(u16 *)D_00591BB0));
        func_001FAF40(1, (*(u16 *)D_00591BB2));
        func_00361A10();
        if ((*(u8 *)D_00591C09) != 4) {
            var_fp = 1;
            if ((*(u8 *)D_00591C09) != 1) {
                var_fp = 2;
            }
        } else {
            temp_s0 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
            if (temp_s0 == (func_00225820() & 0xFF)) {
                func_001FAF40(0, 0x126U);
            } else {
                func_001FAF40(1, 0x126U);
            }
            var_fp = 1;
        }
        var_s6 = 0;
        do {
            temp_s3 = M2C_FIELD((D_003E77B0 + ((s32) (var_s6 & 0xFF) % 2)), u8 *, 0x2C);
            if (func_002260F0((s32) temp_s3) != 0) {
                var_s5 = 0;
                var_s0 = ((void *)Pes6MatchSquads) + ((var_s6 & 0xFF) * 0x6900);
                do {
                    temp_s7 = func_00224BC0(temp_s3, var_s5 & 0xFF) & 0xFFFF;
                    M2C_FIELD(var_s0, s8 *, 0xD4) = func_00970190(temp_s3, func_002243B0((s32) temp_s3, var_s5 & 0xFF) & 0xFF);
                    var_s4 = 0;
                    M2C_FIELD(var_s0, s8 *, 0x40) = 0;
                    M2C_FIELD(var_s0, s8 *, 0x41) = 0;
loop_13:
                    if (var_s5 != var_s4) {
                        temp_s2 = func_00224BC0(temp_s3, var_s5 & 0xFF) & 0xFFFF;
                        if (temp_s2 == 0) {
                            M2C_FIELD((var_s0 + var_s4), s8 *, 0x48) = 0;
                        } else {
                            temp_s1 = func_00224BC0(temp_s3, var_s4 & 0xFF) & 0xFFFF;
                            if (temp_s1 == 0) {
                                M2C_FIELD((var_s0 + var_s4), s8 *, 0x48) = 0;
                            } else if (func_00230410() == 1) {
                                M2C_FIELD((var_s0 + var_s4), s8 *, 0x48) = func_0024EAC0(temp_s2, temp_s1);
                            } else {
                                M2C_FIELD((var_s0 + var_s4), s8 *, 0x48) = func_0024EA00(temp_s2, temp_s1);
                            }
                        }
                    }
                    var_s4 += 1;
                    if (var_s4 < 0x20) {
                        goto loop_13;
                    }
                    if (func_00230490() == 1) {
                        M2C_FIELD(var_s0, u8 *, 0xAB) = (u8) ((M2C_FIELD(var_s0, u8 *, 0xAB) & ~0x7F) | (func_00977EC0(temp_s7) & 0x7F));
                    }
                    var_s5 += 1;
                    M2C_FIELD(var_s0, f32 *, 0x68) = (f32) M2C_FIELD(var_s0, f32 *, 0x94);
                    M2C_FIELD(var_s0, f32 *, 0x6C) = (f32) M2C_FIELD(var_s0, f32 *, 0x98);
                    M2C_FIELD(var_s0, f32 *, 0x70) = (f32) M2C_FIELD(var_s0, f32 *, 0x9C);
                    M2C_FIELD(var_s0, f32 *, 0x74) = (f32) M2C_FIELD(var_s0, f32 *, 0xA0);
                    M2C_FIELD(var_s0, f32 *, 0x78) = (f32) M2C_FIELD(var_s0, f32 *, 0xA4);
                    M2C_FIELD(var_s0, f32 *, 0x7C) = (f32) M2C_FIELD(var_s0, f32 *, 0xA8);
                    M2C_FIELD(var_s0, f32 *, 0x80) = (f32) M2C_FIELD(var_s0, f32 *, 0xAC);
                    M2C_FIELD(var_s0, f32 *, 0x84) = (f32) M2C_FIELD(var_s0, f32 *, 0xB0);
                    M2C_FIELD(var_s0, f32 *, 0x88) = (f32) M2C_FIELD(var_s0, f32 *, 0xB4);
                    M2C_FIELD(var_s0, f32 *, 0x8C) = (f32) M2C_FIELD(var_s0, f32 *, 0xB8);
                    M2C_FIELD(var_s0, f32 *, 0x90) = (f32) M2C_FIELD(var_s0, f32 *, 0xBC);
                    var_s0 += 0x348;
                } while (var_s5 < 0x20);
            }
            var_s6 = (var_s6 + 1) & 0xFF;
        } while (var_s6 < 2);
        func_001FA5A0();
        var_s4_2 = 0;
        var_s2 = ((void *)Pes6MatchSquads);
        do {
            var_s3 = 0;
            var_s1 = var_s2;
            temp_s0_2 = var_s4_2 % 2;
loop_31:
            M2C_FIELD(var_s1, s8 *, 0x15) = func_00224420(M2C_FIELD((temp_s0_2 + D_003E77B0), u8 *, 0x2C), func_002243B0((s32) M2C_FIELD((temp_s0_2 + D_003E77B0), u8 *, 0x2C), var_s3 & 0xFF));
            var_s3 += 1;
            var_s1 += 0x348;
            if (var_s3 < 0x20) {
                goto loop_31;
            }
            var_s4_2 += 1;
            var_s2 += 0x6900;
        } while (var_s4_2 < 2);
        (*(u8 *)D_00591BC0) = func_002280B0();
        func_00270EE0();
        func_009347D0();
        func_00930770();
        if (func_00210DF0() == 2) {
            var_s4_3 = 0;
            do {
                temp_a1 = var_s4_3 & 0xFF;
                var_s3_2 = 0;
                var_s1_2 = temp_a1 & 1;
                if ((temp_a1 < 0) && (var_s1_2 != 0)) {
                    var_s1_2 -= 2;
                }
loop_39:
                temp_s0_3 = ((void *)Pes6MatchSquads) + (temp_a1 * 0x6900) + ((var_s3_2 & 0xFF) * 0x348);
                temp_a0 = M2C_FIELD(temp_s0_3, u16 *, 0x46);
                if ((temp_a0 != 0) && (func_00AFDD10(temp_a0, M2C_FIELD((var_s1_2 + D_003E77B0), u8 *, 0x2C)) == 1)) {
                    M2C_FIELD(temp_s0_3, s8 *, 0xC9) = 1;
                }
                var_s3_2 = (var_s3_2 + 1) & 0xFF;
                if (var_s3_2 < 0x20) {
                    goto loop_39;
                }
                var_s4_3 = (var_s4_3 + 1) & 0xFF;
            } while (var_s4_3 < 2);
        }
        var_s0_2 = 0;
        do {
            temp_s1_2 = var_s0_2 & 0xFF;
            temp_v0 = func_002260F0((s32) M2C_FIELD((D_003E77B0 + (temp_s1_2 % 2)), u8 *, 0x2C));
            if (temp_v0 != 0) {
                func_00361EF0(temp_s1_2, temp_v0 + 0x4C, var_fp);
            }
            var_s0_2 = (var_s0_2 + 1) & 0xFF;
        } while (var_s0_2 < 2);
    }
}

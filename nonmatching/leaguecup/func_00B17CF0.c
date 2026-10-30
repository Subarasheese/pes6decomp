/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern u32 func_00B177C0(void);
extern void func_001ED880(void *, f32);
extern void func_001EF860(void *, void *);
extern void * func_001EDD00(void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern void func_001EF900(void *, s8);
extern void func_001EEE60(void *, void *);
extern void func_001D7CE0(void *, void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
void *func_001EE0D0();                              /* extern */
M2C_UNK func_009728F0(void *, void *, void *, u16); /* extern */
extern u16 D_003E7C54;
extern u16 D_003E7C58;
extern char D_00B32C10[];
extern char D_00B32C14[];
extern char D_00B32C18[];
extern char D_00B32C1C[];

void func_00B17CF0(void) {
    s32 spA0;
    u32 spBC;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    f32 spD4;
    s32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    f32 spE8;
    s32 spEC;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s7;
    u32 temp_v0;
    u32 var_fp;
    u32 var_s2;
    u32 var_s5;
    u32 var_s6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s4_2;
    void *var_s0;
    void *var_s1_2;
    void *var_s2_2;

    temp_v0 = func_00B177C0();
    spBC = temp_v0;
    if (temp_v0 != 0) {
        spE0 = 0;
        var_s4 = 0;
        spE4 = 0;
        var_s2 = temp_v0;
        spEC = 0;
        var_s1 = 0;
        spC8 = 0;
        spCC = 0;
        spD8 = 0;
        spDC = 0;
        do {
            temp_a0 = M2C_FIELD(var_s2, s32 *, 0x4D4);
            temp_s0 = var_s2 + 0x3D8;
            if (temp_a0 != 0) {
                func_001EDD90(temp_a0);
                M2C_FIELD(temp_s0, s32 *, 0xFC) = 0;
            }
            temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x100);
            if (temp_a0_2 != 0) {
                func_001EDD90(temp_a0_2);
                M2C_FIELD(temp_s0, s32 *, 0x100) = 0;
            }
            var_s3 = 0;
            var_s0 = spBC + var_s1;
loop_7:
            func_001D7D60(M2C_FIELD(var_s0, void **, 0x27C), 0);
            var_s3 += 1;
            var_s0 += 0x28;
            if (var_s3 < 7) {
                goto loop_7;
            }
            var_s4 += 1;
            var_s2 += 0x104;
            var_s1 += 4;
        } while (var_s4 < 0xA);
        var_fp = spBC;
        var_s7 = 0;
        spA0 = 0;
        do {
            temp_s0_2 = var_fp + 0x3D8;
            if (M2C_FIELD(var_fp, u8 *, 0x3D8) != 0) {
                if (M2C_FIELD(temp_s0_2, void **, 0xFC) == NULL) {
                    M2C_FIELD(temp_s0_2, void **, 0xFC) = func_001EE0D0();
                }
                if (M2C_FIELD(temp_s0_2, void **, 0x100) == NULL) {
                    M2C_FIELD(temp_s0_2, void **, 0x100) = func_001EE0D0();
                }
                func_001EDA30(M2C_FIELD(temp_s0_2, void **, 0xFC), 0);
                func_001ED880(M2C_FIELD(temp_s0_2, void **, 0xFC), M2C_FIELD(spBC, f32 *, 0x394));
                func_001EDA30(M2C_FIELD(temp_s0_2, void **, 0x100), 0);
                func_001ED880(M2C_FIELD(temp_s0_2, void **, 0x100), M2C_FIELD(spBC, f32 *, 0x394));
                var_s6 = 0;
                var_a0 = 0;
loop_16:
                if (M2C_FIELD((temp_s0_2 + var_a0), u8 *, 0xE0) != 0) {
                    var_a0 += 1;
                    var_s6 += 1;
                    if (var_a0 < 9) {
                        goto loop_16;
                    }
                }
                var_s5 = 0;
                if (var_s6 != 0) {
                    var_s2_2 = temp_s0_2;
                    var_s1_2 = spBC + spA0;
                    do {
                        temp_s4 = func_001EDD00(M2C_FIELD(temp_s0_2, void **, 0xFC));
                        temp_s3 = func_001EDD00(M2C_FIELD(temp_s0_2, void **, 0x100));
                        func_001EF900(temp_s4, 1);
                        func_001EF900(temp_s3, 1);
                        if (M2C_FIELD(temp_s0_2, u8 *, 2) != 0) {
                            func_001EEE60(temp_s4, ((void *)D_00B32C10));
                            func_001EEE60(temp_s3, ((void *)D_00B32C14));
                            spE8 = 0.0f;
                        } else {
                            func_001EEE60(temp_s4, ((void *)D_00B32C18));
                            func_001EEE60(temp_s3, ((void *)D_00B32C1C));
                            spE8 = 0.0f;
                        }
                        func_001EF860(temp_s4, &spE0);
                        spE8 -= 1.0f;
                        func_001EF860(temp_s3, &spE0);
                        temp_s4_2 = temp_s0_2 + ((var_s5 + 1) * 8) + 0x6C;
                        func_009728F0(temp_s4, var_s2_2 + 0x6C, temp_s4_2, D_003E7C54);
                        func_009728F0(temp_s3, var_s2_2 + 0x6C, temp_s4_2, D_003E7C58);
                        func_001D7D60(M2C_FIELD(var_s1_2, void **, 0x27C), 1);
                        func_001D7D60(M2C_FIELD(var_s1_2, void **, 0x2A4), 1);
                        spC0 = M2C_FIELD(var_s2_2, f32 *, 0x6C);
                        spC4 = M2C_FIELD(var_s2_2, f32 *, 0x70);
                        func_001D7CE0(M2C_FIELD(var_s1_2, void **, 0x27C), &spC0);
                        spD0 = M2C_FIELD(var_s2_2, f32 *, 0x74);
                        spD4 = M2C_FIELD(var_s2_2, f32 *, 0x78);
                        func_001D7CE0(M2C_FIELD(var_s1_2, void **, 0x2A4), &spD0);
                        if (M2C_FIELD(temp_s0_2, u8 *, 2) != 0) {
                            func_001D7D80(M2C_FIELD(var_s1_2, void **, 0x27C), 0);
                            func_001D7D80(M2C_FIELD(var_s1_2, void **, 0x2A4), 0);
                        } else {
                            func_001D7D80(M2C_FIELD(var_s1_2, void **, 0x27C), 1);
                            func_001D7D80(M2C_FIELD(var_s1_2, void **, 0x2A4), 1);
                        }
                        var_s5 += 1;
                        var_s2_2 += 8;
                        var_s1_2 += 0x28;
                    } while (var_s5 < var_s6);
                }
            }
            var_s7 += 1;
            spA0 += 4;
            var_fp += 0x104;
        } while (var_s7 < 0xA);
    }
}

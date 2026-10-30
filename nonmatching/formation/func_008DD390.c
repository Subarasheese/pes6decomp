/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern void func_001D7F10(void *);
extern s32 func_001F2410(void *);
extern void func_001EEE60(void *, void *);
extern void func_001F3CA0(void *);
M2C_UNK func_001D7A20(void *, s32 *, M2C_UNK);      /* extern */
s32 func_008B9C80(M2C_UNK, s32 *, f32);             /* extern */
void *func_008B9F20(void *, M2C_UNK, s32 *);        /* extern */
void *func_008B9F90(s32, s32 *, f32);               /* extern */
s32 func_008BA000(s32 *, f32);                      /* extern */
M2C_UNK func_008BB690(s32, void *, void *, s32);    /* extern */
void *func_008C1490(M2C_UNK, s32 *);                /* extern */
M2C_UNK func_008C5230(s32 *, M2C_UNK, s8);          /* extern */
M2C_UNK func_008DA080(void *, void *, s8, s32 *, void *, M2C_UNK, M2C_UNK **); /* extern */
M2C_UNK func_008DD2C0();                            /* extern */
extern char D_008EC380[];
extern char D_008EDBA0[];
extern char D_008EDBBA[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
void func_008DD390(void *arg0, s8 arg1, s32 arg2) {
    M2C_UNK *spB0;
    s32 spC0;
    s32 spD4;
    s32 spD8;
    void *spDC;
    s32 spE0;
    s32 spE4;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    M2C_UNK *sp100;
    s32 sp104;
    s32 sp108;
    s32 sp10C;
    M2C_UNK *sp110;
    M2C_UNK *sp114;
    s32 sp118;
    s32 sp11C;
    M2C_UNK *var_s4;
    M2C_UNK *var_v0_3;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s8 var_v1;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_a0;
    void *temp_fp;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_s2_2;
    void *var_s3;
    void *var_s7;

    spD8 = arg2;
    spDC = arg0;
    if (arg0 != NULL) {
        spF0 = 0;
        spF4 = 0;
        spF8 = 0;
        spFC = 0;
        func_008DD2C0();
        M2C_FIELD(spDC, s8 *, 4) = arg1;
        M2C_FIELD(spDC, u8 *, 3) = (u8) spD8;
        temp_s0 = spD8 & 1;
        M2C_FIELD(spDC, s8 *, 0) = 1;
        if (temp_s0 != 0) {
            if (!(spD8 & 2)) {
                M2C_FIELD(spDC, u8 *, 0x19) = 0xDU;
                M2C_FIELD(spDC, s8 *, 0x1A) = 8;
                M2C_FIELD(spDC, s8 *, 0x1B) = 9;
                var_v1 = 4;
                M2C_FIELD(spDC, s8 *, 0x1C) = 0xA;
            } else {
                M2C_FIELD(spDC, u8 *, 0x19) = 0xDU;
                M2C_FIELD(spDC, s8 *, 0x1A) = 8;
                M2C_FIELD(spDC, s8 *, 0x1B) = 9;
                M2C_FIELD(spDC, s8 *, 0x1C) = 0xA;
                var_v1 = 5;
                M2C_FIELD(spDC, s8 *, 0x1D) = 0xB;
            }
            goto block_16;
        }
        if (!(spD8 & 0x10)) {
            if (!(spD8 & 2)) {
                M2C_FIELD(spDC, u8 *, 0x19) = 0U;
                M2C_FIELD(spDC, s8 *, 0x1A) = 1;
                M2C_FIELD(spDC, s8 *, 0x1B) = 2;
                M2C_FIELD(spDC, s8 *, 0x1C) = 3;
                M2C_FIELD(spDC, s8 *, 0x1D) = 4;
                M2C_FIELD(spDC, s8 *, 0x1E) = 5;
                var_v1 = 7;
                M2C_FIELD(spDC, s8 *, 0x1F) = 6;
            } else {
                M2C_FIELD(spDC, u8 *, 0x19) = 0U;
                M2C_FIELD(spDC, s8 *, 0x1A) = 1;
                M2C_FIELD(spDC, s8 *, 0x1B) = 2;
                M2C_FIELD(spDC, s8 *, 0x1C) = 3;
                M2C_FIELD(spDC, s8 *, 0x1D) = 4;
                M2C_FIELD(spDC, s8 *, 0x1E) = 5;
                M2C_FIELD(spDC, s8 *, 0x1F) = 6;
                var_v1 = 8;
                M2C_FIELD(spDC, s8 *, 0x20) = 0xB;
            }
block_16:
            M2C_FIELD(spDC, s8 *, 2) = var_v1;
        } else {
            M2C_FIELD(spDC, u8 *, 0x19) = 7U;
            M2C_FIELD(spDC, s8 *, 2) = 1;
        }
        func_008C5230(&spE0, 0, arg1);
        spE0 = 0;
        spE4 = 0;
        temp_v0 = func_008C1490(7, &spE0);
        temp_f20 = func_001D79A0(temp_v0, 0x43U);
        func_001D7F10(temp_v0);
        temp_v0_2 = func_008BA000(&spF0, temp_f20);
        spD4 = temp_v0_2;
        M2C_FIELD(spDC, s32 *, 0xE8) = temp_v0_2;
        temp_v0_3 = func_008B9F90(spD4, &spF0, temp_f20);
        M2C_FIELD(spDC, void **, 0xEC) = temp_v0_3;
        if (temp_s0 != 0) {
            temp_s2 = M2C_FIELD(spDC, u8 *, 3);
            temp_s0_2 = M2C_FIELD(spDC, u8 *, 0x19);
            func_001F3CA0(temp_v0_3);
            if (temp_s0_2 == 0xD) {
                sp118 = 0;
                if (temp_s2 & 4) {
                    var_v0 = 2;
                } else {
                    var_v0 = 1;
                }
            } else {
                var_v0 = 5;
                sp118 = 4;
            }
            sp11C = var_v0;
            if (temp_s0_2 != 0xD) {
                sp114 = NULL;
                sp110 = ((void *)D_008EDBA0) + (temp_s0_2 * 0x1A);
            } else {
                sp110 = ((void *)D_008EDBA0);
                sp114 = ((void *)D_008EDBBA);
            }
            func_008DA080(spDC, temp_v0_3, 0, &sp118, spDC + 0x160, 0x19, &sp110);
        } else {
            temp_s3 = M2C_FIELD(spDC, u8 *, 3);
            temp_s0_3 = M2C_FIELD(spDC, u8 *, 0x19);
            func_001F3CA0(temp_v0_3);
            switch (temp_s0_3) {                    /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                if (!(temp_s3 & 4)) {
                    sp108 = 1;
                } else {
                    var_v0_2 = 2;
block_42:
                    sp108 = var_v0_2;
                }
                break;
            case 0:                                 /* switch 1 */
                sp108 = 0;
                break;
            default:                                /* switch 1 */
                var_v0_2 = 3;
                goto block_42;
            }
            sp10C = 5;
            sp104 = 0;
            switch (temp_s0_3) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                var_v0_3 = ((void *)D_008EDBA0);
                break;
            case 1:                                 /* switch 2 */
                var_v0_3 = ((void *)D_008EDBBA);
                break;
            default:                                /* switch 2 */
                var_v0_3 = ((void *)D_008EDBA0) + (temp_s0_3 * 0x1A);
                break;
            }
            sp100 = var_v0_3;
            func_008DA080(spDC, temp_v0_3, arg1, &sp108, spDC + 0x160, 0x19, &sp100);
        }
        temp_v0_4 = func_008B9F90(spD4, NULL, temp_f20);
        M2C_FIELD(spDC, void **, 0xF0) = temp_v0_4;
        M2C_FIELD(spDC, s8 *, 0xE4) = 1;
        temp_fp = func_008B9F20(temp_v0_4, 0, &spF0);
        var_s7 = spDC;
        spC0 = 0;
        spB0 = ((void *)D_008EC380);
        do {
            var_s4 = spB0;
            var_s0 = 0;
            var_s3 = var_s7;
            var_s6 = 2;
loop_52:
            var_s2 = 0;
            var_s1 = var_s3;
loop_53:
            temp_v0_6 = func_001F2410(temp_fp);
            func_001EEE60(temp_v0_6, var_s4);
            var_s2 += 1;
            M2C_FIELD(var_s1, void **, 0xF8) = temp_v0_6;
            var_s1 += 4;
            if (var_s2 < 6) {
                goto loop_53;
            }
            var_s5 = 0;
            var_s2_2 = var_s7 + 0x24;
            var_s1_2 = var_s3;
loop_55:
            func_008BB690(M2C_FIELD(var_s1_2, s32 *, 0xF8), var_s2_2, (((s32) (var_s5 + 1) % 6) * 8) + var_s7 + 0x24, var_s6 & 0xFFFF);
            var_s5 += 1;
            var_s2_2 += 8;
            var_s1_2 += 4;
            if (var_s5 < 6) {
                goto loop_55;
            }
            var_s0 += 1;
            var_s4 += 4;
            var_s3 += 0x18;
            var_s6 += 4;
            if (var_s0 < 2) {
                goto loop_52;
            }
            spB0 += 8;
            temp_v0_5 = spC0 + 1;
            spC0 = temp_v0_5;
            var_s7 += 0x30;
        } while (temp_v0_5 < 2);
        var_s1_3 = spDC;
        var_s0_2 = 0;
        spF0 = 0;
        spF4 = 0;
        spF8 = 0;
        spFC = 0;
        do {
            var_s0_2 += 1;
            M2C_FIELD(var_s1_3, void **, 0x158) = func_008B9F90(spD4, &spF0, temp_f20);
            var_s1_3 += 4;
        } while (var_s0_2 < 2);
        if (!(spD8 & 0x10)) {
            temp_a0 = M2C_FIELD(spDC, void **, 0x1E4);
            if (temp_a0 != NULL) {
                func_001D7A20(temp_a0, &spF0, 0x10B);
                temp_f0 = func_001D79A0(M2C_FIELD(spDC, void **, 0x1E4), 0x10BU);
                if (!(M2C_FIELD(spDC, u8 *, 3) & 8)) {
                    var_v0_4 = func_008B9C80(1, &spF0, temp_f0);
                } else {
                    var_v0_4 = func_008B9C80(5, &spF0, temp_f0);
                }
                M2C_FIELD(spDC, s32 *, 0x1C4) = var_v0_4;
            }
        } else {
            M2C_FIELD(spDC, s32 *, 0x1C4) = 0;
        }
    }
}

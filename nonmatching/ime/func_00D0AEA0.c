/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9A50(void *, s32);
extern void func_001B9A00(void *, s32);
M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
s32 func_00D08560(s32);                             /* extern */
M2C_UNK func_00D08DA0(void *, s8);                  /* extern */
M2C_UNK func_00D08E10(void *, s8);                  /* extern */
M2C_UNK func_00D08E30(void *, M2C_UNK);             /* extern */
M2C_UNK func_00D08E50(void *, M2C_UNK);             /* extern */
M2C_UNK func_00D09AF0(void *, s8);                  /* extern */
M2C_UNK func_00D09B40(void *, s32);                 /* extern */
M2C_UNK func_00D09C10(void *, s32);                 /* extern */
M2C_UNK func_00D0A490();                            /* extern */
M2C_UNK func_00D0B310(void *, s32);                 /* extern */
M2C_UNK func_00D0B570(void *, s32);                 /* extern */
M2C_UNK func_00D10E10(void *, f32 *);               /* extern */
M2C_UNK func_00D10E50(void *, u8);                  /* extern */
M2C_UNK func_00D10E80(void *, s8);                  /* extern */
M2C_UNK func_00D10EE0(void *);                      /* extern */
M2C_UNK func_00D10F90(void *, s32);                 /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_00D0AEA0(void *arg0, void *arg1) {
    f32 sp78;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    void *temp_s4;
    void *temp_v1_2;

    var_s1 = 0;
    if ((arg0 == NULL) || (arg1 == NULL)) {
        return 1;
    }
    func_00D0A490();
    temp_v0 = func_00D08560(arg0 + 0x808);
    var_a1 = 5;
    if (arg0 == NULL) {

    } else if (temp_v0 < 0) {
        var_a1 = 5;
    } else if (temp_v0 < 0xA) {
        var_a0 = 0;
        do {
            if (temp_v0 == M2C_FIELD((arg0 + (var_a0 * 4)), s32 *, 0x7F4)) {
                var_a1 = var_a0;
            }
            var_a0 += 1;
        } while (var_a0 < 5);
    } else {
        var_a1 = 5;
    }
    if ((var_a1 >= 0) && (var_a1 < 5)) {
        var_s1 = M2C_FIELD(((var_a1 * 4) + arg0), s32 *, 0x7E0);
    }
    if (M2C_FIELD(arg0, s8 *, 0xD7B) == 1) {
        if ((arg0 != NULL) && (var_s1 != 0)) {
            var_s0 = 0;
            do {
                func_00D10EE0(arg0 + (var_s0 << 6));
                var_s0 += 1;
            } while (var_s0 < 0x19);
        }
        M2C_FIELD(arg0, s8 *, 0xD7B) = 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x714) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x714) = 0.0f;
    }
    if (M2C_FIELD(arg0, f32 *, 0x714) >= 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x714) = 0.0f;
    }
    func_00D0B310(arg0, var_s1);
    if ((M2C_FIELD(arg0, s8 *, 0xD78) != M2C_FIELD(arg0, s8 *, 0xD79)) || (M2C_FIELD(arg0, s32 *, 0xD70) != M2C_FIELD(arg0, s32 *, 0xD74)) || (M2C_FIELD(arg0, s8 *, 0xD7A) == 1)) {
        var_s0_2 = 0;
        do {
            temp_s4 = arg0 + (var_s0_2 << 6);
            func_00D10E50(temp_s4, M2C_FIELD(arg0, u8 *, 0xD7C));
            func_00D10E80(temp_s4, M2C_FIELD(arg0, s8 *, 0xD78));
            var_s0_2 += 1;
        } while (var_s0_2 < 0x19);
        func_002DB580(M2C_FIELD(arg0, s32 *, 0xD40), 0);
        func_00D08DA0(arg0 + 0x808, (s8) M2C_FIELD(arg0, u8 *, 0xD7C));
        func_00D08E10(arg0 + 0x808, M2C_FIELD(arg0, s8 *, 0xD78));
        func_00D09AF0(arg0 + 0x71C, M2C_FIELD(arg0, s8 *, 0xD78));
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xD70);
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_00D08E50(arg0 + 0x808, 1);
        func_00D08E30(arg0 + 0x808, 1);
        break;
    case 1:
        func_00D08E50(arg0 + 0x808, 1);
        func_00D08E30(arg0 + 0x808, 0);
        break;
    default:
        func_00D08E50(arg0 + 0x808, 0);
        func_00D08E30(arg0 + 0x808, 0);
        break;
    }
    if (M2C_FIELD(arg0, s8 *, 0xD7D) == 1) {
        func_00D08E50(arg0 + 0x808, 0);
    }
    func_00D0B570(arg0, var_s1);
    func_00D09B40(arg0 + 0x71C, var_s1);
    var_f2 = M2C_FIELD(arg0, f32 *, 0x714);
    var_f0 = 0.0f;
    if (!(var_f2 < 0.0f)) {
        var_f0 = 1.0f;
        if (var_f2 >= 1.0f) {
            goto block_50;
        }
    } else {
block_50:
        var_f2 = var_f0;
    }
    var_s0_3 = 0;
    temp_f20 = (f32) M2C_FIELD(arg0, s32 *, 0x718) * (var_f2 - 1.0f);
    do {
        temp_v1_2 = arg0 + (var_s0_3 * 8);
        temp_f2 = M2C_FIELD(temp_v1_2, f32 *, 0x640) - 0.0f;
        sp78 = temp_f2;
        temp_f1 = M2C_FIELD(temp_v1_2, f32 *, 0x644) - temp_f20;
        sp7C = temp_f1;
        sp78 = temp_f2 + M2C_FIELD(arg1, f32 *, 0);
        sp7C = temp_f1 + M2C_FIELD(arg1, f32 *, 4);
        func_00D10E10(arg0 + (var_s0_3 << 6), &sp78);
        var_s0_3 += 1;
    } while (var_s0_3 < 0x19);
    if ((M2C_FIELD(arg0, s8 *, 0xD78) != M2C_FIELD(arg0, s8 *, 0xD79)) || (M2C_FIELD(arg0, s32 *, 0xD70) != M2C_FIELD(arg0, s32 *, 0xD74)) || (M2C_FIELD(arg0, s8 *, 0xD7A) == 1)) {
        func_001B9A00(M2C_FIELD(arg0, void **, 0xD4C), (s32) (s8) M2C_FIELD(arg0, u8 *, 0xD7C));
        func_001B9A50(M2C_FIELD(arg0, void **, 0xD4C), (s32) (u8) M2C_FIELD(arg0, s8 *, 0xD78));
        M2C_FIELD(arg0, s32 *, 0xD74) = (s32) M2C_FIELD(arg0, s32 *, 0xD70);
        M2C_FIELD(arg0, s8 *, 0xD79) = (s8) M2C_FIELD(arg0, s8 *, 0xD78);
        M2C_FIELD(arg0, s8 *, 0xD7A) = 0;
    }
    var_s0_4 = 0;
    do {
        func_00D10F90(arg0 + (var_s0_4 << 6), var_s1);
        var_s0_4 += 1;
    } while (var_s0_4 < 0x19);
    func_00D09C10(arg0 + 0x71C, var_s1);
    return 0;
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern s32 func_001D6E70(s32, s32, s32);
extern void func_001D7CE0(void *, void *);
extern void func_001D7840(void *, s8);
extern void func_001D7D60(void *, s8);
extern void func_001D7BE0(void *, void *);
extern int func_001CDAA0(void);
extern void func_001D7D80(void *, s16);
s64 func_0081AF20(void *);                          /* extern */
M2C_UNK func_0081D7E0(void *, s8);                  /* extern */
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0081DB70(s32, u8);                     /* extern */
M2C_UNK func_0081DD00(s32, void *);                 /* extern */
M2C_UNK func_0081DD70(s32, s32, void *);            /* extern */
M2C_UNK func_0081DDE0(s32, f32 *);                  /* extern */
M2C_UNK func_0081DF10(s32, s8);                     /* extern */
s32 func_0081E060(void *, M2C_UNK);                 /* extern */
extern f32 D_003E77D4;

s32 func_0081AFB0(void *arg0, s32 arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp4C;
    f32 *var_v1;
    s32 temp_a0_3;
    s32 temp_v0_2;
    s32 var_v0;
    s64 temp_v0_3;
    s8 var_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_v0;

    var_v0 = 0x10;
    var_v1 = &sp30;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001CDAA0();
    if (arg0 != NULL) {
        sp4C = D_003E77D4;
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            if (M2C_FIELD(arg0, s8 *, 0x25) != 0) {
                if (M2C_FIELD(arg0, s8 *, 0x26) != 1) {
                    temp_a0 = M2C_FIELD(arg0, void **, 8);
                    if (temp_a0 != NULL) {
                        func_001D7F10(temp_a0);
                        M2C_FIELD(arg0, void **, 8) = NULL;
                        M2C_FIELD(arg0, s32 *, 0x10) = 0;
                        M2C_FIELD(arg0, s32 *, 0x14) = 0;
                    }
                    temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
                    if (temp_a0_2 != NULL) {
                        func_001D7F10(temp_a0_2);
                        M2C_FIELD(arg0, void **, 0xC) = NULL;
                    }
                } else {
                    if (M2C_FIELD(arg0, void **, 8) == NULL) {
                        temp_v0 = func_0081D850(M2C_FIELD(arg0, s32 *, 4), 0, 0, 0, 1);
                        M2C_FIELD(arg0, void **, 8) = temp_v0;
                        if (temp_v0 != NULL) {
                            M2C_FIELD(arg0, s32 *, 0x10) = func_001D6E70((s32) temp_v0, 0, (s32) (arg0 + 0x40));
                            temp_v0_2 = func_0081E060(M2C_FIELD(arg0, void **, 8), 1);
                            M2C_FIELD(arg0, s32 *, 0x14) = temp_v0_2;
                            func_0081DDE0(temp_v0_2, &sp4C);
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x10) = 0;
                            M2C_FIELD(arg0, s32 *, 0x14) = 0;
                        }
                    }
                    if (M2C_FIELD(arg0, void **, 0xC) == NULL) {
                        M2C_FIELD(arg0, void **, 0xC) = func_0081D850(M2C_FIELD(arg0, s32 *, 4), 2, 0, 0, 0);
                    }
                    func_0081D7E0(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, s8 *, 0x26));
                    func_0081D7E0(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg0, s8 *, 0x26));
                }
                M2C_FIELD(arg0, s8 *, 0x27) = (s8) M2C_FIELD(arg0, s8 *, 0x26);
            }
            if ((M2C_FIELD(arg0, void **, 8) != NULL) && (M2C_FIELD(arg0, void **, 0xC) != NULL)) {
                temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x10);
                if ((temp_a0_3 != 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
                    if (M2C_FIELD(arg0, s8 *, 0x25) == 1) {
                        func_0081DD00(temp_a0_3, arg0 + 0x40);
                        func_001D7BE0(M2C_FIELD(arg0, void **, 8), &sp30);
                        sp30 = M2C_FIELD(arg0, f32 *, 0x18);
                        sp34 = M2C_FIELD(arg0, f32 *, 0x1C);
                        func_001D7CE0(M2C_FIELD(arg0, void **, 8), &sp30);
                        func_001D7BE0(M2C_FIELD(arg0, void **, 0xC), &sp30);
                        sp30 = M2C_FIELD(arg0, f32 *, 0x18);
                        sp34 = M2C_FIELD(arg0, f32 *, 0x1C);
                        func_001D7CE0(M2C_FIELD(arg0, void **, 0xC), &sp30);
                        func_001D7840(M2C_FIELD(arg0, void **, 8), (s8) M2C_FIELD(arg0, u8 *, 0x24));
                        func_001D7840(M2C_FIELD(arg0, void **, 0xC), (s8) M2C_FIELD(arg0, u8 *, 0x24));
                        func_0081DB70(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, u8 *, 0x24));
                        func_0081DB70(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, u8 *, 0x24));
                        func_0081DD70(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x2C), arg0 + 0x30);
                        if (M2C_FIELD(arg0, s8 *, 0x2A) != 1) {
                            func_0081DDE0(M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0x38);
                        } else {
                            func_0081DDE0(M2C_FIELD(arg0, s32 *, 0x10), arg0 + 0x3C);
                        }
                        if (M2C_FIELD(arg0, s8 *, 0x29) != 1) {
                            func_001D7D60(M2C_FIELD(arg0, void **, 0xC), 0);
                        } else {
                            func_001D7D60(M2C_FIELD(arg0, void **, 0xC), 1);
                        }
                        temp_v0_3 = func_0081AF20(arg0);
                        if (arg0 != NULL) {
                            temp_a0_4 = M2C_FIELD(arg0, void **, 8);
                            if (temp_a0_4 != NULL) {
                                if (temp_v0_3 >= 0) {
                                    if (temp_v0_3 < 6) {
                                        func_001D7D80(temp_a0_4, (s16) ((s64) (temp_v0_3 << 0x30) >> 0x30));
                                    } else {
                                        func_001D7D80(temp_a0_4, 5);
                                    }
                                } else {
                                    func_001D7D80(temp_a0_4, 0);
                                }
                            }
                        }
                        M2C_FIELD(arg0, s8 *, 0x25) = 0;
                    }
                    if (arg0 != NULL) {
                        var_v0_2 = M2C_FIELD(arg0, s8 *, 0x2A);
                    } else {
                        var_v0_2 = 0;
                    }
                    if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) != 1) {
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s8 *, 0x26));
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x14), 0);
                    } else if (arg1 != 1) {
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s8 *, 0x26));
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x14), 0);
                    } else {
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), 0);
                        func_0081DF10(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s8 *, 0x26));
                    }
                }
            }
            if (M2C_FIELD(arg0, s8 *, 0x25) == 1) {
                M2C_FIELD(arg0, s8 *, 0x25) = 0;
            }
        }
        return 1;
    }
    return 0;
}

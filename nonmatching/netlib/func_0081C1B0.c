/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7BE0(void *, void *);
extern void func_001D7F10(void *);
extern void func_001D7CE0(void *, void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7840(void *, s8);
M2C_UNK func_0081D7E0(void *, s8);                  /* extern */
void *func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0081C1B0(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 *var_v1;
    s32 var_v0;
    s64 temp_v0;
    s64 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    var_v0 = 0x10;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x82) == 1) {
            if (M2C_FIELD(arg0, s8 *, 0x7E) != 1) {
                temp_a0 = M2C_FIELD(arg0, void **, 8);
                if (temp_a0 != NULL) {
                    func_001D7F10(temp_a0);
                    M2C_FIELD(arg0, void **, 8) = NULL;
                }
            } else {
                if (M2C_FIELD(arg0, void **, 8) == NULL) {
                    M2C_FIELD(arg0, void **, 8) = func_0081D850(M2C_FIELD(arg0, s32 *, 4), 0, 1, 0, 1);
                }
                func_0081D7E0(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, s8 *, 0x7E));
            }
            M2C_FIELD(arg0, s8 *, 0x7F) = (s8) M2C_FIELD(arg0, s8 *, 0x7E);
        }
        if (M2C_FIELD(arg0, s8 *, 0x83) == 1) {
            if (M2C_FIELD(arg0, s8 *, 0x80) != 1) {
                temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_a0_2 != NULL) {
                    func_001D7F10(temp_a0_2);
                    M2C_FIELD(arg0, void **, 0xC) = NULL;
                }
            } else {
                if (M2C_FIELD(arg0, void **, 0xC) == NULL) {
                    M2C_FIELD(arg0, void **, 0xC) = func_0081D850(M2C_FIELD(arg0, s32 *, 4), 0, 1, 0, 1);
                }
                func_0081D7E0(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg0, s8 *, 0x80));
            }
            M2C_FIELD(arg0, s8 *, 0x81) = (s8) M2C_FIELD(arg0, s8 *, 0x80);
        }
        temp_a0_3 = M2C_FIELD(arg0, void **, 8);
        if ((temp_a0_3 != NULL) && (M2C_FIELD(arg0, s8 *, 0x82) == 1)) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x84) - 1;
            if ((arg0 != NULL) && (temp_a0_3 != NULL)) {
                if (temp_v0 >= 0) {
                    if (temp_v0 < 2) {
                        func_001D7D80(temp_a0_3, (s16) ((s64) (temp_v0 << 0x30) >> 0x30));
                    } else {
                        func_001D7D80(temp_a0_3, 1);
                    }
                } else {
                    func_001D7D80(temp_a0_3, 0);
                }
            }
            func_001D7BE0(M2C_FIELD(arg0, void **, 8), &sp20);
            sp20 = M2C_FIELD(arg0, f32 *, 0x10);
            sp24 = M2C_FIELD(arg0, f32 *, 0x14);
            sp28 = M2C_FIELD(arg0, f32 *, 0x20);
            func_001D7CE0(M2C_FIELD(arg0, void **, 8), &sp20);
            func_001D7840(M2C_FIELD(arg0, void **, 8), (s8) M2C_FIELD(arg0, u8 *, 0x28));
            M2C_FIELD(arg0, s8 *, 0x82) = 0;
        }
        temp_a0_4 = M2C_FIELD(arg0, void **, 0xC);
        if ((temp_a0_4 != NULL) && (M2C_FIELD(arg0, s8 *, 0x83) == 1)) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x88) - 1;
            if ((arg0 != NULL) && (temp_a0_4 != NULL)) {
                if (temp_v0_2 >= 0) {
                    if (temp_v0_2 < 2) {
                        func_001D7D80(temp_a0_4, (s16) ((s64) (temp_v0_2 << 0x30) >> 0x30));
                    } else {
                        func_001D7D80(temp_a0_4, 1);
                    }
                } else {
                    func_001D7D80(temp_a0_4, 0);
                }
            }
            func_001D7BE0(M2C_FIELD(arg0, void **, 0xC), &sp20);
            sp20 = M2C_FIELD(arg0, f32 *, 0x18);
            sp24 = M2C_FIELD(arg0, f32 *, 0x1C);
            sp28 = M2C_FIELD(arg0, f32 *, 0x24);
            func_001D7CE0(M2C_FIELD(arg0, void **, 0xC), &sp20);
            func_001D7840(M2C_FIELD(arg0, void **, 0xC), (s8) M2C_FIELD(arg0, u8 *, 0x29));
            M2C_FIELD(arg0, s8 *, 0x83) = 0;
        }
        return 1;
    }
    return 0;
}

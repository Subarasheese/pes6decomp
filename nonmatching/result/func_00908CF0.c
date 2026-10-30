/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B4C0(s32);
extern void func_0026B580(void *, s32, s32);
extern void func_001B9C60(void *);
extern void func_001F1EA0(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00910060(void *);                      /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_003EA650;
extern void *D_00923FC8;

void func_00908CF0(s32 arg0) {
    s16 sp6C;
    s16 sp6E;
    s16 temp_s1;
    s16 temp_s2;
    s32 var_s1;
    s32 var_s2;
    s64 var_s3;
    s64 var_s4;

    func_001D7F10(D_003EA650);
    D_003EA650 = NULL;
    func_0026B4C0(M2C_FIELD(D_00923FC8, s32 *, 0x620));
    func_001B9C60(M2C_FIELD(D_00923FC8, void **, 0x61C));
    func_001F1EA0(M2C_FIELD(D_00923FC8, void **, 0x600));
    var_s4 = 0;
    var_s2 = 0;
    do {
        var_s3 = 0;
        var_s1 = 0;
loop_2:
        func_00C75330(D_00923FC8 + var_s2 + var_s1 + 0x5C);
        var_s3 = (s64) ((var_s3 + 1) << 0x30) >> 0x30;
        var_s1 += 0x40;
        if (var_s3 < 0xB) {
            goto loop_2;
        }
        var_s4 = (s64) ((var_s4 + 1) << 0x30) >> 0x30;
        var_s2 += 0x2C0;
    } while (var_s4 < 2);
    temp_s2 = M2C_FIELD(D_00923FC8, s16 *, 0x30);
    sp6C = M2C_FIELD(D_00923FC8, s16 *, 0x2C);
    temp_s1 = M2C_FIELD(D_00923FC8, s16 *, 0x32);
    sp6E = M2C_FIELD(D_00923FC8, s16 *, 0x2E);
    func_00910060(D_00923FC8);
    func_00C75330(D_00923FC8 + 0x38);
    func_0026B580(D_00923FC8 + 0x5DC, 9, arg0);
    func_001C48E8(D_00923FC8 + 0x2C, 0, 0x60C);
    M2C_FIELD(D_00923FC8, s16 *, 0x2C) = sp6C;
    M2C_FIELD(D_00923FC8, s16 *, 0x2E) = sp6E;
    M2C_FIELD(D_00923FC8, s16 *, 0x30) = temp_s2;
    M2C_FIELD(D_00923FC8, s16 *, 0x32) = temp_s1;
}

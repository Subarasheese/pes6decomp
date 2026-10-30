/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_00C06060(void);
M2C_UNK sprintf(s8 *, s32, s32);              /* extern */
M2C_UNK func_002CE880(s32, s8 *, M2C_UNK);          /* extern */
M2C_UNK func_002CEDD0(s32, s8 *, M2C_UNK);          /* extern */
M2C_UNK func_002CF640(s32, s8 *, M2C_UNK);          /* extern */
M2C_UNK func_002D02C0(s32, s8 *, s32, M2C_UNK);     /* extern */
M2C_UNK func_00B8F980(s32, s32, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B8FC70(s32, s32, M2C_UNK, s8 *);     /* extern */
M2C_UNK func_00B8FFF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00B90520(s32, M2C_UNK);                /* extern */
M2C_UNK func_00C062A0(s8 *);                        /* extern */
s32 func_00C0ADC0();                                /* extern */
extern s32 D_003EB194;
extern char D_00CBF730[];

void func_00C08C50(void *arg0, void *arg1) {
    s8 sp50;
    s8 sp90;
    s32 temp_s1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_v1;
    s8 *var_v1_2;
    u16 *var_s1_2;
    u32 var_s2;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if (func_00C0ADC0() == 1) {
        var_v1 = &sp90;
        var_v0 = 0x40;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        func_00B8FFF0(M2C_FIELD(temp_s0, s32 *, 0), M2C_FIELD(temp_s0, void **, 4) + 0x1C, 0x1A);
        func_00B8FFF0(M2C_FIELD(temp_s0, s32 *, 0), M2C_FIELD(temp_s0, void **, 4) + 0x20, 0x1B);
        if (func_00C06060() != 1) {
            var_s1 = 0x6C000B;
        } else {
            var_s1 = 0x6C000A;
        }
        temp_s1 = func_001F08B0(0x29003A);
        sprintf(&sp90, temp_s1, func_001F08B0(var_s1));
        func_00B8FC70(M2C_FIELD(temp_s0, s32 *, 8) + 0xC, M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x20), 3, &sp90);
        var_s2 = 0;
        var_s1_2 = ((void *)D_00CBF730);
        do {
            func_00B8F980(M2C_FIELD(temp_s0, void **, 0xC) + ((var_s2 + 0x13) * 4), M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x20), *var_s1_2, 1, 1);
            var_s2 += 1;
            var_s1_2 += 2;
        } while (var_s2 < 4U);
        func_00B90520(D_003EB194, 2);
    }
    var_v1_2 = &sp50;
    var_v0_2 = 0x3E;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0_2 -= 1;
            var_v1_2 += 1;
        } while (var_v0_2 != 0);
    }
    func_00C062A0(&sp50);
    func_002D02C0(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), void **, 0x4C), s32 *, 0xC), &sp50, M2C_FIELD(arg1, s32 *, 0x2C8), 1);
    func_002CF640(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), void **, 0x50), s32 *, 0xC), &sp50, 1);
    func_002CEDD0(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), void **, 0x54), s32 *, 0xC), &sp50, 1);
    func_002CE880(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), void **, 0x58), s32 *, 0xC), &sp50, 1);
}

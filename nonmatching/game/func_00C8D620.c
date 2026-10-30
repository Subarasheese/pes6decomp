/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
extern int func_002DCA30(void);
M2C_UNK func_0081D100(s32, M2C_UNK);                /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_0084A750();                                /* extern */
M2C_UNK func_008523E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_008586B0(s16);                             /* extern */
s64 func_00858B60(s16 *, M2C_UNK);                  /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(s16 *, s16);                      /* extern */
s32 func_0085E4C0(s16);                             /* extern */
s32 func_0085EC00();                                /* extern */
s32 func_00C8D7B0(M2C_UNK *);                       /* extern */
extern char D_008B21C0[];
extern char D_00CCD570[];

s32 func_00C8D620(void) {
    M2C_UNK *var_s0;
    s16 *var_s0_2;
    s16 temp_a0;
    s32 temp_s2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    var_s1 = 1;
    var_s0 = ((void *)D_00CCD570);
    do {
        var_s1 &= func_00C8D7B0(var_s0);
        var_s2 += 1;
        var_s0 += 0x18C;
    } while (var_s2 < 2);
    if (func_002DCA30() != 0) {
        var_s1_2 = 1;
        var_s0_2 = ((void *)D_008B21C0);
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
            do {
                temp_a0 = *var_s0_2;
                temp_s2 = temp_a0 - 1;
                if (func_0085E4C0(temp_a0) != 3) {
                    func_0081D100(temp_s2, 0);
                } else {
                    func_0081D100(temp_s2, 1);
                }
                var_s1_2 += 1;
                var_s0_2 += 0x1C;
            } while (var_s1_2 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1));
        }
        if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) != 1) {
            var_v0 = func_0085EC00();
        } else {
            var_v0 = func_008586B0(*func_008472D0());
        }
        var_s1 = var_v0 | func_0084A750();
        if ((var_s1 != 0) && (func_002DCA50() != 0)) {
            func_008523E0(-3, 0x101);
        }
    }
    return var_s1;
}

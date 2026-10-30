/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AC470(void);
extern void func_001AFBF0(s32, s32);
extern s32 func_0017F900(void);
M2C_UNK func_001AB5E0();                            /* extern */
M2C_UNK func_001AC5A0();                            /* extern */
M2C_UNK func_001B43B0(s32, s32);                    /* extern */
s32 func_00C5A620(u8);                              /* extern */
s32 func_00C5A6D0(u8);                              /* extern */
extern u8 D_003EA6FC;
extern char D_0058E7F0[];

s32 func_0093FD30(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    if (D_003EA6FC == 0) {
        goto block_7;
    }
    if (func_0017F900() == 0) {
        return 1;
    }
    func_001AB5E0();
    func_001AC5A0();
    func_001AC470();
    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        func_001AFBF0(*M2C_FIELD(var_s0, s32 **, 4), func_00C5A620(M2C_FIELD(var_s0, u8 *, 0)));
        func_001B43B0(*M2C_FIELD(var_s0, s32 **, 4), func_00C5A6D0(M2C_FIELD(var_s0, u8 *, 0)));
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
    D_003EA6FC = 0;
block_7:
    return 0;
}

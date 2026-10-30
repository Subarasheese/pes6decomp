/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00847350(M2C_UNK);                     /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_0085EC20();                            /* extern */
s32 func_0085EF20();                                /* extern */
extern s32 D_003EA388;
extern char D_0058D7A0[];
extern char D_0058D7AC[];
extern char D_008B21C0[];

void func_0087F8F0(void) {
    M2C_UNK *var_s1;
    s32 var_s0;

    if (func_0085EF20() == 7) {
        func_00853B50(1, 0xD, 9, 0, *func_008472D0(), 0, 0, 0);
    }
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) != 1) {
        func_0085EC20();
        D_003EA388 = 0;
        var_s0 = 0;
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) - 1) >= 0) {
            var_s1 = ((void *)D_0058D7A0);
            do {
                M2C_FIELD(var_s1, s8 *, 0x40) = -1;
                M2C_FIELD(var_s1, s8 *, 0x48) = -1;
                M2C_FIELD(var_s1, s8 *, 0x50) = -1;
                var_s0 += 1;
                M2C_FIELD(var_s1, s8 *, 0x4C) = 0;
                var_s1 += 1;
            } while ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) - 1) >= var_s0);
        }
    }
    func_0084A620(1);
    if ((*(s8 *)D_0058D7AC) != 0) {
        func_00847350(1);
    }
}

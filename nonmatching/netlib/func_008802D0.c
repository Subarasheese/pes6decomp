/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
M2C_UNK func_001C4730(s32, M2C_UNK *, M2C_UNK);     /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
s8 func_0085E4C0(s64);                              /* extern */
extern char D_003AE970[];
extern char D_0058D7A1[];
extern char D_0058D7C0[];
extern char D_008B13E1[];
extern char D_008B21C0[];

s32 func_008802D0(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    s32 var_s1;
    s64 var_s0_2;

    if (func_002DCA40() != 0) {
        var_s1 = 1;
        if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) > 0) {
            var_s0 = ((void *)D_0058D7A1);
            do {
                if (var_s1 != *func_008472D0()) {
                    M2C_FIELD(var_s0, s8 *, 0x23) = (s8) M2C_FIELD(var_s0, s8 *, 0x47);
                    M2C_FIELD(var_s0, s8 *, 0x2B) = (s8) M2C_FIELD(var_s0, s8 *, 0x4F);
                    M2C_FIELD(var_s0, s8 *, 0x27) = (s8) M2C_FIELD(var_s0, s8 *, 0x4B);
                }
                var_s0 += 1;
                var_s1 += 1;
            } while (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) >= var_s1);
        }
    }
    if ((*(s8 *)D_003AE970) == 0xB) {
        var_s0_2 = 1;
        if (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) > 0) {
            var_s2 = ((void *)D_0058D7A1);
            var_s1_2 = ((void *)D_008B13E1);
            do {
                M2C_FIELD(var_s2, s8 *, 0x2B) = func_0085E4C0((s64) (var_s0_2 << 0x30) >> 0x30);
                M2C_FIELD((arg0 + var_s0_2), s8 *, -1) = (s8) M2C_FIELD(var_s1_2, s8 *, -1);
                var_s2 += 1;
                var_s0_2 += 1;
                var_s1_2 += 1;
            } while (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) >= var_s0_2);
        }
        func_001C4730(arg0 + 4, ((void *)D_0058D7C0), 0x10);
        return 0x14;
    }
    return 0;
}

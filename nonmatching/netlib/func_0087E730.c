/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0080AB50();                            /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
M2C_UNK func_0085EC20(s32, u8);                     /* extern */
M2C_UNK func_008FC570(s32, M2C_UNK);                /* extern */
extern char D_003AE982[];
extern char D_003AE983[];
extern char D_008B13E0[];
extern char D_008B14CC[];
extern char D_008B2434[];

s32 func_0087E730(s32 arg0, u8 arg1) {
    M2C_UNK *var_s0;
    s32 var_a0;
    s32 var_s1;
    s64 temp_s2_2;
    u8 temp_s2;
    u8 var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    if ((*(u8 *)D_008B2434) == 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_008B13E0);
        do {
            if ((*(s8 *)D_003AE983) == 1) {
                temp_s2 = M2C_FIELD(var_s0, u8 *, 0x8D);
                if (temp_s2 == *func_008472D0()) {
                    func_008FC570(var_s1, 1);
                }
            } else {
                temp_s2_2 = (s64) (func_00858C20(var_s1) << 0x30) >> 0x30;
                if (temp_s2_2 == *func_008472D0()) {
                    func_008FC570(var_s1, 0);
                }
            }
            var_s1 += 1;
            var_s0 += 1;
        } while (var_s1 < 2);
        func_0080AB50();
        var_a1 = (*(u8 *)D_008B14CC);
        var_a0 = (0 & 1) * 2;
        (*(u8 *)D_008B14CC) = (var_a1 & ~2) | var_a0;
    }
    func_0085EC20(var_a0, var_a1);
    (*(s8 *)D_003AE982) = 0;
    func_0026E840(0x82000001);
    return 1;
}

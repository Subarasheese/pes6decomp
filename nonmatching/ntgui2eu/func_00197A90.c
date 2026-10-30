/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019AE20(M2C_UNK, s32);                    /* extern */
s32 func_0019B130(s32);                             /* extern */
M2C_UNK func_0019BC00(M2C_UNK);                     /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
extern char D_005FF390[];
extern char D_005FF3C0[];
extern char D_011FEE5C[];

s32 func_00197A90(void) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    temp_s1 = func_001A4728();
    temp_v0 = func_0019AE20(3, (*(s32 *)D_011FEE5C));
    if (temp_v0 == 0) {
        func_0019BC00(3);
    }
    if (temp_s1 != 0) {
        func_001A4778();
    }
    if (temp_v0 < 0) {
        var_s2 = 1;
        func_0019DBD0(((void *)D_005FF390));
    }
    temp_a0 = *(s32 *)0x5CAA90;
    if (temp_a0 != -1) {
        if (func_0019B130(temp_a0) >= 0) {
            *(s32 *)0x5CAA90 = -1;
        } else {
            var_s2 += 1;
            func_0019DBD0(((void *)D_005FF3C0));
        }
    }
    return (var_s2 == 0) ? 0 : -1;
}

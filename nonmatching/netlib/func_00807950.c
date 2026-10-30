/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001F87E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0026C760();                                /* extern */
M2C_UNK func_003084C0(M2C_UNK);                     /* extern */
s8 func_00309440(s32);                              /* extern */
M2C_UNK func_0080F570(M2C_UNK);                     /* extern */
s32 func_0081D180();                                /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_0081D300(M2C_UNK);                     /* extern */
M2C_UNK func_00853380();                            /* extern */
M2C_UNK func_008813D0();                            /* extern */
s32 func_00885940(M2C_UNK);                         /* extern */
s8 func_009E1C90(s32);                              /* extern */
extern char D_00591DD5[];
extern char D_0088A900[];
extern char D_0088A908[];
extern char D_0088A910[];
extern char D_008B14CD[];

s32 func_00807950(void) {
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_s0_2;
    s8 *var_s1_2;

    var_s0 = 0;
    if (func_00309440(0) == 8) {
        var_v0 = ((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3C) >> 0x3F) != 0;
        if (var_v0 != 0) {
            var_v0 = func_0026C760() != 0;
        }
    } else {
        var_v0 = 0;
    }
    if ((var_v0 == 0) && (func_00885940(0) != 0)) {
        var_v0_2 = func_0017F900() == 0;
        if (var_v0_2 == 0) {
            var_v0_2 = ((u64) ((s64) (*(u8 *)D_008B14CD) << 0x39) >> 0x3F) != 0;
        }
        if (var_v0_2 == 0) {
            func_00853380();
            var_s1 = 0;
            var_s0_2 = ((void *)D_0088A900);
            do {
                *var_s0_2 = func_00309440(var_s1);
                var_s1 += 1;
                var_s0_2 += 1;
            } while (var_s1 < 4);
            if (func_00309440(0) == 8) {
                var_s0_3 = 0;
                var_s1_2 = ((void *)D_0088A900);
                do {
                    M2C_FIELD(var_s1_2, s8 *, 4) = func_009E1C90(var_s0_3);
                    var_s0_3 += 1;
                    var_s1_2 += 1;
                } while (var_s0_3 < 3);
            }
            (*(s8 *)D_00591DD5) = 1;
            func_0080F570(1);
            if (func_0081D180() != 0) {
                func_0081D300(0);
                func_0081D240(0);
            }
            func_001F87E0(0, 0x30);
            if (func_00309440(0) == 8) {
                func_008813D0();
            }
            var_s0 = 1;
            (*(s32 *)D_0088A910) = (*(s32 *)D_0088A908);
        }
    }
    if (var_s0 != 0) {
        func_003084C0(1);
    }
    return var_s0;
}

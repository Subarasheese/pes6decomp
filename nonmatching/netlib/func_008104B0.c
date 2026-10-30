/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00824A00(u16, s32);                        /* extern */
s32 func_00824A60(u16, s32);                        /* extern */
s32 func_00825610();                                /* extern */
s32 func_008330D0(s32);                             /* extern */
s32 func_00833180(s32);                             /* extern */
s32 func_00833C20(s32);                             /* extern */
s32 func_00833CD0(s32);                             /* extern */
M2C_UNK func_00842190(s32, s32);                    /* extern */
M2C_UNK func_008421D0(s32, s32);                    /* extern */
M2C_UNK func_00842290(s32, s32);                    /* extern */
M2C_UNK func_008422D0(s32, s32);                    /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
extern char D_00591BB0[];
extern char D_008B144E[];

void func_008104B0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s64 temp_s1;
    u16 *temp_s1_2;

    if (func_00825610() != 6) {
        var_s0 = 0;
        do {
            temp_s1 = (s64) (func_00858C20(var_s0) << 0x30) >> 0x30;
            if (temp_s1 == *func_008472D0()) {
                var_s2 = 0;
                temp_s1_2 = ((void *)D_00591BB0) + (var_s0 * 2);
                do {
                    if (var_s0 != 0) {
                        func_008421D0(var_s2, func_00824A60(*temp_s1_2, var_s2 & 0xFF));
                        func_00842190(var_s2, func_00824A00(*temp_s1_2, var_s2 & 0xFF));
                    } else {
                        func_008422D0(var_s2, func_00824A60(*temp_s1_2, var_s2 & 0xFF));
                        func_00842290(var_s2, func_00824A00(*temp_s1_2, var_s2 & 0xFF));
                    }
                    var_s2 += 1;
                } while (var_s2 < 0x20);
            }
            var_s0 += 1;
        } while (var_s0 < 2);
        return;
    }
    if ((*(s8 *)D_008B144E) & 1) {
        var_s0_2 = 0;
        do {
            func_008422D0(var_s0_2, func_00833180(var_s0_2));
            func_00842290(var_s0_2, func_008330D0(var_s0_2));
            func_008421D0(var_s0_2, func_00833CD0(var_s0_2));
            func_00842190(var_s0_2, func_00833C20(var_s0_2));
            var_s0_2 += 1;
        } while (var_s0_2 < 0x20);
        return;
    }
    var_s0_3 = 0;
    do {
        func_008422D0(var_s0_3, func_00833CD0(var_s0_3));
        func_00842290(var_s0_3, func_00833C20(var_s0_3));
        func_008421D0(var_s0_3, func_00833180(var_s0_3));
        func_00842190(var_s0_3, func_008330D0(var_s0_3));
        var_s0_3 += 1;
    } while (var_s0_3 < 0x20);
}

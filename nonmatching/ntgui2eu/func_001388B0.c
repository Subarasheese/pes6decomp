/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AC0(s32);                         /* extern */
extern char D_011D7920[];
extern char D_011D7924[];
extern char D_011D792C[];

s32 func_001388B0(void *arg0) {
    s32 *var_s1;
    s32 *var_s1_2;
    s32 *var_s1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        var_v0 = 0;
        if (temp_v1 >= 3) {
            switch (temp_v1) {                      /* irregular */
            case 3:
                if ((*(s32 *)D_011D7924) != 0) {
                    func_00165AC0((*(s32 *)D_011D7924));
                }
                var_s0 = 3;
                var_s1 = (s32 *)0x011D7940;
                do {
                    temp_a0 = *var_s1;
                    var_s0 -= 1;
                    if (temp_a0 != 0) {
                        func_00165AC0(temp_a0);
                    }
                    var_s1 += 4;
                } while (var_s0 >= 0);
                return 0;
            case 4:
                if ((*(s32 *)D_011D792C) != 0) {
                    func_00165AC0((*(s32 *)D_011D792C));
                }
                var_s0_2 = 3;
                var_s1_2 = (s32 *)0x011D7950;
                do {
                    temp_a0_2 = *var_s1_2;
                    var_s0_2 -= 1;
                    if (temp_a0_2 != 0) {
                        func_00165AC0(temp_a0_2);
                    }
                    var_s1_2 += 4;
                } while (var_s0_2 >= 0);
                var_v0 = 1;
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_v0;
            default:
                return 0;
            }
        } else {
            return var_v0;
        }
    } else {
        if ((*(s32 *)D_011D7920) != 0) {
            func_00165AC0((*(s32 *)D_011D7920));
        }
        var_s0_3 = 3;
        var_s1_3 = (s32 *)0x011D7930;
        do {
            temp_a0_3 = *var_s1_3;
            var_s0_3 -= 1;
            if (temp_a0_3 != 0) {
                func_00165AC0(temp_a0_3);
            }
            var_s1_3 += 4;
        } while (var_s0_3 >= 0);
        return 0;
    }
}

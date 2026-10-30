/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C86E10(s32);                         /* extern */
M2C_UNK func_00C86ED0(s32);                         /* extern */
M2C_UNK func_00C86F70(M2C_UNK);                     /* extern */
M2C_UNK func_00C90310();                            /* extern */
M2C_UNK func_00C91540(M2C_UNK);                     /* extern */
extern char D_003AE97A[];

void func_00C99850(s32 arg0) {
    M2C_UNK var_a0;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 != 0) {
        func_00C86F70(1);
        if (((*(s8 *)D_003AE97A) != 0xB) && ((*(s8 *)D_003AE97A) != 0xA) && ((*(s8 *)D_003AE97A) != 9)) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
        if (var_v0 == 0) {
            func_00C86ED0(arg0 - 1);
        } else {
            func_00C86E10(arg0 - 1);
        }
    } else {
        func_00C86F70(0);
        if (((*(s8 *)D_003AE97A) != 0xB) && ((*(s8 *)D_003AE97A) != 0xA) && ((*(s8 *)D_003AE97A) != 9)) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 1;
        }
        if (var_v0_2 == 0) {
            var_a0 = 0;
        } else {
            var_a0 = 1;
        }
        func_00C91540(var_a0);
    }
    if (func_002DCA30() != 0) {
        func_00C90310();
    }
}

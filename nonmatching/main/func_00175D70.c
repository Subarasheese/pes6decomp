/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00179148(void);
extern int func_00176378(void);
extern int func_00176360(void);
M2C_UNK func_0016DD78();                            /* extern */
M2C_UNK func_00175BB0(s8 *);                        /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_00390030[];

void func_00175D70(void) {
    s32 var_s1;
    s8 *var_s0;

    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        func_00176360();
        var_s0 = ((void *)D_00390030);
        var_s1 = 0xF;
        do {
            if (*var_s0 == 1) {
                func_00175BB0(var_s0);
            }
            var_s1 -= 1;
            var_s0 += 0x64;
        } while (var_s1 >= 0);
        func_00176378();
        func_0016DD78();
        func_00179148();
    }
}

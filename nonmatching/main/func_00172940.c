/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001728B8(void);
extern void func_00171FE0(void *);
M2C_UNK func_001727F8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_00387A78[];
extern char D_00387A80[];

void func_00172940(void) {
    s32 temp_v0;
    s32 var_s1;
    s8 *var_s0;

    temp_v0 = (*(s32 *)D_00387A78) - 1;
    (*(s32 *)D_00387A78) = temp_v0;
    if (temp_v0 == 0) {
        var_s0 = ((void *)D_00387A80);
        var_s1 = 0x1F;
        do {
            if (*var_s0 == 1) {
                func_00171FE0(var_s0);
            }
            var_s1 -= 1;
            var_s0 += 0x238;
        } while (var_s1 >= 0);
        func_001C48E8(((void *)D_00387A80) + 0x7A80, 0, 0x4700);
        func_001728B8();
        func_001727F8(0, 0);
    }
}

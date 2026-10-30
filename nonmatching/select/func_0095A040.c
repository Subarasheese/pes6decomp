/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00955210(s32);                         /* extern */
M2C_UNK func_00955A20(s32);                         /* extern */
M2C_UNK func_00955BC0(s32);                         /* extern */
M2C_UNK func_009561D0(s32);                         /* extern */
M2C_UNK func_00956CE0(s32);                         /* extern */
M2C_UNK func_00956FE0(s32);                         /* extern */
M2C_UNK func_00957810(s32);                         /* extern */
M2C_UNK func_00957A70(s32);                         /* extern */
M2C_UNK func_00958170(s32);                         /* extern */
M2C_UNK func_009583D0(s32);                         /* extern */
extern char D_0096CFF0[];

void func_0095A040(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0096CFF0);
    do {
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 2) == 2) {
            func_00958170(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 1) == 1) {
            func_009583D0(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 4) == 4) {
            func_00957810(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 8) == 8) {
            func_00957A70(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x10) == 0x10) {
            func_00956CE0(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x20) == 0x20) {
            func_00956FE0(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x40) == 0x40) {
            func_00955BC0(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x100) == 0x100) {
            func_00955A20(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x80) == 0x80) {
            func_009561D0(var_s1);
        }
        if ((M2C_FIELD(var_s0, s32 *, 0x19C) & 0x200) == 0x200) {
            func_00955210(var_s1);
        }
        var_s1 += 1;
        M2C_FIELD(var_s0, s32 *, 0x19C) = 0;
        var_s0 += 4;
    } while (var_s1 < 2);
}

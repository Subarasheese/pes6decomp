/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00147ED0(s32);                         /* extern */
M2C_UNK func_00147F10(M2C_UNK, s32);                /* extern */
extern char D_003B0220[];
extern char D_00521680[];

void func_001A7030(void) {
    M2C_UNK *var_s0;
    s32 temp_s2;
    s32 var_s1;

    if ((*(s32 *)D_003B0220) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00521680);
        do {
            if ((M2C_FIELD(var_s0, u8 *, 1) == 2) && (M2C_FIELD(var_s0, s32 *, 0x10) != 0)) {
                temp_s2 = M2C_FIELD(var_s0, u8 *, 3) + 0x866;
                func_00147ED0(temp_s2);
                func_00147F10(1, temp_s2);
            }
            var_s1 += 1;
            var_s0 += 0x40;
        } while (var_s1 < 0x17);
    }
}

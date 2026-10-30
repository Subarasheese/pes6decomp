/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00197DC0(s8, s32);
M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
extern char D_005CD188[];
extern s32 D_00602154;
extern s32 D_006025BC;
extern u8 D_006025C0;
extern s32 D_006025C4;

void func_00104618(void) {
    s32 temp_v0;
    u8 var_a2;

    var_a2 = D_006025C0;
    if ((D_00602154 == 2) || (D_00602154 == 4)) {
        if (!(var_a2 & 0x10)) {
            var_a2 |= 0x10;
        }
    } else {
        var_a2 = (((var_a2 & 0x10) ^ 0) != 0) ? (var_a2 & 0xEF) : var_a2;
    }
    if (var_a2 != (s32) D_006025C0) {
        D_006025C0 = (s32) var_a2;
        temp_v0 = func_00197DC0((s8) D_006025C4, (s32) var_a2);
        if (temp_v0 != 0) {
            func_0019DBD0(((void *)D_005CD188), temp_v0);
            D_006025BC = 0;
            return;
        }
        D_006025BC = 2;
    }
}

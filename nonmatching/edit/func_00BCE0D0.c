/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE5370[];
extern char D_00CE53CC[];

s32 func_00BCE0D0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if ((func_00BCF3A0(0x08000000) != 0) && ((func_00C1B460(0) & 0xFFFF) != 0x126)) {
                func_0026E840(0x84028400);
                return 4;
            }
            if (func_00BCF3A0(0x20) == 0) {
                func_001B66C0(0xF00088);
                return 0;
            }
            func_0026E840(0x8400F802);
            (*(s32 *)D_00CE53CC) = 0;
            return 3;
        }
        func_0026E840(0x84008401);
        var_a1 = 0;
        var_a0 = ((void *)D_00CE5370);
loop_8:
        if (M2C_FIELD(var_a0, u8 *, 0) == M2C_FIELD(var_a0, u8 *, 0x20)) {
            var_a1 += 1;
            var_a0 += 1;
            if (var_a1 >= 0x20) {
                return 1;
            }
            goto loop_8;
        }
        return 2;
    }
    func_0026E840(0x84028400);
    return 1;
}

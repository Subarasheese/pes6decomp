/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s8 *, void *, M2C_UNK);       /* extern */
M2C_UNK func_00BC4040(s8 *, s32);                   /* extern */
extern char D_00CBF3F0[];

void func_00C06490(s32 arg0, u32 arg1) {
    s8 sp2C;
    s32 var_v0;
    s8 *var_v1;
    u32 var_a1;

    var_a1 = arg1;
    var_v0 = 2;
    var_v1 = &sp2C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (var_a1 >= 0x15U) {
        var_a1 = (u32) ((s32) var_a1 % 21);
    }
    func_001C4730(&sp2C, ((void *)D_00CBF3F0) + (var_a1 * 2), 2);
    func_00BC4040(&sp2C, arg0);
}

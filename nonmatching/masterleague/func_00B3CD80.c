/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B3D3D0(void);
M2C_UNK func_00960F30(s32 *, M2C_UNK);              /* extern */
extern char D_00B80010[];

void func_00B3CD80(void) {
    s32 sp10;
    s32 *var_a0;
    s32 *var_a1;
    s32 var_v1;

    var_a1 = ((void *)D_00B80010);
    var_a0 = &sp10;
    var_v1 = 0xF;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 4;
        var_a0 += 4;
    } while (var_v1 > 0);
    if (func_00B3D3D0() != 0) {
        func_00960F30(&sp10, 5);
    }
}

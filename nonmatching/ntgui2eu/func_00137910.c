/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00133D60(s32);                         /* extern */
extern char D_005BC640[];

void func_00137910(void) {
    M2C_UNK *var_s0;

    var_s0 = ((void *)D_005BC640);
    do {
        func_00133D60((s32) var_s0);
        var_s0 += 0x14;
    } while ((s32) var_s0 < (s32) (((void *)D_005BC640) + 0x50));
}

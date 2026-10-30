/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_002ED130(s32);                         /* extern */
extern char D_00CEB720[];

void func_00BF7300(void) {
    s32 *temp_s0;
    s32 temp_a0;
    s32 var_a0;

    var_a0 = 0 & 1;
    if ((0 < 0) && (var_a0 != 0)) {
        var_a0 -= 2;
    }
    temp_s0 = ((void *)D_00CEB720) + (var_a0 * 0x14);
    if (temp_s0 != NULL) {
        temp_a0 = *temp_s0;
        if (temp_a0 != 0) {
            func_002ED130(temp_a0);
            *temp_s0 = 0;
        }
    }
    func_001C48E8(temp_s0, 0, 0x14);
}

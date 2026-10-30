/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CDFA00[];

void func_00B915B0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (0 < 0x39) {
        do {
            func_001C48E8(((void *)D_00CDFA00) + (var_s0 * 0x18), 0, 0x18);
            var_s0 += 1;
        } while (var_s0 < 0x39);
    }
}

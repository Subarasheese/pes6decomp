/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00112338();                            /* extern */
extern void *D_006024A8;
extern char D_011C79B8[];

void func_00114DC4(void) {
    s32 var_s0;
    void *temp_a0;

    var_s0 = 0;
    func_00112338();
    do {
        temp_a0 = ((void *)D_011C79B8) + (var_s0 << 6);
        var_s0 += 1;
        M2C_FIELD(D_006024A8, M2C_UNK (**)(void *), 0x114)(temp_a0);
    } while (var_s0 < 6);
}

/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00147ED0(s32);                         /* extern */
M2C_UNK func_00147F10(M2C_UNK, s32);                /* extern */
M2C_UNK func_001A7030();                            /* extern */
M2C_UNK func_001A95C0();                            /* extern */
M2C_UNK func_001B0EC0();                            /* extern */

void func_001AC470(void) {
    s32 temp_s0;
    s32 var_s1;

    func_001B0EC0();
    func_00147ED0(0x2511);
    func_00147F10(1, 0x2511);
    var_s1 = 0;
    do {
        temp_s0 = var_s1 + 0x26D4;
        if (func_001454C0(temp_s0) != 0) {
            func_00147ED0(temp_s0);
            func_00147F10(1, temp_s0);
        }
        var_s1 += 1;
    } while (var_s1 < 4);
    func_001A95C0();
    func_001A7030();
}

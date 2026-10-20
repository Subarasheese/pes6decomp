/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00147ED0(s32);                         /* extern */
M2C_UNK func_001A6FC0();                            /* extern */
M2C_UNK func_001A9510();                            /* extern */
M2C_UNK func_001B0D20();                            /* extern */

void func_001AC410(void) {
    s32 var_s0;

    func_001B0D20();
    func_00147ED0(0x2511);
    var_s0 = 0;
    do {
        func_00147ED0(var_s0 + 0x26D4);
        var_s0 += 1;
    } while (var_s0 < 4);
    func_001A9510();
    func_001A6FC0();
}

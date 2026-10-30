/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BF6980(s32, s32);
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */

void func_00B9E930(void) {
    s32 var_a0;

    var_a0 = 2;
    if (M2C_FIELD(func_00B9C490(), s32 *, 0x20) != 2) {
        var_a0 = 1;
    }
    func_00BF6980(var_a0, 0x24);
    func_00B91490(0x1B);
}

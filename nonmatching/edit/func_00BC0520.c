/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B20(void);
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1530(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BC2520(void *);                      /* extern */
M2C_UNK func_00BC26F0(void *);                      /* extern */

void func_00BC0520(void *arg0) {
    M2C_UNK var_a0;

    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = 2;
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x20);
    func_00BC26F0(arg0);
    func_00BC2520(arg0);
    func_00B91490(0x13);
    func_00B91490(0x1D);
    func_00BB1540(0);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_a0 = 1;
    } else {
        var_a0 = 0;
    }
    func_00BB1530(var_a0);
    func_001B7B20();
}

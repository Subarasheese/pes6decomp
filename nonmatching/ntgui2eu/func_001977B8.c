/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00197530();                            /* extern */
M2C_UNK func_00197598(void *);                      /* extern */
M2C_UNK func_00197760(void *);                      /* extern */
M2C_UNK func_00197790(void *);                      /* extern */

void func_001977B8(void *arg0, s32 arg1) {
    s32 var_s0;

    func_00197530();
    var_s0 = M2C_FIELD(arg0, u8 *, 2) + arg1;
    if (var_s0 < 0) {
        var_s0 += 0x3C;
loop_8:
        func_00197790(arg0);
        if (var_s0 < 0) {
            var_s0 += 0x3C;
            goto loop_8;
        }
        goto block_11;
    }
    if (var_s0 >= 0x3C) {
        do {
            var_s0 -= 0x3C;
            func_00197760(arg0);
        } while (var_s0 >= 0x3C);
        M2C_FIELD(arg0, u8 *, 2) = (u8) var_s0;
    } else {
block_11:
        M2C_FIELD(arg0, u8 *, 2) = (u8) var_s0;
    }
    func_00197598(arg0);
}

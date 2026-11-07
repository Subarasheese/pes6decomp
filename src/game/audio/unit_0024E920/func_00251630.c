/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_00251A00(void);
extern int func_00251A10(void);
extern int func_00251A20(void);
M2C_UNK func_0024FB20(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */

void func_00251630(s32 arg0, u32 arg1) {
    u32 var_s0;

    if (arg1 > 0xFU) {
        arg1 = 0xF;
    }
    var_s0 = arg1;
    switch (arg0) {                                 /* irregular */
    case 0:
        func_0024FB20(0x2200000C, (var_s0 * func_00251A10()) / 100, 0, 0);
        return;
    case 1:
        func_0024FB20(0x2200000D, (var_s0 * func_00251A00()) / 100, 0, 0);
        return;
    case 2:
        func_0024FB20(0x8200000E, (var_s0 * func_00251A20()) / 100, 0, 0);
        return;
    }
}

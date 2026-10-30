/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B23F60(M2C_UNK);                     /* extern */
extern char D_00591DCC[];

void func_0087F260(void) {
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;

    if ((0 ^ (*(u8 *)D_00591DCC)) == 0) {
        var_a0 = 0;
    } else {
        var_a0 = 2;
    }
    func_00B23F60(var_a0);
    if ((1 ^ (*(u8 *)D_00591DCC)) == 0) {
        var_a0_2 = 0;
    } else {
        var_a0_2 = 2;
    }
    func_00B23F60(var_a0_2);
}

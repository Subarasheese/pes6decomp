/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *func_00B9C490();                              /* extern */
M2C_UNK func_00BF3E80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF5890(M2C_UNK);                     /* extern */
s32 func_00BF7950();                                /* extern */
extern char D_00CE40D8[];

void func_00B9DCE0(void) {
    M2C_UNK var_s1;
    void *temp_s0;

    temp_s0 = func_00B9C490();
    func_00BF5890(0);
    func_00BF45D0(1, func_00BF7950(), 0, 0, 1);
    func_00B91590(0xC, 1);
    var_s1 = 1;
    if ((*(s32 *)D_00CE40D8) == 1) {
        var_s1 = 2;
        func_00BF3E80(0, 0);
        func_00BF3E80(1, 0);
    }
    func_00B92210(0, var_s1, 1);
    M2C_FIELD(temp_s0, s32 *, 4) = 0x62;
}

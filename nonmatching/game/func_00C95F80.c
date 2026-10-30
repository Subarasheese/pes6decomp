/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6260(void);
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BBBF40(s32, s32);                    /* extern */
extern char D_00592740[];
extern char D_00CBCB37[];

void func_00C95F80(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;

    var_s0 = 0;
    switch ((*(u8 *)D_00CBCB37)) {                           /* irregular */
    case 30:
        var_s0_2 = 0x1D;
        var_v0 = func_00BBB8C0(2);
block_15:
        var_s0 = var_s0_2 + var_v0;
        break;
    case 29:
        var_s0_2 = 0x21;
        var_v0 = func_00BBB8C0(2);
        goto block_15;
    case 28:
        var_s0 = func_00BBB8C0(2) + 0x1F;
        break;
    case 31:
        var_s0_2 = 0x1B;
        var_v0 = func_00BBB8C0(2);
        goto block_15;
    }
    func_00BBBF40(func_00BF6260() & 0xFF, var_s0 & 0xFF);
    (*(s8 *)D_00592740) = 0x19;
}

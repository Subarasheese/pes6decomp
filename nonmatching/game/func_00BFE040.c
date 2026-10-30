/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29C50(M2C_UNK);                         /* extern */
M2C_UNK func_00BFA810(s32, M2C_UNK);                /* extern */
s32 func_00C00D60(s32);                             /* extern */
s32 func_00C01090(s32);                             /* extern */
M2C_UNK func_00C01540(s32, u8, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_00591F10[];
extern char D_00592701[];

void func_00BFE040(void) {
    s32 var_s0;
    u8 temp_s1;

    if ((*(u8 *)D_00591F10) != 0) {
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    temp_s1 = (*(u8 *)D_00592701);
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_4;
    }
    if (func_00B29C50(5) != 0) {
block_4:
        if (var_s0 < 0x2E) {
            func_00C01540(var_s0, temp_s1, 0x17, 0, 6);
        }
    }
    if (var_s0 == 0x2E) {

    } else if (func_00C01090(var_s0) != 0) {
        func_00BFA810(func_00C00D60(var_s0) & 0xFF, 1);
    }
}

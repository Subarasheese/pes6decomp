/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29C50(M2C_UNK);                         /* extern */
s32 func_00BF6950();                                /* extern */
M2C_UNK func_00C01540(s32, u8, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_00591E4D[];
extern char D_00592700[];

void func_00BFBCC0(void) {
    s32 var_s4;
    u8 var_s3;

    var_s4 = 0x2E;
    var_s3 = 0x17;
    if ((u32) ((*(u8 *)D_00592700) - 5) < 2U) {
        if (func_00BF6950() != 0) {
            var_s3 = (*(u8 *)D_00591E4D);
            var_s4 = 4;
        }
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_2;
    }
    if (func_00B29C50(5) != 0) {
block_2:
        if (var_s4 < 0x2E) {
            func_00C01540(var_s4, var_s3, 0x17, 0xC, 6);
        }
    }
}

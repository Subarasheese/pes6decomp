/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00BF67F0(void);
s32 func_00B29C50();                                /* extern */
M2C_UNK func_00C010E0(M2C_UNK);                     /* extern */
M2C_UNK func_00C01540(s32, u8, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_00CBD269[];

s32 func_00BFB590(void) {
    M2C_UNK var_s1;
    s32 var_s4;
    u8 var_s3;

    var_s4 = 0x2E;
    var_s3 = 0x17;
    var_s1 = 0xC;
    if (func_00BF67F0() != 0) {
        func_00C010E0(7);
        func_00C010E0(9);
        func_00C010E0(0xA);
        var_s4 = 8;
        var_s3 = (*(u8 *)D_00CBD269);
        var_s1 = 1;
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_4;
    }
    if (func_00B29C50() != 0) {
block_4:
        if (var_s4 < 0x2E) {
            func_00C01540(var_s4, var_s3, 0x17, var_s1, 6);
        }
    }
    return var_s4;
}

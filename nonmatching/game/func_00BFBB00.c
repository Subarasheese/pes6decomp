/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29C50(M2C_UNK);                         /* extern */
s32 func_00BCC670(M2C_UNK);                         /* extern */
s32 func_00BCC980();                                /* extern */
M2C_UNK func_00BFA810(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C01090(s32);                             /* extern */
M2C_UNK func_00C010E0(M2C_UNK);                     /* extern */
M2C_UNK func_00C01540(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_005922E8[];
extern char D_005922E9[];

void func_00BFBB00(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x2E;
    temp_v0 = func_00BCC980();
    switch (temp_v0) {                              /* irregular */
    case 1:
        var_s0 = 0x2B;
        break;
    case 2:
        var_s0 = 0x1F;
        break;
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_6;
    }
    if (func_00B29C50(5) != 0) {
block_6:
        if (var_s0 < 0x2E) {
            func_00C01540(var_s0, 0x17, 0x17, 0xC, 6);
        }
    }
    if (var_s0 != 0x2B) {

    } else {
        if (func_00C01090(var_s0) != 0) {
            func_00BFA810(1, 1);
            func_00BFA810(0xC, 1);
        }
        if (func_00C01090(var_s0) != 0) {
            (*(s8 *)D_005922E8) = 1;
            if (func_00BCC670(0) == 1) {
                (*(s8 *)D_005922E9) = 0;
            }
            if (func_00BCC670(1) == 1) {
                (*(s8 *)D_005922E9) = 1;
            }
        }
        if (func_00C01090(0x18) == 0) {
            if (func_00C01090(0x19) == 0) {
                if (func_00C01090(0x1A) == 0) {
                    if (func_00C01090(0x1B) != 0) {
                        func_00C010E0(0x1B);
                    }
                } else {
                    func_00C010E0(0x1A);
                }
            } else {
                func_00C010E0(0x19);
            }
        } else {
            func_00C010E0(0x18);
        }
    }
}

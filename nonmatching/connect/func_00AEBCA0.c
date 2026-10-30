/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_002211A0();                              /* extern */
s32 func_00AEBDB0();                                /* extern */
extern char D_00B02B40[];
extern char D_00B02B48[];
extern char D_00B02B4A[];
extern char D_00B02B4C[];
extern char D_00B02B4E[];
extern char D_00B02B5C[];

s32 func_00AEBCA0(s32 *arg0) {
    s32 var_s0;
    s32 var_s1;
    u16 temp_a5;
    u8 temp_a4;
    u8 var_v1;
    void *temp_v0;

    var_s0 = *arg0;
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        func_001C48E8(((void *)D_00B02B40), 0, 0x24);
        temp_v0 = func_002211A0();
        temp_a5 = M2C_FIELD(temp_v0, u16 *, 0x40);
        temp_a4 = M2C_FIELD(temp_v0, u8 *, 0x42);
        (*(u16 *)D_00B02B4C) = temp_a5;
        (*(u16 *)D_00B02B48) = temp_a5;
        var_v1 = ((*(u8 *)D_00B02B5C) & ~1) | 1;
        (*(u8 *)D_00B02B4E) = temp_a4;
        var_s0 += 1;
        (*(u8 *)D_00B02B4A) = temp_a4;
block_8:
        (*(u8 *)D_00B02B5C) = var_v1;
        break;
    case 1:
        if (func_00AEBDB0() == 1) {
            var_s0 += 1;
        case 2:
            var_s1 = 1;
            var_v1 = ((*(u8 *)D_00B02B5C) & ~1) | (0 & 1);
            goto block_8;
        }
        break;
    }
    *arg0 = var_s0;
    return var_s1;
}

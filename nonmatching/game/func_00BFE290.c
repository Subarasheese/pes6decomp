/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C00630(void);
M2C_UNK func_002736F0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00B29C50(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00BC4290(u8);                              /* extern */
M2C_UNK func_00BC8DF0();                            /* extern */
M2C_UNK func_00BFA810(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C01090(s32);                             /* extern */
M2C_UNK func_00C01540(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_00591DCD[];

void func_00BFE290(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 var_s0;
    u32 temp_v0_2;
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_00591DCD);
    temp_v0 = func_00BC4290(temp_s0);
    switch (temp_s0) {                              /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        var_s0 = 0x27;
        break;
    default:                                        /* switch 1 */
        var_s0 = 0x21;
        break;
    case 1:                                         /* switch 1 */
        switch (temp_v0) {                          /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            var_s0 = 0x22;
            break;
        case 4:                                     /* switch 2 */
            var_s0 = 0x24;
            break;
        default:                                    /* switch 2 */
            var_s0 = 0x23;
            break;
        }
        break;
    case 2:                                         /* switch 1 */
        if (temp_v0 == 5) {
            var_s0 = 0x25;
        } else {
            var_s0 = 0x26;
        }
        break;
    case 3:                                         /* switch 1 */
        if (temp_v0 == 5) {
            var_s0 = 0x27;
        } else {
            var_s0 = 0x28;
        }
        break;
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_23;
    }
    if (func_00B29C50(5, 5) != 0) {
block_23:
        if (var_s0 < 0x2E) {
            func_00C01540(var_s0, 0x17, 0x17, 0xC, 6);
        }
    }
    if (var_s0 != 0x2E) {
        if (func_00C01090(var_s0) != 0) {
            func_00BFA810(1, 1);
            func_00BFA810(0xC, 1);
        }
        temp_v0_2 = func_00C00630() - 0x22;
        var_a0 = 0;
        if ((temp_v0_2 < 6U) && ((1 << temp_v0_2) & 0x29)) {
            var_a0 = 1;
        }
        func_002736F0(var_a0, 1);
        func_00BC8DF0();
    }
}

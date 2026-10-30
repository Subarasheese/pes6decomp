/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00648390(u32);
extern u32 func_00648380(void);
extern int func_002E8BD0(void);
s32 func_006252C0(s32);                             /* extern */
s32 func_006255B0(s32);                             /* extern */
M2C_UNK func_00637BB0(s32);                         /* extern */
M2C_UNK func_0064E3C0(u8);                          /* extern */
M2C_UNK func_0064E6B0();                            /* extern */
M2C_UNK func_00654BB0();                            /* extern */
s32 func_008F9720();                                /* extern */
extern u8 D_003E9E20;
extern s32 D_003E9E24;
extern s32 D_003EA0F4;
extern char D_0065C138[];
extern char D_0065C140[];
extern char D_0065C148[];

s32 func_00624BE0(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_v1;

    var_s0 = 0;
    func_0064E3C0(D_003E9E20);
    switch ((*(s32 *)D_0065C138)) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        switch (D_003EA0F4) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            break;
        case 2:                                     /* switch 4 */
            var_v0 = 1;
block_38:
            D_003E9E24 = var_v0;
            break;
        case 1:                                     /* switch 4 */
            var_v0 = 5;
            goto block_38;
        }
        if ((func_00648380() == 0) || (func_002E8BD0() != 0x47)) {
            var_s0 = D_003EA0F4;
            (*(s32 *)D_0065C138) = 0;
        }
        break;
    case 2:                                         /* switch 1 */
        switch (arg0) {                             /* switch 3; irregular */
        case 5:                                     /* switch 3 */
            func_00637BB0((*(s32 *)D_0065C138));
            (*(s32 *)D_0065C138) = 3;
            break;
        case 6:                                     /* switch 3 */
            if (func_002E8BD0() == 0x47) {
                func_00654BB0();
                func_0064E6B0();
            }
            (*(s32 *)D_0065C138) = 3;
            break;
        default:                                    /* switch 3 */
            if (func_006252C0(arg0) != 0) {
                (*(s32 *)D_0065C138) = 3;
            }
            break;
        }
        break;
    default:                                        /* switch 1 */
        if (func_002E8BD0() == 0x47) {
            func_00648390(1U);
        }
        (*(s8 *)D_0065C140) = 0;
        D_003EA0F4 = 0;
        (*(s32 *)D_0065C148) = 0;
        (*(s32 *)D_0065C138) = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (arg0 != 6) {
            var_v0_2 = func_006255B0(arg0);
        } else {
            var_v0_2 = func_008F9720();
        }
        D_003EA0F4 = var_v0_2;
        temp_v1 = (s64) ((s64) var_v0_2 << 0x20) >> 0x20;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            (*(s32 *)D_0065C138) = 2;
            break;
        case 2:                                     /* switch 2 */
            (*(s32 *)D_0065C138) = 3;
            break;
        }
        break;
    }
    return var_s0;
}

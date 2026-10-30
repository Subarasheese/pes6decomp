/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0064E3C0(u8);                          /* extern */
M2C_UNK func_00655370(u8);                          /* extern */
M2C_UNK func_006553A0(M2C_UNK);                     /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_006556F0();                            /* extern */
M2C_UNK func_00655760();                            /* extern */
M2C_UNK func_006557C0();                            /* extern */
M2C_UNK func_00655940();                            /* extern */
M2C_UNK func_00655D20(s32, M2C_UNK);                /* extern */
M2C_UNK func_00655E80(s32, M2C_UNK);                /* extern */
extern u8 D_003E9E20;
extern u8 D_003EA21C;
extern u8 D_003EA220;
extern u8 D_003EA228;
extern char D_0065A4D0[];
extern char D_0065A4D4[];
extern char D_0065A4D8[];
extern char D_0065E660[];

s32 func_00648180(void) {
    s32 var_s0;

    var_s0 = 0;
    func_0064E3C0(D_003E9E20);
    switch (D_003EA228) {                           /* switch 1; irregular */
    default:                                        /* switch 1 */
        D_003EA220 = 0;
        func_00655940();
        func_00655E80((*(s32 *)D_0065A4D0), 0);
        func_00655D20((*(s32 *)D_0065A4D4), 0);
        func_00655D20((*(s32 *)D_0065A4D8), 1);
        func_00655370(D_003EA220);
        func_006553A0(1);
        func_006557C0();
        func_00655760();
        D_003EA228 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (func_00655660() != 0) {
            D_003EA228 = 2;
        case 2:                                     /* switch 1 */
            D_003EA21C = D_003EA220;
            if ((D_003EA220 == 1) && ((*(s32 *)D_0065E660) == 0x10)) {
                D_003EA220 = 0;
            } else if ((D_003EA220 == 0) && ((*(s32 *)D_0065E660) == 0x20)) {
                D_003EA220 = 1;
            } else {
                switch ((*(s32 *)D_0065E660)) {               /* switch 2; irregular */
                case 0x200:                         /* switch 2 */
                    func_0026E840(0x84008401);
                    D_003EA220 = 1;
block_19:
                    D_003EA228 = 3;
                    break;
                case 0x100:                         /* switch 2 */
                    func_0026E840(0x84028400);
                    goto block_19;
                }
            }
            if (D_003EA228 == 3) {
                func_006556F0();
            } else if ((D_003EA228 != 0) && (D_003EA21C != D_003EA220)) {
                func_0026E840(0x8400F802);
                func_00655370(D_003EA220);
                func_006557C0();
            }
        }
        break;
    case 3:                                         /* switch 1 */
        if (func_00655660() != 0) {
        case 4:                                     /* switch 1 */
            if (D_003EA220 != 0) {
                var_s0 = 2;
            } else {
                var_s0 = 1;
            }
            D_003EA228 = 0;
        }
        break;
    }
    return var_s0;
}

/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00BA9600();                            /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BBBC10();                            /* extern */
M2C_UNK func_00BBBF40(M2C_UNK, s32);                /* extern */
extern char D_00592740[];

void func_00BA9490(void) {
    s32 temp_v0;
    s32 var_a0;

    switch ((*(u8 *)D_00592740)) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        break;
    case 0:                                         /* switch 1 */
        func_00BA9600();
        (*(u8 *)D_00592740) = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if ((func_009E1C90(3) & 0xFF) == 6) {
            (*(u8 *)D_00592740) = 2;
        case 2:                                     /* switch 1 */
            temp_v0 = func_00BBB8C0(5);
            var_a0 = 3;
            if (temp_v0 != 3) {
                if (temp_v0 != 2) {
                    var_a0 = 1;
                    switch (temp_v0) {              /* switch 2; irregular */
                    case 0:                         /* switch 2 */
                        break;
                    case 1:                         /* switch 2 */
                        var_a0 = 2;
                        break;
                    default:                        /* switch 2 */
                        var_a0 = 5;
                        break;
                    }
                }
            } else {
                var_a0 = 4;
            }
            func_00BBBF40(0, var_a0 & 0xFF);
            (*(u8 *)D_00592740) = 3;
        }
        break;
    }
    func_00BBBC10();
}

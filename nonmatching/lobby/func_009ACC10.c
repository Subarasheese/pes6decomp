/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
M2C_UNK func_001FC780(s32);                         /* extern */
s32 func_001FC800(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_002CAA60();                            /* extern */
s32 func_002E8C60(s32);                             /* extern */
M2C_UNK func_002E8CB0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_002E9310();                                /* extern */
M2C_UNK func_00363BD0(s32);                         /* extern */
M2C_UNK func_00363C40(s32);                         /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
extern char D_00A7DBD0[];
extern char D_00A7DBD4[];
extern char D_00A7DBD8[];
extern char D_00A7DBE8[];

void func_009ACC10(void) {
    s32 temp_v0;

    switch ((*(s32 *)D_00A7DBD8)) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        func_002E8CB0(0x28, 0);
        (*(s32 *)D_00A7DBD8) = 2;
        return;
    case 0:                                         /* switch 1 */
        func_00363BD0((*(s32 *)D_00A7DBD8));
        (*(s32 *)D_00A7DBD8) = 1;
        return;
    case 2:                                         /* switch 1 */
        if (func_002E8C60((*(s32 *)D_00A7DBD8)) == 1) {
            (*(s32 *)D_00A7DBD8) = 3;
            func_0099C760();
            if (func_002E9310() == 5) {
                func_0099C730(0x01FD0042);
                return;
            }
            func_0099C730(0x01F80015);
            return;
        }
        return;
    case 3:                                         /* switch 1 */
        func_00363C40((*(s32 *)D_00A7DBD8));
        (*(s32 *)D_00A7DBD8) = 4;
        /* fallthrough */
    case 4:                                         /* switch 1 */
        if (func_001B68B0() != 0) {
            (*(s32 *)D_00A7DBD8) = 0;
            temp_v0 = func_002E9310();
            switch (temp_v0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                (*(s32 *)D_00A7DBD4) = 2;
block_27:
                (*(s32 *)D_00A7DBD0) = 7;
                break;
            case 5:                                 /* switch 2 */
                (*(s32 *)D_00A7DBD4) = 1;
                (*(s32 *)D_00A7DBD0) = 5;
                func_001FC780(func_001FC800(0x1A, 5));
                func_002CAA60();
                (*(s32 *)D_00A7DBE8) = 1;
                return;
            default:                                /* switch 2 */
                (*(s32 *)D_00A7DBD4) = 2;
                goto block_27;
            }
        }
        break;
    }
}

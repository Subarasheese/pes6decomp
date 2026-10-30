/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0027D650(M2C_UNK);                     /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_0084EE40(M2C_UNK);                     /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00859EB0(s16, M2C_UNK);                /* extern */
M2C_UNK func_009B4450(M2C_UNK);                     /* extern */
s32 func_00B24160();                                /* extern */
M2C_UNK func_00B24180(M2C_UNK);                     /* extern */
M2C_UNK func_00B241B0(M2C_UNK);                     /* extern */
s32 func_00B24590();                                /* extern */
M2C_UNK func_00B24600(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B25720(M2C_UNK);                     /* extern */
s32 func_00B25A90();                                /* extern */
M2C_UNK func_00B25B30(M2C_UNK);                     /* extern */
s32 func_00B26DB0();                                /* extern */
M2C_UNK func_00B26E20(M2C_UNK);                     /* extern */
M2C_UNK func_00B26E50(M2C_UNK);                     /* extern */
M2C_UNK func_00B79DA0();                            /* extern */
M2C_UNK func_00BF9E70(M2C_UNK);                     /* extern */
extern char D_00591DD1[];
extern char D_00591DD2[];
extern char D_00592377[];
extern char D_005926FF[];
extern char D_005927C8[];
extern char D_008B14E7[];
extern char D_008B14F0[];

void func_0084AB60(void) {
    switch ((*(u8 *)D_005926FF)) {                           /* irregular */
    case 0:
        func_0027D650(0xC);
        break;
    case 4:
        if ((*(u8 *)D_00592377) != 0) {
            func_00B24600(0, func_00B24590());
            (*(u8 *)D_00592377) = 0;
        }
        func_00B25720(0);
        if (func_00B25A90() == 3) {
            func_00B25B30(3);
        }
        if (func_00B25A90() == 4) {
            func_00B25B30(4);
        }
        if ((*(u8 *)D_005927C8) != 0) {
            (*(u8 *)D_005927C8) = 0;
        }
        break;
    }
    if (func_00B26DB0() != 0) {
        func_00B26E50(0);
        func_00B26E20(0);
        (*(s8 *)D_00591DD1) = 0;
    }
    if (func_00B24160() != 0) {
        func_00B241B0(0);
        func_00B24180(0);
        (*(s8 *)D_00591DD2) = 0;
        func_00BF9E70(0);
    }
    (*(s8 *)D_008B14E7) = 0;
    func_0084EE40(1);
    (*(s16 *)D_008B14F0) = 0;
    func_009B4450(1);
    func_00B79DA0();
    func_00859EB0(*func_008472D0(), 5);
    func_00853B50(1, 0x17, 1, 0, *func_008472D0(), 0, 0, 0);
}

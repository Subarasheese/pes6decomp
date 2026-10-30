/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern void func_002727C0(s32);
extern u8 func_00BF6280(void);
extern u8 func_00BF6270(void);
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00B25380(s32);                         /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
s32 *func_00B2A420(u8);                             /* extern */
extern s8 D_003EA760;
extern char D_00591DB4[];
extern char D_00591E14[];

void func_00B6A3C0(void) {
    u8 temp_v0;

    (*(s32 *)D_00591E14) = 0;
    (*(s8 *)D_00591DB4) = 0;
    D_003EA760 = 0;
    func_00B27010(0);
    func_00B25C50(0);
    func_002727C0(0xD);
    temp_v0 = func_00BF6280();
    switch (temp_v0) {                              /* irregular */
    case 18:
        func_009E1D30(3, 2);
        break;
    case 7:
    case 6:
    case 5:
        func_009E1CB0(3);
        break;
    case 3:
        func_00B25380(*func_00B2A420(func_00BF6270()));
        func_009E1D30(3, 2);
        break;
    default:
        func_009E1D30(3, 2);
        break;
    }
    func_00AD0A20();
    Pes6Ball_Update();
}

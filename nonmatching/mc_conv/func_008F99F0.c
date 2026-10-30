/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00153FC0(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_0017F850(M2C_UNK);                         /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_0017F9A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
s32 func_0026DA40(M2C_UNK);                         /* extern */
M2C_UNK func_0026E560(M2C_UNK);                     /* extern */
M2C_UNK func_0026E690(M2C_UNK, s32);                /* extern */
extern s32 D_003EA6DC;
extern s32 D_003EA6E0;
extern char D_008FEAD0[];
extern char D_008FEAD8[];

s32 func_008F99F0(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EA6E0) {                           /* irregular */
    case 2:
        if (func_0026DA40(1) == 0) {
            D_003EA6E0 += 1;
        }
        break;
    case 0:
        D_003EA6DC = func_00153FC0(9, 0x40, func_0017F850(0x11AD8));
        func_001C48E8(D_003EA6DC, 0, func_0017F850(0x11AD8));
        (*(s32 *)D_008FEAD0) = 1;
        (*(s32 *)D_008FEAD8) = D_003EA6DC;
        func_0017F9A0(0x11AD8, 0, 0, 0, ((void *)D_008FEAD0));
        func_0026E560(0x9A080400);
        D_003EA6E0 += 1;
        break;
    case 1:
        if (func_0017F900() != 0) {
            D_003EA6E0 += 1;
        }
        break;
    case 3:
        func_0026E690(0x9A088426, D_003EA6DC);
        D_003EA6E0 = 0;
        var_s0 = 1;
        break;
    }
    return var_s0;
}

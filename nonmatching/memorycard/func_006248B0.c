/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017F9A0(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_00656F30[];
extern char D_0065C100[];
extern char D_0065C120[];
extern M2C_UNK func_00624AD0;
extern M2C_UNK func_00624B20;

void func_006248B0(s32 arg0) {
    s32 var_a0;

    switch (arg0) {                                 /* irregular */
    case 3:
        (*(s32 *)D_0065C100) = 0x10372;
        var_a0 = 0x10373;
        break;
    case 1:
        (*(s32 *)D_0065C100) = 0x1037B;
        var_a0 = 0x10374;
        break;
    case 2:
        (*(s32 *)D_0065C100) = 0x1037A;
        var_a0 = 0x1037B;
        break;
    default:
    case 6:
    case 5:
        (*(s32 *)D_0065C100) = 0;
        var_a0 = 0x1037B;
        break;
    }
    (*(s32 *)D_0065C120) = var_a0;
    if ((*(s32 *)D_0065C100) != 0) {
        func_0017F9A0((*(s32 *)D_0065C100), &func_00624B20, 0, 0, ((void *)D_00656F30));
    }
    if ((*(s32 *)D_0065C120) != 0) {
        func_0017F9A0((*(s32 *)D_0065C120), &func_00624AD0, 0, 0, ((void *)D_00656F30));
    }
}

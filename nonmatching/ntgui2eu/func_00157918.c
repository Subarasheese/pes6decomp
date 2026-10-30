/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
M2C_UNK func_00158A50(s32 *);                       /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00159398(M2C_UNK, s32, s32);           /* extern */
extern char D_005BEDA8[];
extern char D_005BEDAC[];
extern char D_005BEDB0[];
extern char D_011E38F4[];
extern char D_011E38F8[];
extern char D_011E38FC[];
extern char D_011E3900[];

s32 func_00157918(void *arg0) {
    M2C_UNK var_a0;
    s32 var_a1;
    s32 var_v1;

    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if ((*(s32 *)D_011E38F4) > 0) {
            (*(s32 *)D_011E38F4) -= 1;
            return 0;
        }
        func_00158A50(((void *)D_011E38F4));
        switch ((*(s32 *)D_011E3900)) {                       /* irregular */
        case 0:
            var_a1 = (*(s32 *)D_005BEDA8);
            var_v1 = (*(s32 *)D_011E38FC) * 0x20C;
            var_a0 = 0;
block_12:
            func_00159398(var_a0, var_a1 + var_v1 + 0x10C, (*(s32 *)D_011E38F8));
            break;
        case 1:
            var_a1 = (*(s32 *)D_005BEDAC);
            var_v1 = (*(s32 *)D_011E38FC) * 0x20C;
            var_a0 = 1;
            goto block_12;
        case 2:
            func_00159398(2, (*(s32 *)D_005BEDB0) + ((*(s32 *)D_011E38FC) * 0x20C) + 0x10C, (*(s32 *)D_011E38F8));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0x157A58;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

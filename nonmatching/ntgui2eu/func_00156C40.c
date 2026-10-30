/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
M2C_UNK func_00158A50(s32 *);                       /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00158DF8(M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern char D_005BEDA8[];
extern char D_005BEDAC[];
extern char D_005BEDB0[];
extern char D_011E2444[];
extern char D_011E2448[];
extern char D_011E244C[];
extern char D_011E2450[];
extern char D_011E2480[];

s32 func_00156C40(void *arg0) {
    M2C_UNK var_a1;
    s32 temp_a4;
    s32 var_a2;
    s32 var_a4;

    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if ((*(s32 *)D_011E2444) > 0) {
            (*(s32 *)D_011E2444) -= 1;
            return 0;
        }
        func_00158A50(((void *)D_011E2444));
        switch ((*(s32 *)D_011E2450)) {                       /* irregular */
        case 1:
            var_a2 = (*(s32 *)D_005BEDA8);
            var_a4 = (*(s32 *)D_011E244C) * 0x20C;
            var_a1 = 0;
block_12:
            func_00158DF8((M2C_UNK *)0x011E2480, var_a1, var_a2 + var_a4 + 0x10C, (*(s32 *)D_011E2448), var_a4);
            break;
        case 2:
            var_a2 = (*(s32 *)D_005BEDB0);
            var_a4 = (*(s32 *)D_011E244C) * 0x20C;
            var_a1 = 2;
            goto block_12;
        case 3:
            temp_a4 = (*(s32 *)D_011E244C) * 0x20C;
            func_00158DF8(((void *)D_011E2480), 1, (*(s32 *)D_005BEDAC) + temp_a4 + 0x10C, (*(s32 *)D_011E2448), temp_a4);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0x156D98;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

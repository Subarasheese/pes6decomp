/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
extern s32 func_00158B88(void);
M2C_UNK func_00158A50();                            /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_001594E0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005BDA80[];
extern char D_005BEE24[];
extern char D_005FCF00[];
extern char D_011E6BB0[];
extern char D_011E6BB4[];

s32 func_0015F828(void) {
    switch (M2C_FIELD(((void *)D_005BEE24), s32 *, 0)) {     /* irregular */
    case 0:
        if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
            if ((*(s32 *)D_011E6BB4) > 0) {
                (*(s32 *)D_011E6BB4) -= 1;
            } else {
                func_00158A50();
                func_001594E0(((void *)D_005BDA80), 0, ((void *)D_005FCF00));
                M2C_FIELD(((void *)D_005BEE24), s32 *, -0x11DC) = 1;
            }
block_10:
        }
        return 0;
    case 1:
        if (func_00158B68() == 0) {
            (*(s32 *)D_011E6BB0) = func_00158B88();
            return 1;
        }
        goto block_10;
    default:
        return 0;
    }
}

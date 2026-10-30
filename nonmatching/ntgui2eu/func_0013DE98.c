/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001378E8(void);
M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
s32 func_001B0444(M2C_UNK *);                       /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];
extern char D_011DA048[];
extern char D_011DA2A0[];

void func_0013DE98(void) {
    s32 temp_s0;
    s32 temp_s0_2;

    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), func_001378E8() == 0, 0x40);
    }
    temp_s0 = (func_001B0444(((void *)D_011DA048)) == 0) ? 0 : 1;
    temp_s0_2 = (func_001B0444(((void *)D_011DA2A0)) == 0) ? 0 : temp_s0;
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), temp_s0_2, 0x40);
    }
}

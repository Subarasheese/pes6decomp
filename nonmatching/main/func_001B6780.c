/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001B5770();                            /* extern */
extern char D_005228F0[];
extern void *D_00522938;
extern char D_0052293C[];
extern char D_00522944[];
extern char D_0052294C[];

s32 func_001B6780(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (((void *)D_005228F0) != NULL) {
        var_s1 = M2C_FIELD(((void *)D_005228F0), s32 *, 0x4C);
    }
    if (arg0 != 0) {
        func_001B5770();
    } else {
        func_00153FA0(D_00522938);
        D_00522938 = NULL;
        (*(s32 *)D_0052293C) = 0;
        (*(u8 *)D_0052294C) = ((*(u8 *)D_0052294C) & ~4) | 4;
    }
    (*(s32 *)D_00522944) = 1;
    M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~2) | 2);
    M2C_FIELD(((void *)D_005228F0), s32 *, 0xC) = 1;
    M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~1) | (0 & 1));
    return var_s1;
}

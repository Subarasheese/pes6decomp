/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_00153FA0(void *);
M2C_UNK func_001B5770(s32);                         /* extern */
extern char D_005228F0[];
extern void *D_00522938;
extern char D_0052293C[];
extern char D_00522944[];
extern char D_0052294C[];

void func_001B66C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001F08B0(arg0);
    if (temp_v0 != 0) {
        func_001B5770(temp_v0);
    } else {
        func_00153FA0(D_00522938);
        D_00522938 = NULL;
        (*(s32 *)D_0052293C) = 0;
        (*(u8 *)D_0052294C) = ((*(u8 *)D_0052294C) & ~4) | 4;
    }
    M2C_FIELD(((void *)D_005228F0), s32 *, 0xC) = 1;
    M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~2) | 2);
    (*(s32 *)D_00522944) = 1;
    M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~1) | (0 & 1));
}

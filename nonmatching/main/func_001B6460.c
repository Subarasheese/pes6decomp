/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern char D_005228F0[];
extern void *D_00522938;
extern char D_0052293C[];
extern char D_00522944[];
extern char D_0052294C[];
extern char D_00522960[];

u64 func_001B6460(s32 arg0) {
    u64 temp_s1;

    temp_s1 = (u64) ((s64) (*(u8 *)D_00522960) << 0x3E) >> 0x3F;
    (*(u8 *)D_00522960) = ((*(u8 *)D_00522960) & ~2) | ((arg0 & 1) * 2);
    if ((temp_s1 == 0) && (arg0 == 1)) {
        func_00153FA0(D_00522938);
        (*(s32 *)D_0052293C) = 0;
        D_00522938 = NULL;
        M2C_FIELD(((void *)D_005228F0), s32 *, 0xC) = 1;
        (*(u8 *)D_0052294C) = ((*(u8 *)D_0052294C) & ~4) | 4;
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~2) | 2);
        (*(s32 *)D_00522944) = 1;
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x70) & ~1) | (0 & 1));
    } else if (arg0 == 0) {
        func_00153FA0(D_00522938);
        D_00522938 = NULL;
        (*(s32 *)D_0052293C) = 0;
        (*(u8 *)D_0052294C) = ((*(u8 *)D_0052294C) & ~4) | 4;
    }
    return temp_s1;
}

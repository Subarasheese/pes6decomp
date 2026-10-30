/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BBC20(s32);
extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
extern void func_001B5C10(void *);
extern void *D_005228F0;
extern char D_00522968[];

void func_001B6120(void) {
    s32 var_s2;
    u32 var_s2_2;
    void **var_s1;
    void **var_s1_2;

    if ((*(s32 *)D_00522968) != 0) {
        func_001BBC20(M2C_FIELD(&D_005228F0, s32 *, 0x78));
        M2C_FIELD(&D_005228F0, s32 *, 0x78) = 0;
    }
    var_s2 = 0;
    var_s1 = &D_005228F0 + 0x20;
    do {
        func_001B5C10(var_s1);
        var_s2 += 1;
        var_s1 += 0xC;
    } while (var_s2 < 2);
    var_s2_2 = 0;
    var_s1_2 = &D_005228F0;
    do {
        func_001D7F10(*var_s1_2);
        var_s2_2 += 1;
        *var_s1_2 = NULL;
        var_s1_2 += 4;
    } while (var_s2_2 < 2U);
    if (M2C_FIELD(&D_005228F0, void **, 0x1C) != NULL) {
        func_001B9C60(M2C_FIELD(&D_005228F0, void **, 0x1C));
        M2C_FIELD(&D_005228F0, void **, 0x1C) = NULL;
    }
    M2C_FIELD(&D_005228F0, u8 *, 0x18) = (u8) ((M2C_FIELD(&D_005228F0, u8 *, 0x18) & ~1) | (0 & 1));
}

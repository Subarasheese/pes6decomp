/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BB730(void);
extern void func_001BB400(void *, s32);
M2C_UNK func_001BB4F0(s32, void *);                 /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 D_003E9918;
extern char D_00524A50[];

void func_001BAC20(void) {
    u16 *var_s0;
    u16 *var_s0_2;
    u16 var_s1;
    u32 var_s1_2;

    if (D_003E9918 == 0) {
        D_003E9918 = func_001BB730();
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00524A50);
    do {
        func_001C48E8((s32) var_s0, 0, 0x20);
        func_001BB400(var_s0 + 0x10, (s32) var_s0);
        var_s1 += 1;
        *var_s0 = var_s1;
        var_s0 += 0x20;
    } while (var_s1 < 0x280U);
    var_s1_2 = 0;
    var_s0_2 = ((void *)D_00524A50);
    do {
        func_001BB4F0(D_003E9918, var_s0_2 + 0x10);
        var_s1_2 += 1;
        var_s0_2 += 0x20;
    } while (var_s1_2 < 0x280U);
}

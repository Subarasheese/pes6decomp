/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_001DA4B0(s32);
extern s32 func_0021DF90(s32);
M2C_UNK func_001D5A50(M2C_UNK);                     /* extern */
M2C_UNK func_001D5C40(s32);                         /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
extern char D_00CF9EF0[];
extern char D_00CF9EF8[];
extern char D_00CF9F00[];
extern char D_00CF9F08[];

s32 func_00CEFA10(void) {
    s32 *var_s0;
    s32 *var_s0_4;
    s32 *var_s1_3;
    u32 *var_s1_2;
    u32 var_s0_2;
    u32 var_s0_3;
    u32 var_s1;
    u32 var_s1_4;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF9EF0);
    do {
        func_001F0210(func_0021DF90(*var_s0));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CF9F00);
    do {
        func_001E7140(func_0021E000(*var_s1_2));
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 2U);
    var_s0_3 = 0;
    var_s1_3 = ((void *)D_00CF9F08);
    do {
        func_001DA4B0(*var_s1_3);
        var_s0_3 += 1;
        var_s1_3 += 4;
    } while (var_s0_3 < 2U);
    var_s1_4 = 0;
    var_s0_4 = ((void *)D_00CF9EF8);
    do {
        func_001D5C40(*var_s0_4);
        var_s1_4 += 1;
        var_s0_4 += 4;
    } while (var_s1_4 < 2U);
    func_001D5A50(0x1259F);
    return 1;
}

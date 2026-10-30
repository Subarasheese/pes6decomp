/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001D5D80(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_001D5EE0(s32, f32 *);                  /* extern */
M2C_UNK func_001E75A0(s32, f32 *);                  /* extern */
extern s32 D_003EB278;
extern char D_00CF9790[];
extern char D_00CF97A0[];
extern char D_00CF97A8[];
extern char D_00CF97AC[];

s32 func_00CDC690(void) {
    f32 sp38;
    f32 sp3C;
    s32 *var_s1_2;
    u32 *var_s0;
    u32 var_s0_2;
    u32 var_s1;

    sp38 = (*(f32 *)D_00CF97A8);
    sp3C = (*(f32 *)D_00CF97AC);
    if (D_003EB278 != 0) {
        return 1;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CF97A0);
    do {
        func_001E75A0(func_0021E000(*var_s0), &sp38);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CF9790);
    do {
        func_001D5EE0(*var_s1_2, &sp38);
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 4U);
    func_001D5D80(0x12592, &sp38);
    D_003EB278 = 1;
    return 1;
}

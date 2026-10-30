/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001D5A50(M2C_UNK);                     /* extern */
M2C_UNK func_001D5C40(s32);                         /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_00CCE350();                            /* extern */
M2C_UNK func_00CE41E0();                            /* extern */
M2C_UNK func_00CE45C0();                            /* extern */
extern s32 D_003EB278;
extern char D_00CF9790[];
extern char D_00CF97A0[];

s32 func_00CDC5B0(void) {
    s32 *var_s1_2;
    u32 *var_s0;
    u32 var_s0_2;
    u32 var_s1;

    if (D_003EB278 != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00CF97A0);
        do {
            func_001E7140(func_0021E000(*var_s0));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2U);
        var_s0_2 = 0;
        var_s1_2 = ((void *)D_00CF9790);
        do {
            func_001D5C40(*var_s1_2);
            var_s0_2 += 1;
            var_s1_2 += 4;
        } while (var_s0_2 < 4U);
        func_001D5A50(0x12592);
        D_003EB278 = 0;
    }
    func_00CE45C0();
    func_00CCE350();
    func_00CE45C0();
    func_00CE41E0();
    return 1;
}

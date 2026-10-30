/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009FB5A0(s32, M2C_UNK, M2C_UNK *, u8, u8, s32, u32, s32); /* extern */
extern char D_00A038F0[];

void func_009FB540(void *arg0, s32 arg1) {
    u32 var_a6;

    var_a6 = M2C_FIELD(arg0, u32 *, 8);
    if (var_a6 < 0x64U) {

    } else {
        var_a6 = 0x64;
    }
    func_009FB5A0(arg1, 0, ((void *)D_00A038F0), M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1), M2C_FIELD(arg0, s32 *, 4), var_a6, M2C_FIELD(arg0, s32 *, 0xC));
}

/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern u32 func_0017A670(s32);
M2C_UNK func_001B9250(s32, M2C_UNK *, s32, s32);    /* extern */
extern u8 D_003EA88C;
extern s16 D_003EA890;
extern char D_00CCD074[];
extern char D_00CCD07C[];
extern char D_00CCD088[];
extern M2C_UNK func_00C8B2C0;

s32 func_00C8AB20(void) {
    s16 var_v0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 1;
    if (func_0017A670(0) != 0xC) {
        if (D_003EA890 >= 0x3E) {
            if (D_003EA890 == 0x3E) {
                if (func_002DCA30() == 0) {
                    temp_a3 = (0 & 1) * 4;
                    temp_a2 = (*(u8 *)D_00CCD074) & ~4;
                    (*(u8 *)D_00CCD074) = temp_a2 | temp_a3;
                    func_001B9250((*(s32 *)D_00CCD088), &func_00C8B2C0, temp_a2, temp_a3);
                }
                D_003EA88C = 0xFF;
                var_s0 = 1;
                var_v0 = D_003EA890 + 1;
                goto block_16;
            }
        } else {
            temp_v0 = D_003EA890 * 4;
            if (temp_v0 >= 0x100) {
                D_003EA88C = 0;
            } else {
                D_003EA88C = 0xFF - (temp_v0 & 0xFF);
            }
            var_s0 = 0;
            var_v0 = D_003EA890 + 1;
block_16:
            D_003EA890 = var_v0;
        }
        (*(s16 *)D_00CCD07C) = (s16) D_003EA88C;
        return var_s0;
    }
    return 1;
}

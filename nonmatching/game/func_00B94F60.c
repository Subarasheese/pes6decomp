/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_00848210();                                /* extern */
M2C_UNK func_009E1C90(M2C_UNK);                     /* extern */
extern char D_00591C09[];
extern char D_00CBCD90[];

s32 func_00B94F60(void) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;

    if (func_002DCA30() != 0) {
        if (func_00848210() != 0) {
            func_009E1C90(1);
        }
    }
    var_a2 = 0;
    var_v0 = (*(u8 *)D_00591C09) != 5;
    var_a1 = 0;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(((void *)D_00CBCD90), u8 *, 0x22) != 0;
    }
    if (var_v0 != 0) {
        var_a0 = 1;
        if ((M2C_FIELD(((void *)D_00CBCD90), s32 *, 0x1C) != 4) && (M2C_FIELD(((void *)D_00CBCD90), s32 *, 0x1C) != 5)) {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            var_a1 = 1;
        }
    }
    if ((var_a1 != 0) && ((s32) M2C_FIELD(((void *)D_00CBCD90), u8 *, 2) >= 3)) {
        var_a2 = 1;
    }
    return var_a2 != 0;
}

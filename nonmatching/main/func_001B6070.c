/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B5990(M2C_UNK *);                   /* extern */
M2C_UNK func_001B5C40(M2C_UNK *);                   /* extern */
extern char D_005228F0[];
extern char D_00522954[];
extern char D_00522960[];

s32 func_001B6070(void) {
    s32 var_a0;

    var_a0 = (*(s32 *)D_00522954);
    if (((u64) ((s64) (*(u8 *)D_00522960) << 0x3E) >> 0x3F) != 0) {
        if ((*(s32 *)D_00522954) < 0xFF) {
            var_a0 = (*(s32 *)D_00522954) + 0x40;
            if (var_a0 >= 0x100) {
                var_a0 = 0xFF;
            }
        }
    } else if ((*(s32 *)D_00522954) > 0) {
        var_a0 = (*(s32 *)D_00522954) - 0x40;
        if (var_a0 < 0) {
            var_a0 = 0;
        }
    }
    if (var_a0 != (*(s32 *)D_00522954)) {
        M2C_FIELD(((void *)D_005228F0), s32 *, 0x64) = var_a0;
    }
    func_001B5990(((void *)D_005228F0));
    func_001B5C40(((void *)D_005228F0));
    return 0;
}

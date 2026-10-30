/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *, s32);              /* extern */
extern char D_005F7FF0[];

s32 *func_0010DE90(void *arg0, s32 arg1) {
    s32 *var_a0;
    s32 var_a1;

    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 6)) {
        var_a0 = (M2C_FIELD(arg0, u8 *, 5) != 0) ? (arg0 + 0x80) : (arg0 + 0x10);
        if (arg1 > 0) {
            var_a1 = arg1;
            do {
                var_a1 -= 1;
                var_a0 += *var_a0;
            } while (var_a1 != 0);
        }
        return var_a0;
    }
    func_0019DBD0(((void *)D_005F7FF0), arg1);
    return NULL;
}

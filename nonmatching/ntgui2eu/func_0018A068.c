/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018A028();                                /* extern */
M2C_UNK func_0018A038(void *, s32, s64);            /* extern */
extern char D_005C5994[];

void *func_0018A068(void *arg0, s64 arg1) {
    s32 temp_a1;
    s64 temp_a2;
    s64 var_s0;

    var_s0 = arg1;
    temp_a1 = func_0018A028();
    if (var_s0 & 0x80) {
        var_s0 = (var_s0 & 0xFFFFFF7F) + (*(s32 *)D_005C5994);
    }
    temp_a2 = M2C_FIELD(arg0, s64 *, 8) | (((u64) (var_s0 << 0x20) >> 0x20) << (temp_a1 * 4));
    M2C_FIELD(arg0, s64 *, 8) = temp_a2;
    func_0018A038(arg0, temp_a1 + 1, temp_a2);
    return arg0;
}

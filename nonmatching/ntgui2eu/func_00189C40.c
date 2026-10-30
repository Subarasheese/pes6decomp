/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A058();                            /* extern */
M2C_UNK func_0018A068(s32, s32);                    /* extern */
M2C_UNK func_0018A0E8(s32);                         /* extern */
M2C_UNK func_0018A100(s32, M2C_UNK);                /* extern */
M2C_UNK func_0018A128(s32, M2C_UNK);                /* extern */
extern char D_005C5994[];

void func_00189C40(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    s32 var_a1;
    s32 var_s0;
    s64 *var_s1;

    var_s0 = arg1;
    sp80 = arg2;
    sp88 = arg3;
    sp90 = arg4;
    sp98 = arg5;
    spA0 = arg6;
    spA8 = arg7;
    func_0018A058();
    func_0018A100(arg0, 1);
    func_0018A0E8(arg0);
    func_0018A128(arg0, 1);
    if (var_s0 > 0) {
        var_s1 = &sp80 + 8;
        do {
            var_a1 = M2C_FIELD(var_s1, s32 *, -8);
            if (var_a1 & 0x80) {
                var_a1 = (var_a1 & 0xFFFFFF7F) + (*(s32 *)D_005C5994);
            }
            var_s0 -= 1;
            func_0018A068(arg0, var_a1);
            var_s1 += 8;
        } while (var_s0 != 0);
    }
}

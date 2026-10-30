/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A058();                            /* extern */
M2C_UNK func_0018A068(s32, s32);                    /* extern */
M2C_UNK func_0018A0E8(s32);                         /* extern */
M2C_UNK func_0018A100(s32, M2C_UNK);                /* extern */
M2C_UNK func_0018A128(s32, M2C_UNK);                /* extern */
extern char D_005C5994[];

void func_00189CF8(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    s64 spB0;
    s64 spB8;
    s32 var_a1;
    s32 var_s1;
    s64 *var_s0;
    s64 *var_s3;

    var_s1 = arg1;
    var_s3 = arg0 + 0x10;
    sp90 = arg2;
    sp98 = arg3;
    spA0 = arg4;
    spA8 = arg5;
    spB0 = arg6;
    spB8 = arg7;
    func_0018A058();
    func_0018A100(arg0, 1);
    func_0018A0E8(arg0);
    func_0018A128(arg0, 1);
    var_s0 = &sp90;
    if (var_s1 > 0) {
        do {
            var_a1 = *var_s0;
            if (var_a1 & 0x80) {
                var_a1 = (var_a1 & 0xFFFFFF7F) + (*(s32 *)D_005C5994);
            }
            var_s0 += 0x10;
            func_0018A068(arg0, var_a1);
            var_s1 -= 1;
            *var_s3 = M2C_FIELD(var_s0, s64 *, -8);
            var_s3 += 8;
        } while (var_s1 != 0);
    }
}

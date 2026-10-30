/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A058();                            /* extern */
M2C_UNK func_0018A068(s32, M2C_UNK);                /* extern */
M2C_UNK func_0018A0E8(s32);                         /* extern */
M2C_UNK func_0018A100(s32, M2C_UNK);                /* extern */
M2C_UNK func_0018A128(s32, s32);                    /* extern */
extern char D_005C5994[];

void func_00189B78(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s32 var_a0;
    s32 var_a1;
    s64 *var_a2;
    void *var_s0;

    sp70 = arg2;
    sp78 = arg3;
    sp80 = arg4;
    sp88 = arg5;
    sp90 = arg6;
    sp98 = arg7;
    func_0018A058();
    func_0018A100(arg0, 0);
    func_0018A0E8(arg0);
    func_0018A068(arg0, 0xE);
    func_0018A128(arg0, arg1);
    var_s0 = arg0 + 0x10;
    var_a2 = &sp70;
    if (arg1 > 0) {
        var_a1 = arg1;
        do {
            var_a0 = *var_a2;
            if (var_a0 & 0x80) {
                var_a0 = (var_a0 & 0xFFFFFF7F) + (*(s32 *)D_005C5994);
            }
            M2C_FIELD(var_s0, s32 *, 8) = var_a0;
            var_a2 += 0x10;
            var_a1 -= 1;
            M2C_FIELD(var_s0, s32 *, 0xC) = 0;
            M2C_FIELD(var_s0, s64 *, 0) = (s64) M2C_FIELD(var_a2, s64 *, -8);
            var_s0 += 0x10;
        } while (var_a1 != 0);
    }
}

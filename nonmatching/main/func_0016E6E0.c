/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 sceSifBindRpc(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_001610B0(M2C_UNK);                     /* extern */
extern char D_00385924[];
extern char D_0038593C[];
extern char D_003861C0[];

void func_0016E6E0(void) {
    s32 *var_v1;
    s32 var_a1;
    s32 var_v0;

    if ((*(s32 *)D_0038593C) == 0) {
        var_a1 = M2C_FIELD(((void *)D_00385924), s32 *, 0);
loop_2:
        if (sceSifBindRpc(((void *)D_003861C0) + 0x61C0, var_a1, 0) >= 0) {
            var_v1 = ((void *)D_0038593C) + 0x593C;
            if (M2C_FIELD(((void *)D_003861C0), s32 *, 0x24) == 0) {
                var_v0 = 0xFFFB;
loop_10:
                if (var_v0 != -1) {
                    var_v0 -= 4;
                    goto loop_10;
                }
                var_a1 = M2C_FIELD(((void *)D_00385924), s32 *, 0x5924);
                goto loop_2;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            *var_v1 += 1;
            return;
        }
        func_001610B0(0x3CA508);
loop_6:
        goto loop_6;
    }
    var_v1 = ((void *)D_0038593C) + 0x593C;
    *var_v1 += 1;
}

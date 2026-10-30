/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016AB68(void *, s32, void *);         /* extern */
extern char D_005BFF94[];

void func_0016A870(void *arg0) {
    s32 spC;
    s64 sp10;
    M2C_UNK (*sp18)(s32, s64, M2C_UNK);
    M2C_UNK (*temp_v0)(s32, s64, M2C_UNK);
    s32 temp_a1;
    s32 var_v0;
    s64 temp_v1;
    void *temp_s0;
    void *var_a2;
    void *var_s2;

    if (M2C_FIELD(((void *)D_005BFF94), s32 *, 0) != M2C_FIELD(arg0, s64 *, 0xFC0)) {
        var_a2 = M2C_FIELD(arg0, void **, 0xFBC);
        var_s2 = arg0 + 0xFA0;
        if (var_a2 != NULL) {
            var_v0 = M2C_FIELD(((void *)D_005BFF94), s32 *, 0);
            do {
                temp_s0 = M2C_FIELD(var_a2, void **, 0x1C);
                temp_v1 = M2C_FIELD(var_a2, s64 *, 0) - (var_v0 - M2C_FIELD(arg0, s64 *, 0xFC0));
                M2C_FIELD(var_a2, s64 *, 0) = temp_v1;
                if (temp_v1 <= 0) {
                    temp_a1 = M2C_FIELD(var_a2, s32 *, 0xC);
                    temp_v0 = M2C_FIELD(var_a2, M2C_UNK (**)(s32, s64, M2C_UNK), 0x18);
                    M2C_FIELD(var_s2, void **, 0x1C) = temp_s0;
                    spC = temp_a1;
                    sp18 = temp_v0;
                    sp10 = M2C_FIELD(var_a2, s64 *, 0x10);
                    func_0016AB68(var_a2, temp_a1, var_a2);
                    temp_v0(spC, sp10, 0);
                } else {
                    var_s2 = var_a2;
                }
                var_a2 = temp_s0;
                var_v0 = M2C_FIELD(((void *)D_005BFF94), s32 *, -0x6C);
            } while (var_a2 != NULL);
        }
        M2C_FIELD(arg0, s64 *, 0xFC0) = (s64) M2C_FIELD(((void *)D_005BFF94), s32 *, 0);
    }
}

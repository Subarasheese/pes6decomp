/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010D370(s32, void *);                 /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F7F48[];
extern char D_005F7F68[];
extern char D_005F7F80[];
extern char D_011B5D30[];
extern char D_011B5D38[];

void func_0010CFE8(s32 arg0, void *arg1) {
    M2C_UNK (*temp_a5)(s32, s32, void *, void *, void *, M2C_UNK);
    s32 var_s2;
    s32 var_v1;
    u16 temp_a2;
    u16 temp_a3;
    void *var_s0;

    if (arg0 == 0) {
        func_001AD620(((void *)D_005F7F48), 0xD0, ((void *)D_005F7F80));
    }
    if (arg1 == NULL) {
        func_001AD620(((void *)D_005F7F48), 0xD1, ((void *)D_005F7F68));
    }
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        var_s0 = arg1 + 0x138;
        M2C_FIELD(M2C_FIELD(((void *)D_011B5D30), void **, 0), M2C_UNK (**)(s32, M2C_UNK *), 0x118)(arg0, ((void *)D_011B5D38));
        var_s2 = 8;
        var_v1 = M2C_FIELD(var_s0, s32 *, 4);
loop_6:
        var_s2 -= 1;
        temp_a2 = M2C_FIELD(var_s0, u16 *, 0);
        temp_a3 = M2C_FIELD(var_s0, u16 *, 2);
        var_s0 += 8;
        temp_a5 = M2C_FIELD(M2C_FIELD(((void *)D_011B5D30), void **, 0x5D30), M2C_UNK (**)(s32, s32, void *, void *, void *, M2C_UNK), 0x11C);
        temp_a5(arg0, (((s32) (M2C_FIELD(arg1, u8 *, 0x2A0) * (var_v1 & 0xFF)) >> 7) << 0x18) | (var_v1 & 0xFFFFFF), arg1 + 0x60 + (temp_a2 * 0x10), arg1 + 0xF0 + (temp_a3 * 8), ((void *)D_011B5D38) + 0x5D38, temp_a5);
        if (var_s2 >= 0) {
            var_v1 = M2C_FIELD(var_s0, s32 *, 4);
            goto loop_6;
        }
        func_0010D370(arg0, arg1);
    }
}

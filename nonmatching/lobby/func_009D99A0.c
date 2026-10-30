/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */
extern void *D_00A7DEB0;

void func_009D99A0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    void *temp_s1;
    void *temp_v0;

    func_001D7F10(M2C_FIELD(D_00A7DEB0, void **, 0x1F4));
    var_s0 = 0;
    do {
        func_001B9C60(M2C_FIELD((D_00A7DEB0 + (var_s0 * 4)), void **, 4));
        var_s0 += 1;
    } while (var_s0 < 2);
    func_002DC1D0(M2C_FIELD(D_00A7DEB0, s32 *, 0xC));
    func_002DF960(M2C_FIELD(D_00A7DEB0, s32 *, 0x10));
    var_s0_2 = 0;
    do {
        temp_v0 = D_00A7DEB0 + (var_s0_2 * 0x28);
        temp_s1 = temp_v0 + 0x14;
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x14));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 4));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 0x10));
        func_0099D280(M2C_FIELD(temp_s1, s32 *, 8));
        func_0099D530(M2C_FIELD(temp_s1, s32 *, 0xC));
        func_001C48E8(temp_s1, 0, 0x28);
        var_s0_2 += 1;
    } while (var_s0_2 < 0xC);
    var_s0_3 = 0;
    do {
        func_001D7F10(M2C_FIELD((D_00A7DEB0 + (var_s0_3 * 4)), void **, 0x1F8));
        var_s0_3 += 1;
    } while (var_s0_3 < 2);
}

/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */
extern void *D_00A7DDF8;

void func_009CF2B0(void) {
    s32 var_s0;
    void *temp_s1;
    void *temp_v0;

    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7EC));
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F0));
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F8));
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F4));
    func_002DF960(M2C_FIELD(D_00A7DDF8, s32 *, 0x9A0));
    var_s0 = 0;
    do {
        temp_v0 = D_00A7DDF8 + (var_s0 * 0x34);
        temp_s1 = temp_v0 + 0x7FC;
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x7FC));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 4));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 0x14));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 8));
        func_001D7F10(M2C_FIELD(temp_s1, void **, 0xC));
        func_0099D280(M2C_FIELD(temp_s1, s32 *, 0x10));
        var_s0 += 1;
    } while (var_s0 < 8);
}

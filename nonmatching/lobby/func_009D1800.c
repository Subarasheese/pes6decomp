/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
extern void *D_00A7DE00;

void func_009D1800(void) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0x68));
    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0x6C));
    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0x70));
    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0xA4));
    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0xA8));
    func_001D7F10(M2C_FIELD(D_00A7DE00, void **, 0xBC));
    var_s2 = 0;
    do {
        var_s1 = 0;
loop_2:
        func_001D7F10(M2C_FIELD(((var_s2 * 8) + D_00A7DE00 + (var_s1 * 4)), void **, 0x74));
        var_s1 += 1;
        if (var_s1 < 2) {
            goto loop_2;
        }
        func_001D7F10(M2C_FIELD((D_00A7DE00 + (var_s2 * 4)), void **, 0x94));
        var_s2 += 1;
    } while (var_s2 < 4);
    var_s0 = 0;
    do {
        temp_s1 = var_s0 * 4;
        func_001D7F10(M2C_FIELD((D_00A7DE00 + temp_s1), void **, 0xAC));
        func_001D7F10(M2C_FIELD((D_00A7DE00 + temp_s1), void **, 0xB4));
        var_s0 += 1;
    } while (var_s0 < 2);
    func_002DF960(M2C_FIELD(D_00A7DE00, s32 *, 0xC0));
    func_002DF960(M2C_FIELD(D_00A7DE00, s32 *, 0xC4));
}

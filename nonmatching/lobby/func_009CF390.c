/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void *D_00A7DDF8;

void func_009CF390(void) {
    s32 var_s0;
    s32 var_v1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7EC));
    M2C_FIELD(D_00A7DDF8, void **, 0x7EC) = NULL;
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F0));
    M2C_FIELD(D_00A7DDF8, void **, 0x7F0) = NULL;
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F8));
    var_s0 = 0;
    M2C_FIELD(D_00A7DDF8, void **, 0x7F8) = NULL;
    M2C_FIELD(D_00A7DDF8, s32 *, 0x99C) = 0;
    do {
        temp_v0 = D_00A7DDF8 + (var_s0 * 0x34);
        temp_s1 = temp_v0 + 0x7FC;
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x800));
        M2C_FIELD(temp_s1, s32 *, 4) = 0;
        var_v1 = 0;
loop_2:
        temp_v0_2 = temp_s1 + (var_v1 * 4);
        var_v1 += 1;
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = 0;
        if (var_v1 < 5) {
            goto loop_2;
        }
        func_001D7F10(M2C_FIELD(temp_s1, void **, 0x14));
        var_s0 += 1;
        M2C_FIELD(temp_s1, void **, 0x14) = NULL;
    } while (var_s0 < 8);
    func_001D7F10(M2C_FIELD(D_00A7DDF8, void **, 0x7F4));
    M2C_FIELD(D_00A7DDF8, void **, 0x7F4) = NULL;
}
